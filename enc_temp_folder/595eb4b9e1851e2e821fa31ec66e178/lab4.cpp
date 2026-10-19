#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	int hundres, tens;
	cout << "Program started - Lab 6";
	cin >> n;
	hundres = n / 100;
	tens = (n / 10) % 10;
	cout << ((hundres > tens) ? "True" : "False") << endl;
	return 0;
}\
// Зміна для лабораторної роботи №6