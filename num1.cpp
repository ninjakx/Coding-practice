//https://practice.geeksforgeeks.org/problems/product-of-maximum-in-first-array-and-minimum-in-second
#include <iostream>
#include <list>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
    int a,b,n1,n2;
	list <int> mylist;
	list <int> mylist2;
    cin>>a;
    for (int i =0;i<a;i++)
    {
        cin>>n1;
        mylist.push_back(n1);
        
    }
    cin>>b;
    for (int i =0;i<b;i++)
    {
        cin>>n2;
        mylist2.push_back(n2);
        
    }
	mylist.sort();
	mylist2.sort();
	
	cout<<mylist.back() * mylist2.front()<<endl;
	mylist.clear();
	mylist2.clear();
    }
	return 0;
}
