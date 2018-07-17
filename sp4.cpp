//https://practice.geeksforgeeks.org/problems/check-if-strings-are-rotations-of-each-other-or-not/0
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string a,b;
	    cin>>a>>b;
	    if ((a.length() == b.length()) && ((a+a).find(b)!=string::npos))
                cout<<1<<endl;
        else
            cout<<0<<endl;
	}
	return 0;
}
