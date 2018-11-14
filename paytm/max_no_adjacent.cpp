//https://www.geeksforgeeks.org/maximum-sum-such-that-no-two-elements-are-adjacent/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[6] = {5, 5, 10, 100, 10, 5};
    int maxm=0;
    int sum;
    int M[7];
    M[0] = arr[0];
    M[1] = arr[0]>arr[1]?arr[0]:arr[1];
    for(int i=2;i<6;i++)
    {
        M[i] = (M[i-1]>M[i-2]+arr[i])?M[i-1]:M[i-2]+arr[i];
    }
    cout<<M[5]<<endl;
    return 0;
}
