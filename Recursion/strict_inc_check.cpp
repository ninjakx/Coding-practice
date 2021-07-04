#include <iostream>
#include <string>
#include <vector>
#include <string_view>

using namespace std;

class Solution {
public:

    bool check_sort(vector<int> li)
    {
        if (li.size()==1)
            return true;

        int first = li[0];
        li.erase(li.begin()+0);
        bool restArray = check_sort(li);
        return (first<li[0] && restArray);
    }
};


int main()
{
    Solution s;
    vector<int> v = {1,2,3,4,9,16,27};
    if (s.check_sort(v))
        cout<<"Strict Inc order"<<endl;
    else
        cout<<"Not Strict Inc order"<<endl;
}

