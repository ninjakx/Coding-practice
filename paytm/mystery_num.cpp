//https://www.geeksforgeeks.org/check-if-a-number-is-a-mystery-number/
#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int check(string st,int num)
{
    string st1;
    st1 = st;
    reverse(st1.begin(),st1.end());
    if(num == (stoi(st1) + stoi(st)))
    {
        cout<<st<<" "<<st1;
        return 1;
    }
    else
       return 0;    
}
int main() {

    {
    int n;
    cin>>n;
    int cond;
    int flag=0;
    for(int i =1;i<=(n/2);i++)
    {
    cond = check(to_string(i),n);
    if(cond)
    {
        flag = 1;
        break;
    }
    
    }
    if(!flag)
    {
        cout<<"NOT";
    }
    }
	return 0;
}
