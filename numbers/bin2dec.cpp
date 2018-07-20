#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main() {
    int t;
    cin>>t;
	while(t--)
	{   int sum =0;
	    string s;
	    cin>>s;
	    int l = s.length();
	    for(int i=0;i<l;i++)
	        {//cout<<((s[i]-'0')+1)<<endl;
	         sum = sum + (pow(2,i)*(s[l-1-i]-'0'));
	         
	        }
	    cout<<sum<<endl;
	}
	return 0;
}
