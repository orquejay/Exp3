#include <iostream>
#include <conio.h>

using namespace std; 

int main()
{
	const int a = 3, b = 7;
	char province;
	int temperature[a][b];

	cout << "Enter all temperature for a week of Province A, Province B and the Province C. \n";

	for (int i = 0; i < a; ++i)
	{
		for (int j = 0; j < b; ++j)
		{
			if (i + 1 == 1)
				province = 'A';
			else if (i + 1 == 2)
				province = 'B';
			else if (i + 1 == 3)
				province = 'C';
			cout << "Province " << province << ", Day " << j + 1 << " : ";
			cin >> temperature[i][j];
		}
	}

	cout << "\n\nDisplaying Values:\n";

	for (int i = 0; i < a; ++i)
	{
		if (i + 1 == 1)
			province = 'A';
		else if (i + 1 == 2)
			province = 'B';
		else if (i + 1 == 3)
			province = 'C';
		for (int j = 0; j < b; ++j)
		{
			cout << "Province " << province << ", Day " << j + 1 << " = " << temperature[i][j] << endl;
		}
	}

	_getch();
	return 0;
}