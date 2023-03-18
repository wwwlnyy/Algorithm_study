#include <iostream>
using namespace std;

int main()
{
	int n, k;
	int cnt = 0;
	int arr[7][2];

	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		int s, y;
		cin >> s >> y;
		arr[y][s]++;
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 1; j < 7; j++)
		{
			cnt += arr[j][i] / k;
			if (arr[j][i] % k)
				cnt++;
		}
	}
	cout << cnt;
}