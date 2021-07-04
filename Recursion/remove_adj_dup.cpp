#include <iostream>
#include <string>
#include <vector>
#include <string_view>

class Solution {
public:

    std::string remove_dup(std::string str)
    {
        if (str.length()==0){
            return "";
        }

        char ch = str[0];
        str.erase(0,1);
        std::string res = remove_dup(str);
        if (ch==res[0]){
            return res;

        }
        return ch+res;

    }
};


int main()
{
    Solution s;
    std::string st = "aaabbcccd";
    std::cout<<st<<"\n";
    std::string ans = "";
    ans = s.remove_dup(st);
    std::cout<<ans;
}

