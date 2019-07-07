#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int main()
{
	char array[50];
	int size;
	
	cout << "Enter a char array.\n";
	cin >> array;

	size = 0;
	while (array[size] != '\0')
	size++;

	for (int j = size - 1; j >= 0; j--)
	{
		cout << array[j];
	}
	
	cout << "\nArray size is:" << size;

	_getch();
	return 0;
}