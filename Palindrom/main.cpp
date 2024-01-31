#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int number; // число введенное с клавиатуры
	int reverse = 0; // исходное число записанное в обратном порядке (цифры задом на перед)
	cout << "Введите число:"; cin >> number;
	int buffer = number; // копируем введенное число, чтобы данные введенные пользователем остались неизменными.
	while (buffer)
	{
		 //прежде чем схранить следующий младший разряд
		reverse = reverse * 10 + buffer % 10; //сохраняем младший разряд буфера
		buffer /= 10; // убираем младший разряд из буфера
	}
	cout << number << endl;
	cout << buffer << endl;
	cout << reverse << endl;
	if (number == reverse)
	{
		cout << "Вы ввели палиндром" << endl;
	}
	else
	{
		cout << "Вы ввели НЕпалиндром" << endl;
	}
}