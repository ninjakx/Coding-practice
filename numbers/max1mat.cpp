//https://practice.geeksforgeeks.org/problems/maximum-no-of-1s-row
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {   
        int c,r;
        cin>>r>>c;
        map <int, int> hash;
        hash.clear();
        int a[40][40];
	    for(int i=0;i<r;i++)
	    {
	        for(int j=0;j<c;j++)
	        {
	            cin>>a[i][j];
	            //cout<<a[i][j]<< " ";
	            if (a[i][j] == 1)
	                ++hash[i];
	                
	        }
	        //cout<<endl;
	    }
	    
	 /*for (auto v:hash)
	 cout<<v.first<<"->"<<v.second<<endl;*/
   
    auto x = max_element(hash.begin(), hash.end(),
    [](const pair<int, int>& p1, const pair<int, int>& p2) {
        return p1.second < p2.second; });
        cout<<x->first<<endl;
        
        //int max = max_element(hash.begin(), hash.end(), LessBySecond())->first;
        //cout<<max<<endl;
    }
	return 0;
}
