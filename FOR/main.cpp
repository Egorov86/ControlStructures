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
    setlocale(LC_ALL, "Russian"); //cout << "������� ����� ������������� �����" << endl; // ������ 1 ���������
    int number1;
    cout << "������� ����� ��� ��������� ���������: ";
    cin >> number1;
    int i = 1;
    double factorial = 1;
    for (i, factorial; i <= number1; i++)
    {
        factorial = factorial * i; cout << factorial << endl; // ������������� ���������
    }
    cout << "factorial = " << factorial << endl;
#endif // TASK_6_1
#ifdef TASK_6_2
    setlocale(LC_ALL, "Russian");
    double a; // ��������� �������
    cout << "������� ���������� �����: "; cin >> a;
    int n;  // ���������� �������
    cout << "������� ������� ����������: "; cin >> n;
    double N = 1; // �������
    if (n < 0)
    {
        a = 1 / a;
        n = -n;
    }
    int i = 0;
    for (i, n, N, a; i++ < n; N *= a)
    {
        cout << N << endl; // ���������� ������������� �����
    }
    cout << " �������������� " << N << endl; //��������� ����  
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
    cout << "������� �� ������ �������� ������� ��� ���������: ";
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
    cout << "������� ���������� ������ ���� ��������� ��� ������ �� �����: ";
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
    cout << "������� ������: "; cin >> n;
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
    cout << "������� ����� ��� ����������� ������� ��������� ";
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
    cout << "������ ������ ����� � ������� ��������: ";
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