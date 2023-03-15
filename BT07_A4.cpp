#include <iostream>

using namespace std;

int binary_search (int* a, int low, int hight, int num)
{
	int mid = (hight-low+1)/2;
	if (a[mid] < num)
	{
		return binary_search (a, mid+1, hight, num);
	}
	else if (a[mid] > num)
	{
		return binary_search (a, low, mid-1, num);
	}
	else 
	{
		return mid;
	}
}

int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i=0; i<n ;i++)
	{
		cin >> a[i];
	}
	int num;
	cin >> num;
	cout << binary_search(a, 0, n-1, num);
}
