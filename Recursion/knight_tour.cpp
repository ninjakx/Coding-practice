#include <iostream>
#include <string>
#include <vector>
#include <string_view>
#include <cmath>
#include <climits>
#include <cstring>

using namespace std;

int row[] = {2,2,-2,-2,1,1,-1,-1};
int col[] = {-1,1,-1,1,2,-2,-2,2};

int count_res = 0;
class Solution {
public:

    void printvec(int **ar, int n){
        for (int i=0;i<n;i++){
            for(int j=0; j<n; j++){
                cout<<ar[i][j]<< " ";
            }
            cout<<"\n";
        }
    }

    bool issafe(int **queen_ar, int r, int c, int n){
        if (r>=n||c>=n||r<0||c<0||(queen_ar[r][c]!=0))
            return false;
        return true;
    }
    bool queen_back(int **queen_ar, int r, int c, int co, int n){
        // for every row placing the queen so this co will tell me about my current row.
//        queen_ar[r][c]=co;

        if (co == n*n)
        {
            queen_ar[r][c]=co;
            count_res++;
            printvec(queen_ar, n);
            queen_ar[r][c]=0;

            cout<<count_res<<endl;
            return true;
        }


        queen_ar[r][c]=co;

        // place row-wise
        for (int i=0; i<8; i++){
            int c_y = c+col[i];
            int r_x = r+row[i];

            if (issafe(queen_ar, r_x, c_y, n)) {
                queen_back(queen_ar, r_x, c_y, co+1, n);

            }
        }

        queen_ar[r][c]=0;


        return false;
    }

};


int main()
{
    Solution sol;
    int n=5;
    int *queen_ar[n];
    for(int i = 0; i < n; i++)
        queen_ar[i] = new int[n];

    sol.queen_back(queen_ar,0,0,1,n);
}
