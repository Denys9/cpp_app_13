#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
	srand(time(0));
	const int size = 10;
	int arr[size];
	for (size_t i = 0; i < size; i++)
	{
		cout << "enter " << i + 1 << " subject - ";
		int grad;
		cin >> grad;
		arr[i] = grad;
	}
	system("cls");
	int operation;
	cout << "enter num of oper (1-3) - ";
	cin >> operation;
	switch (operation)
	{
	case 1:
	{
		for (size_t i = 0; i < size; i++)
		{
			cout << i + 1 << " subject - ";
			cout << arr[i] << " " << endl;
		}
	}break;
	case 2:
	{
		cout << "enter subject where you wanna change grade - ";
		int sub;
		cin >> sub;
		cout << "enter new grade - ";
		int newgrade;
		cin >> newgrade;
		arr[sub - 1] = newgrade;
		cout << "new array - ";
		for (size_t i = 0; i < size; i++)
		{
			cout << i + 1 << " subject - ";
			cout << arr[i] << " " << endl;
		}
	}break;
	case 3:
	{
		cout << "avg - ";
		double avg;
		int sum = 0;
		for (size_t i = 0; i < size; i++)
		{
			sum += arr[i];
		}
		avg = (float)sum / size;
		cout << setprecision(2) << avg;
		if (avg >= 10.7)
		{
			cout << "you will get moneyyy\n";
		}
		else
		{
			cout << "you won't get money\n";
		}
	}break;
	default:
		break;
	}
}