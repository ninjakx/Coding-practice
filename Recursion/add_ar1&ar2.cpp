#include <iostream>
#include <string>
#include <vector>
#include <string_view>
#include <cmath>
#include <climits>
#include <cstring>

using namespace std;

class Solution {
public:

    void print(vector<int> res){
        for(auto it: res){
            cout<<it<<" ";
        }
    }

    void split(int num, vector<int> &result){

        if (num>0)
        {
           split(num/10, result);
           result.push_back(num%10);
        }


    }

    void sum_ar(vector<int> ar1, vector<int> ar2, vector<int> &res, int ind){
        int n = ar1.size();
        int m = ar2.size();

        while(ind<m && ind<n){
            int sum = ar1[ind]+ar2[ind];
            split(sum,res);
        ind ++;
        }

        while(ind<m){
            split(ar2[ind++], res);
        }

        while(ind<n){
            split(ar1[ind++], res);
        }

    }

};


int main()
{
    Solution sol;
    vector<int>a = {2, 7};
    vector<int>b = { 4, 67, 2, 8 };
    vector<int>ans;
    sol.sum_ar(a,b,ans,0);
    sol.print(ans);

}
