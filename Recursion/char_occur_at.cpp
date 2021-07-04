-----------------------

first and alst occurence:

#include <iostream>
#include <string>
#include <vector>
#include <string_view>

using namespace std;

class Solution {
public:

    int firstocc(vector<int> ar, int ind, int num){

        int l = ar[0];
        if (l==num)
        {
            return ind;
        }
        ar.erase(ar.begin()+0);
        return firstocc(ar, ind+1, num);
    }

        int lastocc(vector<int> ar, int ind, int num){

        int l = ar[ar.size()-1];
        if (l==num)
        {
            return ind;
        }

        ar.pop_back();
        return lastocc(ar, ind-1, num);
    }

};


int main()
{
    Solution s;
    vector <int> n = {4,1,1,2,2,5,7,2,8,2,2};
    cout<<s.firstocc(n, 0, 2)<<endl;
    cout<<s.lastocc(n, n.size()-1, 2);


}
