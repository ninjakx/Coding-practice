//https://practice.geeksforgeeks.org/problems/sorting-elements-of-an-array-by-frequency/0
#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<int,int> &p1 , const pair<int,int> &p2)
{   
    //cout<<p1.first<<"->"<<p2.first<<endl;
    if (p1.second==p2.second)
        {
            if(p1.first<p2.first)
                return true;
            else
                return false;
        }
       
    return p1.second>p2.second;
    
}
int main() {

	int t;
	cin>>t;
	while(t--)
	{
	    map <int,int> has;
        vector <pair<int,int>>v;
	    int n;
	    cin>>n;
	    int a;
	    for(int i =0;i<n;i++)
	    {
	        cin>>a;
	        has[a]++;
	    }
	    copy(has.begin(),has.end(),back_inserter(v));
	    sort(v.begin(),v.end(),cmp);
        for(int i = 0; i < v.size(); ++i)
        {
            int times = v[i].second;
            while(times--)
                cout<<v[i].first<<" ";
        }
       cout<<endl;
	}
	return 0;
}
