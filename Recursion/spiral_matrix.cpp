#include <iostream>
#include <vector>

using namespace std;

#define M 5
#define N 5

class Solution {
public:

    void print_spiral(int a[M][N], int l, int r, int t, int b){

    if (l>r||t>b){
        return;
    }

    for (int i=l;i<=r; i++){
        cout<<a[t][i]<<" ";
    }
    t++;


    for (int j=t; j<=b; j++){
        cout<<a[j][r]<<" ";
    }
    r--;


    for (int k=r; k>=l; k--){
        cout<<a[b][k]<<" ";
    }
    b--;

    for (int m=b; m>=t; m--){
        cout<<a[m][l]<<" ";
    }
    l++;

    print_spiral(a, l, r, t, b);
    }


};


int main()
{
    Solution sol;

    int mat[M][N] =
    {
        { 1, 2, 3, 4, 5},
        {16, 17, 18, 19, 6},
        {15, 24, 25, 20, 7},
        {14, 23, 22, 21, 8},
        {13, 12, 11, 10, 9}
    };

    int l = 0, r = N-1, t = 0, b = M-1;
    sol.print_spiral(mat, l, r, t, b);
}
