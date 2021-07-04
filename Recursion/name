#include <iostream>
#include <string>
#include <vector>
#include <string_view>

class Solution {
public:

    void trail(std::string & str)
    {
        if (str.length()==0){
            return;
        }
        std::cout<<str<<"\n";
        str.erase(str.begin()+0);
        trail(str);

        return;
    }
};


int main()
{
    Solution s;
    std::string st = "binod";
    s.trail(st);
}

/*
I/P:
binod

O/P:
binod
inod
nod
od
d


*/
