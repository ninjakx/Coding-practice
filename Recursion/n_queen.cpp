#include <iostream>
#include <string>
#include <vector>
#include <string_view>
#include <cmath>
#include <climits>
#include <cstring>

using namespace std;


class Solution {
public:

    void printvec(int **ar, int n){
        for (int i=0;i<n;i++){
            for( int j=0; j<n; j++){
                cout<<ar[i][j]<< " ";
            }
            cout<<"\n";
        }
    }

    bool issafe(int **queen_ar, int r, int c, int n){
        // Vertical check
        for (int i=0; i<r;i++){
           if (queen_ar[i][c]==1)
           {
               return false;
           }
        }

//        // Horizontal check
//        for (int j=0;j<c;j++){
//            if (queen_ar[r][j]==1)
//            {
//                return false;
//            }
//        }

        // TL to BR diag
        for (int i=r, j=c; i>=0 && j>=0; i--, j--)
        {
            if (queen_ar[i][j]==1){
                return false;
            }
        }

        // TR to BL diag
        for (int i=r, j=c; i>=0 && j<n; i--, j++)
        {
            if (queen_ar[i][j]==1){
                return false;
            }
        }

        return true;
    }
    bool queen_back(int **queen_ar, int n, int co){
        // for every row placing the queen so this co will tell me about my current row.
        if (n==co)
        {
            printvec(queen_ar, n);
            cout<<endl;
            return true;
        }

        // place row-wise
        for (int i=0; i<n; i++){

        if (issafe(queen_ar, co, i, n)) {
            queen_ar[co][i]=1;
            queen_back(queen_ar, n, co+1);
            queen_ar[co][i]=0;
        }
        }
    }

};


int main()
{
    Solution sol;
    int n=8;
    int *queen_ar[n];
    for(int i = 0; i < n; i++)
        queen_ar[i] = new int[n];

    sol.queen_back(queen_ar, n, 0);
}
