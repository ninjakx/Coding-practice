//https://www.geeksforgeeks.org/sum-of-all-subarrays/
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

long int count_sum_subarray(int a[],int n)
{
    long int result = 0;
    for(int i=0;i<n;i++)
    {
        result += a[i]*(n-i)*(i+1);
    }
    return result;
}

int main()
{   int n = 3;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<count_sum_subarray(a,n);
    return 0;
}
