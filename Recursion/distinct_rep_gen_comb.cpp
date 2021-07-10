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

    void printvec(vector <int> r){
    for (auto it: r){
        cout<<it<<" ";
    }
    cout<<endl;
    }
    void comb(int ar[], int k, int i, int n, vector<int> &out){

    if (out.size()==k){
            printvec(out);
        return;
    }

    for(int j=i; j<n; j++)
    {
        out.push_back(ar[j]);
        comb(ar, k, j, n, out);
        out.pop_back();
    }

    }


};



int main()
{
    Solution sol;
    int k=2;
    int ar[] = {1,2,1};
    int s = sizeof(ar)/sizeof(ar[0]);
    vector <int> res;
    sol.comb(ar,k, 0, s, res);
}
