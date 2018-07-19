// https://www.geeksforgeeks.org/sudo-placement-palindrome-family/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
bool ispalindrome(string mystring)
{
	string rev_str = mystring;
	reverse(mystring.begin(),mystring.end());
	if (rev_str == mystring)
	{ return true;
}
	return false;
}
int main() {
	string str;
	cout<<"enter your string:";
	cin>>str;
	cout<<str<<endl;
	
	
	string oddString = "";
    string evenString = "";
 
    int n = str.length();
 
    // oddString
    for (int i = 1; i < n; i += 2)
        oddString += str[i];
 
    // evenString
    for (int i = 0; i < n; i += 2)
        evenString += str[i];
        
    bool palindrome = ispalindrome(str);
    bool evenpalindrome = ispalindrome(evenString);
    bool oddpalindrome = ispalindrome(oddString);
    if (palindrome) 
    printf("PARENT palindrome");
    else if (evenpalindrome && oddpalindrome)
    printf("TWIN palindrome");
    else if (oddpalindrome) 
    printf("ODD palindrome");
    else if (evenpalindrome)
    printf("EVEN palindrome");
    else  
    printf("ALIEN palindrome");
	return 0 ;
	
}
