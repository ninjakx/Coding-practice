//https://practice.geeksforgeeks.org/problems/most-frequent-word-in-an-array-of-strings
//https://stackoverflow.com/questions/5399591/max-repeated-word-in-a-string
//https://www.geeksforgeeks.org/frequent-word-array-strings/

#include<bits/stdc++.h>
#include<sstream>
using namespace std;
int main()
{   int i =0;
    map <string,int> a;
    string line,word;
    line = "i am what coz i am so cool";
    stringstream ssin(line);
    string c[100];
    while(ssin >> word)
        {
            //cout<<word<<endl;
            //c[i]=word;
            //++i;
            
            ++a[word];
        }

    /*for (int j=0;j<i;j++)
    {
        a[c[j]]++;
    }*/

    for(auto p=a.begin();p!=a.end();p++)
      {
          cout << "(" << p->first << ", " << p->second << ")\n";
      }
      
    int curMax = 0;
    string that_word;
    for(auto it = a.cbegin(); it != a.cend(); ++it ) 
    {   
        if (it ->second > curMax) 
        {
            that_word = it->first;
            curMax = it->second;
        }
    }
cout << "Word " << that_word << " occurs " << curMax << " times " << endl;   
    
    
    return 0;
    
}
