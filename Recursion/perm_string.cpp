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

 void perm(string st, int i, int n){

     if (i==n-1)
     {
         cout<<st<<" ";
         return;
     }

     for (int j =i; j<n; j++){
        swap(st[i], st[j]);
        perm(st, i+1, n);
        swap(st[i], st[j]);
     }


 }

};


int main()
{
    Solution sol;
    string s = "ABC";
    int l = s.length();
    sol.perm(s, 0, l);
}
