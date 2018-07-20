//https://practice.geeksforgeeks.org/problems/find-whether-path-exist/0
#include <iostream>
using namespace std;
int count;
int compute(int num)
{   
    if (num==0)
        return count;
    
    if (num%2 == 1)
        count++;
    compute(num/2);
      
    
    
    return count;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
    count =0;
    int n;
    cin>>n;

	cout<<compute(n)<<endl;
    }
	return 0;
}
