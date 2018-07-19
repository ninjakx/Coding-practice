#include <bits/stdc++.h>
#include <queue>
#include <list>
using namespace std;
list <string> mylist;
string str;

void genSeq(string binary)
{   string pre = "";
    int y = stoull(binary, 0, 2); //string to integer

    for(int i=0;i<binary.length();i++)
    {   if((y & (1<<i)) != 0)
        {
            pre = pre + str[i];
        }
}
mylist.push_back(pre);

}

void generateBin(int n)
{
    queue<string> q;
    q.push("1");
    while (n--)
    {
        string s1 = q.front();
        q.pop();
        //mylist.push_back(s1);
        genSeq(s1);
        string s2 = s1;  
        q.push(s1.append("0"));
        q.push(s2.append("1"));
    }
    
}

int main()
{   
    cin>>str;
    int len = str.length();
    int N = pow(2,len)-1;
    generateBin(N);
    mylist.sort();
    mylist.unique();
    
    for (auto i : mylist)
    {
        if (i != mylist.front()) 
	        cout << ", ";
        cout << i ; 
    }
    
        // OR
        
    /*for (list<string>::iterator i = mylist.begin(); i != mylist.end(); ++i)
    {
        if (*i != mylist.front()) 
	        cout << ", ";
        cout << *i << " ";
    }*/
    
    return 0;
}
