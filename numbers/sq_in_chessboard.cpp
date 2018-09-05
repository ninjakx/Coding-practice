#include <bits/stdc++.h>
using namespace std;
int count(int num)
{   if (num==1)
        return 1;
    return count(num-1)+ num*num;
}
int main() {
    int t;
    cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int res = 0;
	    res = res + (n)*(2*n + 1)*(n+1)/6;
	    cout<<res<<endl;
	    //int u = count(n);
	    //cout<<u<<endl;
	    
	}
	return 0;
}
