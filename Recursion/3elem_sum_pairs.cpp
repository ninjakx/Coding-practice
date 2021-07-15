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
        cout<<endl;
    }

    bool recur(vector <int>a, vector<int> &ans,  int n, int sum, int co){

        if (sum==0 && co==3){
            print(ans);
            return true;
        }

        if (co==3 || n==0 || sum<0){
            return false;
        }

        ans.push_back(a[n-1]);
        recur(a, ans, n-1, sum-a[n-1], co+1);
        ans.pop_back();
        recur(a, ans, n-1, sum, co);

    return false;

    }


};


int main()
{
    Solution sol;
    vector<int>a = { 2, 7, 4, 0, 9, 5, 1, 3 };
    vector<int>ans;
    int n = a.size();
    bool exist = sol.recur(a, ans, n, 6, 0);
    sol.print(ans);

}
