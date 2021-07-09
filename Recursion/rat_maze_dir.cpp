#include <iostream>
#include <string>
#include <vector>
#include <string_view>
#include <cmath>
#include <climits>
#include <cstring>

using namespace std;

#define M 4
#define N 3

int co = 0;

class Solution {
public:


/* A utility function to print
solution matrix sol[N][N] */
void printSolution(int sol[M][N])
{
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++)
            printf(" %d ", sol[i][j]);
        printf("\n");
    }
}


bool find_path(int ar[M][N], int visited[M][N], int i, int j, int m, int n, string ans){

     if (i<0 || j<0 || i>m || j>n || ar[i][j]==0
         ){
        return false;
     }
     if (visited[i][j]==1){
        return false;
     }

     if (i==m && j==n){
        co++;
        cout<<ans<<endl;
        ans = "";
//        visited[i][j]=1;
        printSolution(visited);
        cout<<endl;

        return true;
     }

     visited[i][j]=1;

     find_path(ar, visited, i+1, j, m, n, ans+"D");
     find_path(ar, visited, i-1, j, m, n, ans+"U");
     find_path(ar, visited, i, j+1, m, n, ans+"R");
     find_path(ar, visited, i, j-1, m, n, ans+"L");

     visited[i][j]=0;
     return false;
}
};



int main()
{
    Solution sol;

//    int mat[M][N] =
//        {
//            { 1, 1, 1, 1, 1, 0, 0, 1, 1, 1 },
//            { 0, 1, 1, 1, 1, 1, 0, 1, 0, 1 },
//            { 0, 0, 1, 0, 1, 1, 1, 0, 0, 1 },
//            { 1, 0, 1, 1, 1, 0, 1, 1, 0, 1 },
//            { 0, 0, 0, 1, 0, 0, 0, 1, 0, 1 },
//            { 1, 0, 1, 1, 1, 0, 0, 1, 1, 0 },
//            { 0, 0, 0, 0, 1, 0, 0, 1, 0, 1 },
//            { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
//            { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
//            { 0, 0, 1, 0, 0, 1, 1, 1, 1, 1 },
//        };

    int mat[M][N] =
        {
            { 1, 1, 1 },
            { 0, 1, 1 },
            { 0, 0, 1 },
            { 1, 0, 1 },
         };


    int visited[M][N];
    memset(visited, 0, sizeof visited);

    sol.find_path(mat, visited, 0, 0, M-1, N-1, "");
    cout<<co;
}
