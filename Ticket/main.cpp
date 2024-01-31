#include<iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Ââåäèòå øåñòèçíà÷íûé íîìåğ áèëåòà:";
    int number;
    cin >> number;
    int n1;
    int n2;
    n1 = number % 1000;
    n2 = number / 1000;
    cout << n1 << " " << n2 << endl;
    int sum1 = 0;
    int sum2 = 0;
    while (n1)
    {
        sum1 = n1 % 10 + sum1;
        n1 /= 10;
        sum2 = n2 % 10 + sum2;
        n2 /= 10;

    }
    cout << sum1 << " " << sum2 << endl;
    if (sum1 != sum2)
    {
        cout << " ÁÈËÅÒ ÍÅ ÂÛÉÃĞÀË: " << endl;
    }
    else
    {
        cout << " ÁÈËÅÒ ÂÛÉÃĞÀË: " << endl;
    }
}