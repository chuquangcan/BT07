#include <iostream>

using namespace std;

void func0 (int* arr)
{
	cout << sizeof(arr[0]) << endl;
	cout << sizeof(arr) << endl;
}

void func1 (int arr[])
{
	cout << sizeof(arr) << endl;
}

void func2 (int arr[10])
{
	cout << sizeof(arr);
}

int main()
{
	int a[10];
	for (int i=0; i<10; i++)
	{
		a[i] = i;
	}
	cout << sizeof(a) << endl;
	func0(a);
	func1(a);
	func2(a);
}
