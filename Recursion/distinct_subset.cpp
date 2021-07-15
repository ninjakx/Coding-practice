#include <iostream>
#include <string>
#include <vector>
#include <string_view>
#include <cmath>
#include <climits>
#include <cstring>
#include <algorithm>

using namespace std;

class Solution {
public:

    void print(vector<int> res){
        for(auto it: res){
            cout<<it<<" ";
        }
        cout<<endl;
    }

    bool recur(vector <int>a, vector<int> &ans,  int n, int ind, int co){

    if(ind==n){
        print(ans);
        return false;
    }
      ans.push_back(a[ind]);
      recur(a, ans, n, ind + 1, co+1);
      ans.pop_back();
      
      // Removing adjacent duplicates
      while(a[ind]==a[ind+1]){
        ind++;
      }
      recur(a, ans, n, ind+1, co);

    return false;

    }
};


int main()
{
    Solution sol;
    vector<int>a = { 1, 2, 1 };
    vector<int>ans;
    sort(a.begin(), a.end());

    int n = a.size();
    int p =2;
    bool exist = sol.recur(a, ans, n, 0, p);
    sol.print(ans);

}
