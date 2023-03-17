#include <iostream>
using namespace std;

int n, a, x;
int arr[1000001] = {0, };
int check[2000001] = {0, };

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		check[arr[i]]++;
	}
	cin >> x;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (x - arr[i] > 0 && check[x - arr[i]] && check[arr[i]] && arr[i] < x - arr[i])
				cnt++;
	}
	cout << cnt;
}