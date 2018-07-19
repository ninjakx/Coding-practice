//http://www.cplusplus.com/forum/beginner/68260/
// ascii of 1 is 49 and that of 0 is 48 . 
//int n1 = char - '0' will give that integer value

#include <string>
#include <vector>
#include <iostream>
#include <stdio.h>
using namespace std;
void product(string a, string b)
 {
    vector<int> result(a.size() + b.size(), 0);
    for( int i = a.size() - 1; i >= 0; i-- )
        {
            for( int j = b.size() - 1; j >= 0; j-- )
                {
                    //cout<<"I:"<<i<<" , "<<"J:"<<j<<" , I+J+1:";
                    //cout<<i+j+1<<endl;
                    //cout<<"prod:"<<( b[ j ] - '0') * ( a[ i ] - '0' )<<endl;
                    result[ i + j + 1 ] += ( b[ j ] - '0') * ( a[ i ] - '0' ); //single array to store intermediate values
                }
            }
    for( int i = a.size() + b.size(); i >= 0; i-- ){
        if( result[ i ] >= 10 ){
                result[ i - 1 ] +=result[ i ] / 10;
                result[ i ] %= 10;
            }
        }
    cout << a << " * " << b << " = ";
    for( int i = 0; i < a.size() + b.size(); i++ ){
        cout << result[ i ];
        }
    cout << endl;
}

int main( )
{
    string str1, str2 ;
    str1 = "175";str2 = "12";
    product( str1, str2 );
    return 0;
}
