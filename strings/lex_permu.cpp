//https://www.geeksforgeeks.org/lexicographically-n-th-permutation-string/
#include <iostream>
#include<algorithm>
using namespace std;
void permut(string st,int no)
{ long int i;
  sort(st.begin(),st.end());
  for(i=1;i<no;i++)
  { 
  	next_permutation(st.begin(),st.end());
  }
  cout<<st;
}

int main() {
	string s;
	cin>>s;
	long int n;
	cin>>n;
	permut(s,n);
	
	return 0;
}
