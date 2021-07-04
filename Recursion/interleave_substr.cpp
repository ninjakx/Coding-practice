#include <iostream>
#include <string>
#include <vector>
#include <string_view>

using namespace std;

class Solution {
public:

void interleave(string ans, string s, string t){
    if (s.length()==0 && t.length()==0)
    {
        cout<<ans<<" ";
        return;
    }


    if (s.length())
    {
        interleave(ans + s[0], s.substr(1), t);
    }

    if (t.length())
    {
        interleave(ans + t[0], s, t.substr(1));
    }
}

};


int main()
{
    Solution sol;
    string s = "ABC";
    string t = "ACB";
    sol.interleave(s,t,"");

}

