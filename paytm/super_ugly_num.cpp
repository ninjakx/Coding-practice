//https://www.geeksforgeeks.org/super-ugly-number-number-whose-prime-factors-given-set/
#include <iostream>
#include<bits/stdc++.h>
#include<map>
#include<vector>
#include<algorithm>    // std::sort

using namespace std;

int main() {
    int prime[5] = {3, 5, 7, 11, 13};
    vector<long long int> in={1};
    map<int,int> hash;
    //in[0]=1;
    //cout<<in[0];
    int co=0;
    for(int i=0;i<400;i++)
    {   
        for(int j=0;j<5;j++)
        {
        long long int mult = in[i]*prime[j];
        //cout<<in[0];
        hash[mult]++;
        if(hash[mult]==1)
            in.push_back(mult);
        
        }
    }
    sort(in.begin(),in.end());
    /*for(int i=0;i<400;i++)
    {
        cout<<in[i]<<" ";
    }*/
    cout<<in[8]; //9-1
	return 0;
}
