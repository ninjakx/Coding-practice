#include <iostream>
#include <string>
#include <vector>
#include <string_view>

using namespace std;

class Solution {
public:

    string gen_perm(string st, string ans){

    if (st.length()==0){
        return "";
    }

    char ch = st[st.length()-1];
    st = st.substr(0,st.length()-1);
    gen_perm(st, ans);
    ans = ans + ch+st;
    return ans;
    }

    bool check_pal(string st, int l, int h)
    {
        if (l>=h){
            return true;
        }

        return (st[l]==st[h] && check_pal(st, l+1, h-1));

    }

};



int main()
{
    Solution s;

    string st1 = "BAABCC";
    bool ispal;
    for (int i=0; i<st1.length();i++){
        st1 = s.gen_perm(st1, "");
        ispal = s.check_pal(st1, 0, st1.length()-1);
        if (ispal)
        {
            break;
        }

    }

    (ispal)?cout<<"yes->"<<st1:cout<<"no";
}

