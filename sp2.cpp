// https://www.geeksforgeeks.org/check-number-palindrome-not-without-using-extra-space/
#include <bits/stdc++.h>
using namespace std;
bool ispalindrome(int number,int n)
{   int first,last;
    while(number!=0)

{   
    first = number / n;  // 1234 / 1000 = 1
    last = number % 10;  // 1234 % 10 = 4
    number = (number%n)/10; // num = (1234 % 1000)/10 = 234 / 10 = 23
    if (first!=last) // 1 ! = 3
    {
     return false;
    }
    n = n / 100;  // n = 1000 / 100 = 10 (It should be as same no of digit
                //  with the number . We are removing two numbers hence divide it by 100)
}
return true;
}
int main() {
int num,len;
cin>>num;
len = ceil(log10(num));
len = pow(10,len-1);
ispalindrome(num,len) ? cout << "Yes, it is Palindrome" :
    cout << "No, not Palindrome";

return 0;
}
