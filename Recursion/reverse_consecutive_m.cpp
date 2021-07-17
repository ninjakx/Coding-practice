#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void reverse_array(vector<int> &a, int start, int end){
        while(start<end){
            int temp = a[start];
            a[start] = a[end];
            a[end] = temp;
            start++; end--;
        }
    }
    void recur(vector<int> &a, int i, int j, int m){

        for (int l=i; l<=j;l=l+m){
            if((j-l+1)>=m){
                reverse_array(a, l, l+m-1);
            }
        }
    }

    void print(vector<int> arr){
        for(auto it:arr){
            cout<<it<<" ";
        }
        cout<<endl;
    }

};


int main()
{
    Solution sol;
    vector<int> ar = {1,2,3,4,5,6,7,8,9,10};
    int i=3;
    int j=5;
    int m =3;
    sol.recur(ar,i,j,m);
    sol.print(ar);
}
