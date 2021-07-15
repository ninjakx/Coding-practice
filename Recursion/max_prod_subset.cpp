#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:

    void print(vector<int> res){
        for(auto it: res){
            cout<<it<<" ";
        }
        cout<<endl;
    }

    bool recur(vector <int>a, vector<int> &ans,  int n, int ind, int prod, int &maxm){

    if(ind==n){
        if (prod>maxm){
//            print(ans);
            maxm = prod;
        }
        return false;
    }

      ans.push_back(a[ind]);
      recur(a, ans, n, ind + 1, prod*a[ind], maxm);
      ans.pop_back();
      recur(a, ans, n, ind+1, prod, maxm);


    return false;

    }
};


int main()
{
    Solution sol;
    vector<int>a = { -6, 4, -5, 8, -10, 0, 8 };
    vector<int>ans;

    int maxm=0;
    int n = a.size();
    bool exist = sol.recur(a, ans, n, 0, 1, maxm);
    cout<<maxm;

}
