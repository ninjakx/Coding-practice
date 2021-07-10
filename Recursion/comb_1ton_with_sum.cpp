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
    void comb(int i, int n, vector <int> out){

    if (n==0){
            printvec(out);
        return;
    }

    for(int j=i; j<=n; j++)
    {
        out.push_back(j);
        comb(j,n-j, out);
        out.pop_back();

    }

    }


};



int main()
{
    Solution sol;
    int n=5;
    vector <int> res;
    sol.comb(1, n, res);
}
