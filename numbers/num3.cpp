//https://practice.geeksforgeeks.org/problems/minimize-the-heights

#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include <vector>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    while(t--)
    {   int n,k;
        cin>>k;
        cin>>n;
        vector <int> a(n);
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        sort(a.begin(),a.end());
        if(a[n-1]-a[0]<k)
            cout<<a[n-1]-a[0]<<endl;
        else
        {
            int avg = (a[n-1]+a[0])/2;
            for (int j =0 ; j<n;j++)
            {
                if (a[j] <avg)
                    a[j]+=k;
                else
                    a[j]-=k;
            }
        
    sort(a.begin(),a.end());
    cout<<a[n-1] - a[0]<<endl;      
        }

    }

    
    return 0;
}
