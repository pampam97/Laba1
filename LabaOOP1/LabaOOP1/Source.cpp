/*#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	setlocale(0, " ");
	int x;
	cout << "Введите число:"; cin >> x;
	
	cout << hex << x<<endl;
	system("pause");
	return 0;

}*/

#include <iostream>
using namespace std;

int main() {
	setlocale(0, " ");

	int n;
	cout << "Введите строку:"<<endl; cin >> n;


	cout <<" Строка:"<< n << endl; //вывод строки
	cout <<" Шестнадцатеричный код: "<< hex << n << endl; //вывод в шестнадцатеричной системе счисления
	cout <<" Восьмеричный код: "<< oct << n << endl; //вывод в восьмеричной системе счисления

	system("pause");
	return 0;
}