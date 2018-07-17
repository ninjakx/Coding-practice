//https://practice.geeksforgeeks.org/problems/print-this-pattern
#include <iostream>
using namespace std;

int main() {
    int n ;
    cin>>n;
	  for(int i=0;i<2*n-1;i++)
        {
            for(int j=0;j<2*n-1;j++)
            {

                cout<<abs(n-i-1)<<" & "<<abs(n-j-1)<<endl;
               //cout<<(1+max(abs(n-i-1),abs(n-j-1)));
            }
            cout<<endl;
        }
	return 0;
}
