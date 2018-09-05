//https://practice.geeksforgeeks.org/problems/maximum-sum-increasing-subsequence/0
#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int l;
	    int max = INT_MIN;
	    cin>>l;
	    int ms[l],arr[l];
	    for (int i = 0;i<l;i++)
	    {
	        cin>>arr[i];
	        ms[i]=arr[i];
	    }
	    for (int i=1;i<l;i++)
	    {
	        for(int j=0;j<i;j++)
	        {
	            if(arr[i]>arr[j] && ms[i] < ms[j]+arr[i])
	            {
	                ms[i] = arr[i] + ms[j];
	            }
	        }
	    }
	    for(int i =0;i<l;i++)
	    {
	        if (max < ms[i])
	            max = ms[i];
	    }
	    cout<<max<<endl;
	}
	return 0;
}
