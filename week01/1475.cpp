#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	int room_nbr[10] = { 0, };
	int cnt = 1;

	cin >> n;
	while (n > 0)
	{
		if (n % 10 == 9)
			room_nbr[6]++;
		else
			room_nbr[n % 10]++;
		n /= 10;
	}
	for (int i = 0; i < 9; i++)
	{
		if (i != 6)
			cnt = max(cnt, room_nbr[i]);
	}
	cnt = max (cnt, (room_nbr[6] + 1) / 2);
	cout << cnt;
}