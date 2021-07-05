#include <iostream>
#include <string>
#include <vector>
#include <string_view>

using namespace std;

class Solution {
public:

void bin(string ans, int n, int n1, int n0){
    if (n0>n1)
    {
        return;

    }

    if (n==0){
        cout<<ans<<" ";
        return;
    }

    bin(ans+"1", n-1, n1+1, n0);
    bin(ans+"0", n-1, n1, n0+1);

}

};



int main()
{
    Solution sol;
    int n = 4;
    sol.bin("", n, 0, 0);

}

