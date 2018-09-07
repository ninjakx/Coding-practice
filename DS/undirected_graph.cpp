//https://ide.geeksforgeeks.org/yJ4td91Hb8

#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

class Graph
{
    int V; // start vertice 
    vector<vector<int>> adj{5, vector<int> (5,-1)};
    public:
    Graph(int start_V)
    {
        V = start_V;
    }
    void addEdge(int start,int end,int wt);
    void display();
};
void Graph::addEdge(int start,int end,int wt)
{   
    int A=start;
    int B=end;
    adj[A][B] = wt;                 //A to B
}
void Graph::display()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<adj[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
int main()
{
    Graph g(2);
    g.addEdge(1,2,1);
    g.addEdge(2,3,5);
    g.addEdge(4,2,7);
    g.display();
    return 0;
}
