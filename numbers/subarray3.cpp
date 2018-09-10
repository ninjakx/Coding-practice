//https://www.geeksforgeeks.org/subarray-whose-sum-is-closest-to-k/

#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int main()
{  
    int n = 6;
    int a[n] = {1, 2, 3, 4, 5, 6};
    int k=6;
    int i ;
    int j,sum,result;
    int minm = 999999;
    for(i=0;i<n;i++)
    {   j = 0;
        sum = 0 ;

        while(j<n)
        {
            sum = sum + a[i+j];
            //cout<<" >> "<<a[i+j]<<" ";
            if(abs((sum)-k)<=minm)
            {
                minm = abs((sum)-k);
                result = sum;
        
            }
         
            j++;
        }
    }
    cout<<result;
    return 0;
}
