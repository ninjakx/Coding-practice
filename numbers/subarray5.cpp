//https://www.geeksforgeeks.org/number-subarrays-product-sum-equal/
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int main()
{
    int n = 4;
    int a[n]={4, 1, 2, 1};
    int i=-1;
    int prod,sum,count = 0;
    for(int j=0;j<n;j++)
    {
        sum =0;
        prod =1;
        i=-1;
    while( ++i<n )
    {
        sum = sum + a[i+j];
        prod = prod * a[i+j];
        if (sum == prod)
            {
                count++;
            }  
    }
    }
    cout<<count;
}
