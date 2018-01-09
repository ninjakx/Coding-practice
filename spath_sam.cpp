#include <iostream>
#include <vector>
#include <stdio.h>      /* printf */
#include <stdlib.h>     /* abs */
#include <utility>      /* pair */
#include <algorithm>    /* sort */
#define maxim 1e9
using namespace std;

vector< pair<int,int> >coords; //vector for storing coordinates
pair< int,int > temp;          // vector for storing temporary coordinates
vector< int > nodes;           // vector for storing customers location points (nodes)

int calc_distance(pair<int,int> a , pair<int,int> b)
{
    return(abs(a.first-b.first)+abs(a.second-b.second));

}


int main(){
	int n; // no of customers
	cin>>n;
        int mat[n+2][n+2];
        for(int i =0 ; i<n+2;i++)
	{
		cin>>temp.first>>temp.second;
		coords.push_back(temp);
	}
// Adjancency Matrix to compute distance and show in the form of matrix
	for(int i=0;i<n+2;i++)
	{
		for(int j=0;j<n+2;j++)
		{	mat[i][j] = calc_distance(coords[i],coords[j]);
		}
		if(i!=0 && i!=1)
		nodes.push_back(i); // nodes of customers index

	}
	int mindist = maxim;
	do{
		int distance =0 ;
		int prev = 0; //starting from office
		for(int i=0;i<n;i++)
		{
			distance+=mat[prev][nodes[i]];
			prev = nodes[i];
		}
		distance += mat[prev][1]; // adding distance btw home and last visited node
		if(distance < mindist)
			mindist = distance;
	}while(next_permutation(nodes.begin(),nodes.end())); //changes order of nodes
	
	//for(int i=0;i<(int)nodes.size();i++)
	//	cout<<nodes.at(i) <<endl;
	cout<<mindist<<endl;
	return 0;
}
