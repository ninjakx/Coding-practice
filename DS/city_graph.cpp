#include<iostream>
#include<stdio.h>
#include<vector>
#include<map>
using namespace std;
#define N 25 // No of cities
int index =0;
class city
{   
    public:
    map<string,int> location;
   
};


class Graph
{
    int V; // start vertice 
    vector<vector<int>> adj{25, vector<int> (25,0)};
    public:
    Graph(int start_V)
    {
        V = start_V;
    }
    city c;
    void addEdge(string start,string end,int wt);
    void display();
};
void Graph::addEdge(string start,string end,int wt)
{   
    if (!c.location[start])
        c.location[start]=index++;
    if (!c.location[end])
        c.location[end]=index++;
    int A=c.location[start];
    int B=c.location[end];
    adj[A][B] = wt;                 //A to B
}
void Graph::display()
{   auto it = c.location.begin();
    
    for (auto lt : c.location)
    {
        cout<<"\t"<<lt.first;
    }
    cout<<"\n";
    
    for(int i=0;i<index-1;i++)
    {   cout<<it->first<<"\t";
        for(int j=0;j<index-1;j++)
        {   
            cout<<adj[i][j]<<"\t";
        }
        cout<<"\n";
        it++;
    }
}
int main()
{
    Graph g(2);
    
    g.addEdge("A","B",1);
    g.addEdge("C","A",5);
    g.addEdge("D","E",7);
    g.addEdge("E","A",5);
    g.addEdge("D","B",7);
    g.display();
    return 0;
}
