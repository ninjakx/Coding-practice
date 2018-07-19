//https://practice.geeksforgeeks.org/problems/sort-the-given-array-after-applying-the-given-equation
#include <iostream>
#include <list>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{   list <long long int> mylist;
	    //mylist.clear();
	    int a,b,c;
	    cin>>a>>b>>c;
	    int n;
	    cin>>n;
	    long long int num,equ;
	   
	    for (int i=0;i<n;i++)
	    {   cin>>num;
	        
	        equ = (a*num*num)+(b*num)+(c);
	        cout<<equ<<endl;
	        mylist.push_back(equ);
	    }
	    mylist.sort();
	    for(auto v:mylist)
	        cout<<v<<" ";
	    cout<<endl;
	    
	}
	return 0;
}
