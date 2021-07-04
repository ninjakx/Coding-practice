#include <iostream>
#include <string>
#include <vector>
#include <string_view>

using namespace std;

class Solution {
public:

        string gen_str(string st1, string st2){
            if (st2.length()==0){
                return "";
            }
            char ch = st2[0];
            st2 = st2.substr(1);
            gen_str(st1, st2);

            for (int i=0; i<st1.length(); i++)
            {
                char s1 = st1.at(i);
                string res = ""s + s1+ch;
                cout<<res<<" ";
            }
        }

};


int main()
{
    Solution s;

    vector<string> strs = {"", "./", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int n = 2;
    int m = 3;

    string s1 = strs[n];
    string s2 = strs[m];
    s.gen_str(s1, s2);
}


