//ControlStructures
#include<iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "");
    cout << "Hello Controls" << endl;
    int temperature;
    cout << "Введите температру воздуха "; cin >> temperature;
    cout << "Температура воздуха: " << temperature << "градусов\n";
    if (temperature > 0)
    {
        cout << "На улице тепло" << endl;
    }
    else if (temperature > 40)
    {
        cout << "Вы в пустыне" << endl;
    }
    else
    {
        cout << "На улице холодно" << endl;
    }
}