#include <iostream>
#include <string>
#include <vector>
#include <string_view>

class Solution {
public:

    std::string substring(std::string ip, std::string op)
    {
        if (ip.length()==0){
            std::cout<<op<<" ";
            return "";
        }

        std::string op1 = op;
        std::string op2 = op;
        op2.push_back(ip[0]);
        ip.erase(0,1);

        substring(ip, op1);
        substring(ip, op2);

        return op;

    }
};


int main()
{
    Solution s;
    std::string st = "abc";
    std::string op = "";
    std::cout<<st<<"\n";
    s.substring(st, op);
}


