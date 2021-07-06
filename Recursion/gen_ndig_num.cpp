#include <iostream>
#include <string>
#include <vector>
#include <string_view>

using namespace std;

class Solution {
public:

void gen_num(vector<char>ans, int n, int ind){

    if (ind==n){
        for (auto it: ans){
             cout<<it;
        }
        cout<<" ";
        return;
    }

        for (int i = 0; i<=9; i++){
            ans[ind] = i+'0';
            gen_num(ans, n, ind+1);
        }

}

};



int main()
{
    Solution sol;
    int n=4;
    vector<char> ch(n, ' ');
    sol.gen_num(ch, n, 0);

}

