# Recursion: Davis' Staircase : https://www.hackerrank.com/challenges/ctci-recursive-staircase/problem

[Video](https://www.youtube.com/watch?v=VJ21RCxqAKM)

### DP (efficient) Solution:
Handling large numbers.

```cpp
#include <bits/stdc++.h>

using namespace std;

// Complete the stepPerms function below.
int stepPerms(int n) {
    int arr[3] = {1,2,4};
    
    if (n<=1){
        return 1;
    }
    else if (n==2) {
        return 2;
    }
    else if ( n==3){
        return 4;
    }
    int j;
    for (int i=3;i<n;i++)
    {
        arr[i%3] = arr[0]+arr[1]+arr[2];
        j = i%3;
    }
    return arr[j];

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int s;
    cin >> s;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int s_itr = 0; s_itr < s; s_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int res = stepPerms(n);

        fout << res << "\n";
    }

    fout.close();

    return 0;
}```
