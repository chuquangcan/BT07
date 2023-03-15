#include <iostream>

using namespace std;

int count_even (int* a, int b)
{
	int count = 0;
	for (int i=0; i<b; i++)
	{
		if (a[i] % 2 == 0)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i=0; i<n; i++)
	{
		a[i] = i;
	}
	cout << count_even(a, 5) << endl;
	cout << count_even(a,n) - count_even(a,n-5);
}
