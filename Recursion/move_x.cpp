#include <iostream>
#include <string>
#include <vector>
#include <string_view>

class Solution {
public:

    std::string move_x(std::string str)
    {
        if (str.length()==0){
            return "";
        }

        char l = str[0];
        str.erase(0,1);
        std::string r = move_x(str);
        if (l=='x'){
            return r+l;
        }
        return l+r;

    }
};


int main()
{
    Solution s;
    std::string st = "axxbdxcefxhix";
    std::cout<<st<<"\n";
    std::string ans = "";
    ans = s.move_x(st);
    std::cout<<ans;
}

