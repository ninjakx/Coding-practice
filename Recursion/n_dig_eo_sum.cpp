#include <iostream>
#include <string>
#include <vector>
#include <string_view>
#include <cmath>

using namespace std;

class Solution {
public:

void gen_num(string ans, int n, int ind){

    if (ind==n){
        int sum=0;
        for (int i=0; i<ans.length();i++)
        {
            if ((i%2)==0)
                sum = sum + (ans[i]-'0');

            else
                sum = sum - (ans[i]-'0');
        }

//        if (n%2==1)
//            sum = sum + (ans[n/2]-'0'); // remove mid element from the calculation

    if (sum==0)
        cout<<ans<<" ";

        return;
    }

    int add = 1;
    if(ind==0){
        add = 1;
    }
    else
        add = 0;

    for (int b=0+add; b<=9; b++){
        gen_num(ans+to_string(b), n, ind+1);
    }
}

};


int main()
{
    Solution sol;
    int n=3;
    sol.gen_num("", n, 0);

}

