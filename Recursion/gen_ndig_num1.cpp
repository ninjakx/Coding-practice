#include <iostream>
#include <string>
#include <vector>
#include <string_view>

using namespace std;

class Solution {
public:

void gen_num(vector<char>ans, int n, int ind){
    int add = 0;
    if (ind==n){
        for (auto it: ans){
             cout<<it;
        }
        cout<<" ";
        return;
    }

    if (ind==0){
        add = 1;
    }
    else
        add = 0;

        for (int i = 0+add; i<=9; i++){
            ans[ind] = i+'0';
            gen_num(ans, n, ind+1);
        }
}

};



int main()
{
    Solution sol;
    int n=3;
    vector<char> ch(n, ' ');
    sol.gen_num(ch, n, 0);

}

