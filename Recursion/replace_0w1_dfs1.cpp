#include <iostream>
#include <vector>

using namespace std;

#define M 10
#define N 10

class Solution {
public:

    bool isvalid(int mat[M][N], int x, int y)
    {
        if (x>=0 && y>=0 && x<N && y<M)
            return true;
        return false;
    }

    void dfs(int mat[M][N], int r, int c){

        mat[r][c]=-1;

        int x[] = {0,1,0,1,-1,1,1,-1};
        int y[] = {1,0,-1,0,1,1,-1,-1};
        for(int i=0; i<8;i++){
//            int row = r + y[i];
//            int col = c + x[i];
            if (isvalid(mat, r+y[i], c+x[i]) && !mat[r+y[i]][c+x[i]])
                dfs(mat, r+y[i], c+x[i]);
        }

    }

    void find_edgez(int mat[M][N]){

    for(int i=0; i<N; i++) //Column-wise
    {
        if(!mat[i][0])
            dfs(mat,i,0);// first row
        if(!mat[i][N-1])
            dfs(mat, i, N-1); //last row

    }

    for(int i=0; i<M; i++) //Row-wise
    {
        if(!mat[0][i])
            dfs(mat,0,i);// first column
        if(!mat[M-1][i])
            dfs(mat, M-1, i); //last column

    }

    for (int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            if (mat[i][j]==-1)
                mat[i][j]=0;
            else if (mat[i][j]==0)
               mat[i][j]=1;
        }
    }


 }

 void print(int mat[M][N]){
    for (int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
 }


};


int main()
{
    Solution sol;

    int mat[M][N] =
    {
        { 1, 1, 1, 1, 0, 0, 1, 1, 0, 1 },
        { 1, 0, 0, 1, 1, 0, 1, 1, 1, 1 },
        { 1, 0, 0, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 0, 0, 1, 1, 0, 1 },
        { 0, 0, 1, 1, 0, 0, 0, 1, 0, 1 },
        { 1, 0, 0, 1, 1, 0, 1, 1, 0, 0 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 0, 1, 1, 0, 0, 1, 0, 1 },
        { 1, 0, 1, 0, 1, 0, 1, 0, 0, 1 },
        { 1, 1, 1, 0, 1, 1, 1, 1, 1, 1 }
    };

    sol.find_edgez(mat);
    sol.print(mat);

}
