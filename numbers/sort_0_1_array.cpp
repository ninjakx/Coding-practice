//https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s/0
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#include <stdio.h>
void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {   
        int l;
        cin>>l;
        int arr[l];
        
        int low =0 ,mid=0,high=l-1;
        for(int i = 0;i<l;i++)
        {
            cin>>arr[i];
            
        }
        while(mid<=high)
        {
            switch(arr[mid])
            {
                case 0: swap(&arr[mid++],&arr[low++]);
                        break;
                case 1: mid++;
                        break;
                case 2: swap(&arr[mid],&arr[high--]);
                        break;
            }
        }
        for(int k=0;k<l;k++)
        {
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
/*int main() {
	int t;
	cin>>t;
	while(t--)
	{   map <int,int> count;
	    ll l;
	    cin>>l;
	    int arr[l];
	    for(int k=0;k<l;k++)
	    {   
	        cin>>arr[k];
	        ++count[arr[k]];
	        
	        
	    }
	    for(auto it = count.begin(); it != count.end(); ++it)
	        {   int u = it->second;
	            for(u;u>0;u--)
	                cout<<it->first<<" ";
	            
	            
	        }
	        cout<<endl;
	 count.clear();

	}
	
	return 0;
}*/
