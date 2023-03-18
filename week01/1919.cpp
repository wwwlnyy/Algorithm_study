#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	string str1, str2;
	int check1[26];
	int check2[26];
	int cnt = 0;

	cin >> str1 >> str2;
	for (int i = 0; i < str1.length(); i++)
		check1[str1[i] - 'a']++;
	for (int i = 0; i < str2.length(); i++)
		check2[str2[i] - 'a']++;
	for (int i = 0; i < 26; i++)
	{
		if (check1[i] != check2[i])
			cnt += abs(check1[i] - check2[i]);
	}
	cout << cnt;
}