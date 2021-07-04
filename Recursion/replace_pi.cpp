#include <iostream>
#include <string>
#include <vector>
#include <string_view>

class Solution {
public:

    void replace_pi(std::string & str, std::string & ans)
    {
        if (str.length()==0){
            return;
        }

        std::string r = str.substr(0,2);
        if (r=="pi"){
                ans = ans + "3.14";
//                str=str.substr(2);
                str.erase(0,2);
        }

        else{
            ans = ans + str[0];
//            str=str.substr(1);
            str.erase(0,1);

        }
        replace_pi(str, ans);

    }
};


int main()
{
    Solution s;
    std::string st = "pippxxppiixipi";
    std::cout<<st<<"\n";
    std::string ans = "";
    s.replace_pi(st, ans);
    std::cout<<ans;
}

