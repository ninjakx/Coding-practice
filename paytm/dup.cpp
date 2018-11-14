//https://www.geeksforgeeks.org/replace-duplicates-with-greater-than-previous-duplicate-value/
#include <iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
    map<int,int> hash;
    int n;
    cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
	{
	    cin>>ar[i];
	    int fl=1;
	    if(hash[ar[i]])
        {   int j=1;
            while(fl)
            {
                if(!hash[ar[i]+j])
                {
                    ar[i] = ar[i]+j;
                    fl = 0;
                }
                j++;
            }
        }
	    hash[ar[i]]++;
	}
	int fl=1;
    for(int i=0;i<n;i++)
    {
        
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    }
    
	return 0;
}
