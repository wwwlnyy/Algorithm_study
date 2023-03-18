#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, flag;
	string src, fry_src;
	char arr1[26] = { 0, };
	char arr2[26] = { 0, };

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> src >> fry_src;
		if (src.length() != fry_src.length())
			cout << "Impossible\n";
		else
		{
			for (int j = 0; j < src.length(); j++)
			{
				arr1[src[j] - 'a']++;
				arr2[fry_src[j] - 'a']++;
			}
			flag = 1;
			for (int j = 0; j < 26; j++)
			{
				if (arr1[j] != arr2[j])
				{
					flag = 0;
					break;
				}
			}
			if (flag)
				cout << "Possible\n";
			else
				cout << "Impossible\n";
			for (int j = 0; j < 26; j++)
			{
				arr1[j] = 0;
				arr2[j] = 0;
			}
		}
	}
}