#include <iostream>
using namespace std;

string s;
int check[26];

int main()
{
	cin >> s;
	for (int i = 0; i < s.size(); i++)
		check[s[i] - 'a']++;
	for (int i = 0; i < 26; i++)
		cout << check[i] << " ";
}