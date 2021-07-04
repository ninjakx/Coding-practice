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
        std::string op3 = op;

        char ch = ip[0];
        std::string asci = std::to_string(int(ch));
        op2.push_back(ip[0]);
        op3 = (asci)+op3;

        ip.erase(0,1);

        substring(ip, op1);
        substring(ip, op2);
        substring(ip, op3);

        return op;

    }
};


int main()
{
    Solution s;
    std::string st = "AB";
    std::string op = "";
    std::cout<<st<<"\n";
    s.substring(st, op);
}
