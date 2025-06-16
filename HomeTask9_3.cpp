#include <iostream>
#include <Windows.h>

using namespace std;

void swap(int* a, int* b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void revers(int* arr, int size)
{
	for (int i = 0; i < size / 2; i++)
	{
		int a, b;
		a = *(arr + i);
		b = *(arr + (size - 1) - i);
		swap(a, b);
		*(arr + i) = a;
		*(arr + (size - 1) - i) = b;
	}

}

void show(int* arr,int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;
}

int main()
{
	SetConsoleOutputCP(1251);

	int arr[] = { 1,2,3,4,5,6,7,8,9 };

	cout << "До функции reverse :\n";
	show(arr,9);

	revers(arr, 9);

	cout << "После функции reverse:\n";
	show(arr, 9);

}

