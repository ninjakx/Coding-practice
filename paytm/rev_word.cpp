//https://www.geeksforgeeks.org/reverse-words-in-a-given-string/
#include <iostream>
#include<vector>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;

int main() {
	string s;
	getline(cin,s);
	
	reverse(s.begin(),s.end());
	stack <char> st;
	int start=0;
	for(int i=0;i<s.length();i++)
	{
	    
	    if(s[i]!=' ')
	    {
	       st.push(s[i]);
	       
	    }
	    else if(s[i]==' ')
	    {
	        while(start<i)
	        {
	            s[start]=st.top();
	            st.pop();
	            start++;
	            
	        }
	        start = i+1;
	    }
	}
	cout<<s;
	return 0;
}
