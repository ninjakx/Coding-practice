#include <iostream>
#include <string>
#include <vector>
#include <string_view>

using namespace std;

class Solution {
public:

void print(vector<string> ans)
{
    for (auto it: ans){
        cout<<it<< " ";
    }
    cout<<endl;
}

void recur(string s, vector<string> res){
    if (s.length()==0)
    {
        print(res);
        return;

    }

    // Add prefix
    for(int i=0;i<s.length();i++)
    {
        string prefix = s.substr(0,i+1);
        prefix = "(" + prefix + ")";
        res.push_back(prefix);
        recur(s.substr(i+1), res);
        res.pop_back();
    }
}
};

int main()
{
    Solution sol;
    string s = "ABCD";
    vector<string> res;
    sol.recur(s, res);

}
