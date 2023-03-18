#include <iostream>
using namespace std;

int main()
{
	int A, B, C, result, check[10];

	cin >> A >> B >> C;
	result = A * B * C;
	while (result > 0)
	{
		check[result % 10]++;
		result /= 10;
	}
	for (int i = 0; i < 10; i++)
		cout << check[i] << "\n";
}