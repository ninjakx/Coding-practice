#include <iostream>
#include <string>
#include<map>

using namespace std;
int main()


{
    float minm = 10000000;
    map<float,float> hash;
    float a[8] = {0.1,0.002,0.5,0.009,0.2,0.3,0.12,0.0008};
    for(int i=0;i<8;i++)
    {
        hash[a[i]] = (a[i]-0);
        
    }
    int count =0;
    for(auto i:hash)
    {   count++;
        if(minm>i.second)
        {
            minm = i.second;
            
        }
    }
    cout<<minm;
}
