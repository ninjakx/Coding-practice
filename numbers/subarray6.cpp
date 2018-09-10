//https://www.geeksforgeeks.org/split-array-two-equal-sum-subarrays/
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int main()
{
    int n = 5;
    int a[] = { 1 , 2 , 3 , 4 , 5   };
    int sum = 0;
    for(int i = 0;i<n;i++)
    {
        sum = sum + a[i];
    }
    int leftarr = sum,rightarr = 0 ;
    int result=0;   
    for(int j=0;j<n;j++)
    {
        leftarr = leftarr - a[n-j-1];

        rightarr = rightarr + a[n-j-1];
        if(leftarr == rightarr)
        {
            result = n-j-1;
        }    
    }
    if (result)
    {
    for(int i=0;i<n;i++)
    {
        if(i<result)
        {
            cout<<a[i]<<" ";
        }
        else 
        {   if(i==result)
                cout<<"\n";
            cout<<a[i]<<" ";
        }
    }
    }
    else
        cout<<"not possible";
    return 0;
}
