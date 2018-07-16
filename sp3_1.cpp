// Iterative C++ program to generate all binary
// strings formed by replacing each wildcard
// character by 0 or 1
#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <list>
using namespace std;
string str;
int len;
list <string> mylist;

string genBin(int bin_num)
{   string pre = "";
    for (int i=0;i<len;i++)
	{   pre = pre + to_string(bin_num & 1);
	    bin_num = bin_num/2;
	}
	reverse(pre.begin(),pre.end());
    return pre;
}


string genSeq(string bin_str)
{   string pre = "";
    int y = stoull(bin_str, 0, 2);
       
    //cout<<xi;
    for(int i=0;i<len;i++)
    {   if((y & (1<<i)) != 0)
        {
            pre = pre + str[i];
        }
    }
    return pre;

}
int main()
{
	cin>>str;
	len = str.length();
	int n = pow(2,len) - 1;
	for (int i=1;i<=n;i++)
	{
	    string binary = genBin(i);
	    string seq = genSeq(binary);
	    //if (i!=1)
	    //    cout<<", ";
	    //cout<<seq;
	    mylist.push_back(seq);
	    
	}
	mylist.sort();
	mylist.unique();
	
	for(auto v : mylist)
	{
	    if (v != mylist.front()) 
	        cout << ", ";
	    cout<<v;
	    
	}

	return 0;
}
