//https://www.geeksforgeeks.org/interesting-method-generate-binary-numbers-1-n/
//https://www.geeksforgeeks.org/generate-all-binary-strings-from-given-pattern/
//https://www.geeksforgeeks.org/print-subsequences-string/

#include <bits/stdc++.h>
#include <queue>
#include <list>
using namespace std;
list <string> mylist;
string str;
int i = -1;
void genSeq(string binary)
{   string pre = "";
    int y = stoull(binary, 0, 2);
    //cout<<y<<endl;    
    //cout<<xi;
    for(int i=0;i<binary.length();i++)
    {   if((y & (1<<i)) != 0)
        {
            pre = pre + str[i];
        }
}
i+=1;
if (i != 0)
    cout<<", ";
cout<<pre;
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
    // for (auto i : mylist)
    //    cout << i << " "; 
    
        // OR
        
    // for (list<string>::iterator i = mylist.begin(); i != mylist.end(); ++i)
    //    cout << *i << " ";
}

int main()
{   
    cin>>str;
    int len = str.length();
    int N = pow(2,len)-1;
    generateBin(N);
    return 0;
}
