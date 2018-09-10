//https://www.geeksforgeeks.org/number-subarrays-product-sum-equal/
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
    
    
    for(int i=0,j=0;i<n;i++)
    {

        sum = sum + a[i];
        prod = prod * a[i];
        if (sum == prod)
            {
                count++;
            }
        
        
            
    }
    }
    cout<<count;
}
