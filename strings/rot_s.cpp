#include<iostream>
#include<algorithm>
#include<string>
#include<bits/stdc++.h>
using namespace std;
#include<list>
list <string> mylist;
int len;
void pattern(string st,int a[])
{	
    mylist.push_back(st);
   int j =1;
  
   while(1)
   {  string pre = ""; 
    for (int i=0;i<st.length();i++)
     {
	  
  a[i] = ((a[i]+j)%len);
  //cout<<((arr[i]+j))<<endl;
  pre = pre + st[a[i]];

  
}
   j=j+1;
   mylist.push_back(pre);
	//((arr[i]+j)%len)
	//cout<<pre<<" , ";
  if (pre==st)
    break;
	    
 }	
}

int main() {
	
	string s;
	cin>>s;
	int t;
	len = s.length();
	int arr[len];
	for (int i=0;i<s.length();i++)
	{
	  arr[i] = i; 
	  //cout<<arr[i]<<endl;
	}
	pattern(s,arr);
	reverse(s.begin(),s.end());
	pattern(s,arr);
	mylist.sort();
	mylist.unique();
	for (auto v:mylist)
	{	if (v != mylist.front())
		    cout<<", ";
		cout<<v;
		
	}
	
	return 0;
}
