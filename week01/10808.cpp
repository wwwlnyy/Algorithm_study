#include <iostream>
using namespace std;

int main()
{
	string s;
	int check[26];

	cin >> s;
	for (int i = 0; i < s.size(); i++)
		check[(int)s[i] - 'a']++;
	for (int i = 0; i < 26; i++)
		cout << check[i] << " ";
}