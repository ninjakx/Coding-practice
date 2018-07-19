#include<iostream>
#include<algorithm>
#include<string>
#include<bits/stdc++.h>
using namespace std;
//int n;

int main()
{
  string str;
  cin>>str;
  int n = str.length();
  for (int i = 1; i < (1 << n); i++) {
   string s = "";
   for (int j = 0; j < n; j++) {
    if ((i & 1<<j) != 0) {
     // append chars for set bit
     s += str[j];
    }
    
   }
   cout<<s<<" ";
}
return 0;
}
