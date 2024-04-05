#include <iostream>
using namespace std;

int arr[20];
int n;
int i;

void input()
{
	while (true)
	{

		cout << " enter the number of elemen in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;

