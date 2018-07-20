#include <iostream>
#include<algorithm>
#include <unordered_map>
using namespace std;

int main() {
	unordered_map<string, int> hash;

	string s[] = {"a","b","c","d","e","a","g","a","c","d","a"};
	int size = *(&s+1)-s;
	//int size = sizeof(s)/sizeof(s[0]);
	cout<<"size:"<<size<<endl;
	for (int i=0;i<size;i++)
	{
		++hash[s[i]];	
	}
for (auto p : hash)
{
    cout << p.first << " occurred " << p.second << " times.\n";
}
	return 0;
}
