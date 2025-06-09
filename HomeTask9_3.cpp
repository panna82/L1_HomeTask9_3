#include <iostream>
#include <Windows.h>

using namespace std;

void revers(int* arr, int size)
{
	cout << "После функции reverse:";

	for (int i = 0; i < size; i++)
	{
		cout << *(arr + (size-1) - i)<<" ";
	}

}

int main()
{
	SetConsoleOutputCP(1251);

	int arr[] = { 1,2,3,4,5,6,7,8,9 };

	cout << "До функции reverse :";
	for (int i = 0; i < 9; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;

	revers(arr, 9);
	cout << endl;

}

