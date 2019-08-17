#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a;

	cout << "Masukkan Nilai : "; cin >> a;
	cout << endl;

	if (a == 1)
	{
		cout << "Nilai A adalah 1";
	}
	else if (a == 2)
	{
		cout << "Nilai A adalah 2";
	}
	else if (a == 3)
	{
		cout << "Nilai A adalah 3";
	}
	else
	{
		cout << "Nilai A bukan 1, 2 ataupun 3, melainkan: " << a;
	}

	_getch();
	return 0;
}