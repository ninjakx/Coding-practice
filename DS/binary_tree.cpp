#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int i=0;
class binaryTree
{
    private:
    int l; //no of levels
    //int i; //index of nodes
    int ar[100];
    public:
    binaryTree(int lev)
    {
        l=lev;
       // i=0;
    }
    //cout<<n;
   
    void parentNode(int num);
    void leftNode(int num);
    void rightNode(int num);
    void display();
    
    
};
void binaryTree::parentNode(int num)
{
    ar[i] = num;
    cout<<i<<" ";
}
void binaryTree::leftNode(int num)
{
    //2*i + 1;
    cout<<2*i+1<<" ";
    ar[2*i+1] = num;
    //
    //if()
}
void binaryTree::rightNode(int num)
{
    //i = 2*i + 2;
    cout<<2*i+2<<" ";
    ar[2*i+2] = num;
    

}
void binaryTree::display()
{   cout<<"\n";
    //cout<<l;
    for(int nodes=0;nodes<(2*l)+1;nodes++)
    {
        cout<<ar[nodes]<<" ";
    }
}
/*void binaryTree::display()
{
    cout<<n;
}*/
//void binaryTree
int main()
{
    int levels = 3;
    binaryTree obj(3);
    int count = 1;
    obj.parentNode(count);
    for(int j=0;j<levels;j++)
    {
    obj.leftNode(++count);
    obj.rightNode(++count);
    i++;
    //obj.leftNode(2);
    //obj.rightNode(3);
    }
    obj.display();
    return 0;
}
