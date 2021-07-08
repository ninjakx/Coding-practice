#include <iostream>
#include <string>
#include <vector>
#include <string_view>
#include <cmath>

using namespace std;

class Solution {
public:

void gen_num(int prev, string ans, int n, int ind){

    if (n==ind){
            cout<<'12'+'0'<<" ";
        return;
    }

    for (int i=1+prev; i<=9; i++){
        gen_num(i, ans+to_string(i), n, ind+1);
    }

}

};


int main()
{
    Solution sol;
    int n=3;
    sol.gen_num(0,"", n, 0);

}
