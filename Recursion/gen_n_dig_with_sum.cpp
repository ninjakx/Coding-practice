#include <iostream>
#include <string>
#include <vector>
#include <string_view>

using namespace std;

class Solution {
public:

void gen_num(vector<char>ans, int n, int ind, int sum){
    int add = 0;
    int digit;
    if (ind==n){
        if (sum==0){
            for (auto it: ans){
                 cout<<it;
            }
            cout<<"\n";
        }
        return;
    }

    if (ind==0){
        add = 1;
    }
    else
        add = 0;

        for (int i = 0+add; i<=9; i++){
            digit = i;
            ans[ind] = i+'0';
            gen_num(ans, n, ind+1, sum-digit);
        }
}

};



int main()
{
    Solution sol;
    int n=3;
    int sum = 17;
    vector<char> ch(n, ' ');
    sol.gen_num(ch, n, 0, sum);

}


---------
    
    
#include <iostream>
#include <string>
#include <vector>
#include <string_view>

using namespace std;

class Solution {
public:

void gen_num(string ans, int n, int ind, int sum){
    int add = 0;
    int digit;
    if (ind==n){
        if (sum==0){
            cout<<ans<<endl;
        }
        return;
    }

    if (ind==0){
        add = 1;
    }
    else
        add = 0;

        for (int i = 0+add; i<=9; i++){
            digit = i;
//            ans = ans+to_string(i);
            gen_num(ans+to_string(i), n, ind+1, sum-digit);
        }
}

};



int main()
{
    Solution sol;
    int n=3;
    int sum = 14;
    sol.gen_num("", n, 0, sum);

}


