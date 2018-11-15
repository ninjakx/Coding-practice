//https://www.geeksforgeeks.org/search-in-row-wise-and-column-wise-sorted-matrix/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int search(int mat[4][4],int key,int n)
{
    int i=0,j=n-1;
    while(i<n && j>0)
    {
        if(mat[i][j]==key)
            return 1;
        else if(mat[i][j]>key)
            j--;
        else
            i++;
    }
    return 0;
}
int main() {
	int mat[4][4] = { {10, 20, 30, 40}, 
                    {15, 25, 35, 45}, 
                    {27, 29, 37, 48}, 
                    {32, 33, 39, 50}}; 

    int fl = search(mat,19,4);
    if(fl)
        cout<<"exist"<<endl;
    else
        cout<<"doesn't exist"<<endl;
    
	return 0;
}
