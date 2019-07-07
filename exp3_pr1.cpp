#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	int arr[15], n, i, small, large, sum = 0;
	float average;
	cout << fixed << showpoint << setprecision(2);

	n = 15;

	for (i = 0; i < n; i++)
	{
		cout << "Enter Number " << i + 1 << ":";
		cin >> arr[i];
	}

	small = arr[0];
	large = arr[0];

	for (i = 1; i < n; i++)
	{
		if (arr[i] < small)
			small = arr[i];
		if (arr[i] > large)
			large = arr[i];
	}

	for (i = 0; i < n; i++)
	{
		sum += arr[i];
	}

	average = sum / n;

	cout << "\nLargest Integer is: " << large;
	cout << "\nSmallest Integer is: " << small;

	cout << "\nTotal: " << sum << endl;
	cout << "Average: " << average;

	_getch();
	return 0;
}