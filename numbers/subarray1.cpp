#include <iostream>
#include <string>
#include<vector>

using namespace std;
int main()
{
    //int a[10] = {9,1,2,5,3,4,7,4,6,0};
    
    int n;
    cin>>n;
    int a[n];
    for(int l=0;l<n;l++)
    {
       cin>>a[l]; 
    }
    int k=4;
    int i=0;
    int sum =0;
    
    for(int i=0;i<n;i++)
    {
        int flag =0;
        int count =0;
    while(i<n && a[i]<=k)
    {
        if(a[i]==k)
        {
            flag = 1;
        }
        ++count;
        i++;
        
    }
    if (flag==1)
        sum = sum + count;
    
    }
    cout<<sum;

    return 0;
}

//10
//4 5 7 1 2 9 8 4 3 1
