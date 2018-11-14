//https://www.geeksforgeeks.org/ugly-numbers/
#include <iostream>
#include<bits/stdc++.h>
#include<map>
#include<vector>
#include<algorithm>    // std::sort

using namespace std;
int minimum(int x,int y,int z)
{
    if (x<y)
        return x<z?x:z;
    else if(x>y)
        return y<z?y:z;
}
int main() {

    vector<int>ugly ={1};
    int i2,i3,i5;
    i2=i3=i5=0;
    int c=0;
    int next_m2,next_m3,next_m5;

    next_m2 = ugly[i2]*2;
    next_m3 = ugly[i3]*3;
    next_m5 = ugly[i5]*5;
    while(c++<1000)
    {

    int minm = minimum(next_m2,next_m3,next_m5); //gives next_num
    //cout<<next_m2<<" "<<next_m3<<" "<<next_m5<<"->"<<minm<<endl;
    
    ugly.push_back(minm);
    if(minm == next_m2)
    {
        i2++;
        next_m2 = ugly[i2]*2;
    }
    if(minm == next_m3)
    {
        i3++;
        next_m3 = ugly[i3]*3;
    }
    
    if(minm == next_m5)
    {
        i5++;
        next_m5 = ugly[i5]*5;
    }
    
    
    }
    sort(ugly.begin(),ugly.end());
    cout<<ugly[9];
	return 0;
}
