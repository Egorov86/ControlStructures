//ControlStructures
#include<iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "");
    cout << "Hello Controls" << endl;
    int temperature;
    cout << "������� ���������� ������� "; cin >> temperature;
    cout << "����������� �������: " << temperature << "��������\n";
    if (temperature > 0)
    {
        cout << "�� ����� �����" << endl;
    }
    else if (temperature > 40)
    {
        cout << "�� � �������" << endl;
    }
    else
    {
        cout << "�� ����� �������" << endl;
    }
}