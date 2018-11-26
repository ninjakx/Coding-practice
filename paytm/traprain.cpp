//https://www.geeksforgeeks.org/trapping-rain-water/
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int right[n];
    int left[n];

    int maxsofarl =0;
    int maxsofarr=0;
    for(int i=0;i<n;i++)
    {
        right[n-i-1] = maxsofarr;
        left[i] = maxsofarl;
        if(arr[n-1-i] > maxsofarr)
        {
            maxsofarr = arr[n-i-1];
            right[n-1-i] = maxsofarr;
        }

        if(arr[i]>maxsofarl)
        {
            maxsofarl = arr[i];
            left[i] = maxsofarl;
        }
    }
    int water = 0;
    for(int i=0;i<n;i++)
    {

        water += max(min(left[i],right[i])-arr[i],0);
        //cout<<max(min(left[i],right[i])-arr[i],0)<<" ";
    }
    cout<<water<<endl;
   return 0;

}
