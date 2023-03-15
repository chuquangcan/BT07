#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	char c1[] = "Hello";
	char c2[] = "Word";
	int check = strcmp(c1, c2);
	cout << check;
}
