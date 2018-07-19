//https://practice.geeksforgeeks.org/problems/good-or-bad-string

#include <iostream>

using namespace std;
int check(int con,int vow)
{
     if (con>3 || vow>5)
	        {
	            //cout<<0<<endl;
	            return 0;
	        }
	 else
	        {
	            //cout<<1<<endl;
	            return 1;
	        }
	
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{   string vowel = "aeiou";
	    string str;
	    int v;
	    cin>>str;
	    int c=0,vow=0;
	    for(int i=0 ;i<str.length();i++)
	    {
	        if (vowel.find(str[i])!=string::npos)
	            {   //cout<<"V:"<<str[i]<<endl;
	                vow += 1;
	                c = 0;
	                
	                //continue;
	            }
	       else if (str[i]=='?')
	            {   //cout<<"?:"<<str[i]<<endl;
	                vow += 1;
	                c += 1;
	                //continue;
	            }
	       else  
	            {   //cout<<"C:"<<str[i]<<endl;
	                vow = 0;
	                c += 1;
	                //continue;
	            }
           v = check(c,vow);
           if (v == 0)
                {
                    cout<<0<<endl;
                    break;
                }
	            
	    }
	    if (v==1)
	       cout<<1<<endl;
	    //cout<<c<<" "<<vow<<endl;

	}
	return 0;
}
