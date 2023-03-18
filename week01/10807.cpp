#include <iostream>
using namespace std;

int main()
{
	int n, v, cnt;
	int arr[101] = { 0, };
	
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cin >> v;
	for (int i = 0; i < n; i++)
	{
		if (v == arr[i])
			cnt++;
	}
	cout << cnt;
}