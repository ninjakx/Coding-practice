#include <bits/stdc++.h>
#include <queue>
#include <list>
using namespace std;
list <string> mylist;
string str;

template<typename ForwardIterator>
ForwardIterator unordered_unique(ForwardIterator first, ForwardIterator last)
{
    typedef typename iterator_traits<ForwardIterator>::value_type value_type;
    unordered_set<value_type> unique;
    return remove_if(first, last, 
                          [&unique](const value_type &arg) mutable -> bool
                              { return !unique.insert(arg).second; });
}

void genSeq(string s, int d ,int n, string pre)
{   //cout<<"d:"<<d<<"==>";
    if (d==n)
    {
        cout<<pre<<endl;
        return;
    }
    //cout<<"1:"<<pre<<"->"<<s[d]<<endl;
    genSeq(s, d+1, n, pre+s[d]);//pick
    //cout<<"2:"<<pre<<endl;
    genSeq(s, d+1, n, pre);//not pick
    //cout<<"3:"<<pre<<endl;
}

void printSeq(string st)
{   int n = st.length();
    genSeq(st,0,n,"");
}





int main()
{   
    cin>>str;
    //int len = str.length();
    //printSeq(str);
    int n = str.length();
    genSeq(str,0,n,"");
    
    return 0;
}



