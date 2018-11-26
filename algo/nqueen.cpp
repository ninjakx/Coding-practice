//https://www.geeksforgeeks.org/n-queen-problem-backtracking-3/
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int row_exist(int mat[4][4],int r,int c)
{
    for(int col=0;col<c;col++)
    {
        if(mat[r][col])
            return 1;
    }
    return 0;
}
int leftupdiag(int mat[4][4],int r,int c)
{
    for(int i=r,j=c;i>=0 && j>=0;i--,j--)
    {
        if(mat[i][j])
            return 1;
    }
    return 0;
}
int leftdowndiag(int mat[4][4],int r,int c)
{
    for(int i=r,j=c;i<4 && j>=0;i++,j--)
    {
        if(mat[i][j])
            return 1;
    }
    return 0;
}

int safe(int mat[4][4],int r,int c)
{
    if(row_exist(mat,r,c) || leftupdiag(mat,r,c) || leftdowndiag(mat,r,c))
        return 0;
    return 1;

}
int backtracking(int (&mat)[4][4],int c)
{
    //int res=0;
    //base condition
    if(c>=4)
    {
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {

            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
        return 1;
    }

    for(int row=0;row<4;row++)
    {
        if(safe(mat,row,c))
        {
            mat[row][c] = 1;
            //res = (backtracking(mat,c+1))+res;
            backtracking(mat,c+1);
            mat[row][c] = 0;

        }

    }
    return 0;
}
int main() {
    int n =4;
    int mat[4][4] = { {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };
    backtracking(mat,0);

   return 0;
}
