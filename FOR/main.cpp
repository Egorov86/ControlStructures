//FOR
#include<iostream>
#include<conio.h>
using namespace std;
using std ::cout;
using std ::cin;
using std::endl;


//#define TASK_6_0
//#define TASK_6_1
//#define TASK_6_2
#define TASK_6_3
//#define TASK_6_4
//#define TASK_6_5
//#define TASK_6_6
//#define TASK_6_7
//#define TASK_6_8

void main()

{
    setlocale(LC_ALL, "");

#ifdef TASK_6_0
    for ( int i = 0; i < 5; i++)
    {
        cout << i << "\t";
    }
    cout << endl;
#endif // TASK_6_0
#ifdef TASK_6_1
    setlocale(LC_ALL, "Russian"); //cout << "введите целое положительное число" << endl; // задача 1 факториал
    int number1;
    cout << "Введите число для выведения Фаториала: ";
    cin >> number1;
    int i = 1;
    double factorial = 1;
    for (i, factorial; i <= number1; i++)
    {
        factorial = factorial * i; cout << factorial << endl; // Промежуточные фаториалы
    }
    cout << "factorial = " << factorial << endl;
#endif // TASK_6_1
#ifdef TASK_6_2
    setlocale(LC_ALL, "Russian");
    double a; // основание степени
    cout << "введите возводимое число: "; cin >> a;
    int n;  // показатель степени
    cout << "введите степень возведения: "; cin >> n;
    double N = 1; // степень
    if (n < 0)
    {
        a = 1 / a;
        n = -n;
    }
    int i = 0;
    for (i, n, N, a; i++ < n; N *= a)
    {
        cout << N << endl; // показывает промежуточные итоги
    }
    cout << " Заключительное " << N << endl; //показывет итог  
#endif // TASK_6_2
#ifdef TASK_6_3
    //setlocale(LC_ALL, "Russian");
    double n = 256;
    for (int i = 0; i < n; i++)
    {
        if (i % 16 == 0) cout << endl;
        cout << (char)i << "\t";
    }
    cout << endl;
#endif // TASK_6_3
#ifdef TASK_6_4
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите до какого значения вывести ряд Фибоначчи: ";
    cin >> n;
    for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
    {
        cout << a << "\t ";
    }
    cout << endl;
#endif // TASK_6_4
#ifdef TASK_6_5
    setlocale(LC_ALL, "Russian");
    int a = 0;
    int a1 = 0;
    int a2 = 1;
    int i = 0;
    int b;
    cout << "Введите количество членов ряда Фибоначчи для вывода на экран: ";
    cin >> b;
    for (a, a1, a2; i < b; a = a1 + a2)
    {
        a1 = a2;
        a2 = a;
        i++;
        cout << a << " " << endl;
    }
#endif // TASK_6_5
#ifdef TASK_6_6
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите предел: "; cin >> n;
    for (int i = 0; i <= n; i++)
    {
        bool simple = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                simple = false;
                break;
            }
        }
        if (simple)cout << i << "\t";
    }
    cout << endl;
#endif // TASK_6_6
#ifdef TASK_6_7
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите число для ограничения таблицы умножения ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << i << " * " << j << " = " << j * i << "\t";
        }
        cout << endl;
    }
#endif // TASK_6_7
#ifdef TASK_6_8
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "предел вывода чисел в таблице Пифагора: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j * i << "\t";
        }
        cout << endl;
    }
#endif // TASK_6_8

}