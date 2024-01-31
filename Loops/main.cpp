#include<iostream>
#include<conio.h>
using namespace std;

//#define WHILE_1
#define WHILE_2

void main()
{
    setlocale(LC_ALL, "");
//#ifdef WHILE_1
//	int i = 0; //счeтчик цикла
//	int n; // количество операций
//	cout << "Введите количество итерации: "; cin >> n;
//	while (i < n)
//	{
//		cout << "Hello World!";
//		cout << "Сам привет!";
//		cout << i++ << endl;
//		//i++;
//	}
//#endif //WHILE_1
//	  // ифдеф - держим ctrl + нажимаем k потом s 
//	  //выбираем ifdef потом сверху пишем вместо ДЕБУГ WHI выбираем WHILE_1 
//	  // (нажимаем сtrl+ пробел и нажим TAB и внизу endif станет тоже while вместо дебуг )
//	// ctrl+k+c закоментить и ctrl+k+u разкоментить
//	char key;
//	do
//	{
//		key = _getch(); // функция _getch()' ожидает нажатие клавиши и возвращает ASCII 
//		// функция _getch()' объявление в библиотеке <conio.h>
//		cout << (int)key << "\t" << key << endl;
//		// (int)key - это явное преобразование переменной в тип данных инт для того чтобы увидеть ASCII  код символа, хранящегося в переменной 'key'
//	} while (key != 27); 
      //cout << "введите целое положительное число" << endl; // задача 1 факториал
      //int number1;
      //cin >> number1;
      //int i = 1;
      //int factorial = 1;
      //while (i != number1)
      //{
      //    factorial = factorial * ++i; cout << factorial << endl;
      //}
      //cout << "factorial = " << factorial << endl;
     //задача 2 возведение в степень числа.
    //cout << "введите возводимое число: ";
    //int number;cin >> number;
    //int number1 = number;
    //cout << "введите степень возведения: ";
    //int step;cin >> step; // степень
    //int i = 1; // кол-во циклов
    //while (i != step)
    //{
    //    number1 *= number; // присваиваем новый разряд степени
    //    i++;   // увеличиваем кол-во циклов до кол-ва степени
    //    cout << number1 << endl; // показывает промежуточные итоги
    //}
    //cout << " заключительное " << number1 << endl; //показывет итог
    /*
    int i = 0; // ЗАДАЧА 3 
    int n = 256;
    while (i < n)
    {
        if (i % 16 == 0) cout << endl;
        cout << (char)i++ << " ";
    }
    cout << endl;
    setlocale(LC_ALL, "");
    cout << "Вот и сказочке конец " << endl;
    */
}
