#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
#define WIDTH 8
void main()
{
	setlocale(LC_ALL, "Russian");
	int h;
	cout << " ������� ������ ������������: "; cin >> h;
	int nf = 1;
	for (int i = 0; i < h; i++)
	{
		cout.width(WIDTH / 2);
		cout << "";
	}
	cout << left;
	cout << 1 << endl;
	for (int n = 1; n <= h; n++)
	{
		nf *= n;
		for (int i = 0; i < h - n; i++)
		{
			cout.width(WIDTH / 2);
			cout << "";
		}
		int mf = 1;
		cout.width(WIDTH);
		cout << 1;
		for (int m = 1; m <= n; m++)
		{
			mf *= m;
			int mnf = 1;
			for (int mn = 1; mn <= n - m; mn++)
			{
				mnf *= mn;
			}
			cout.width(WIDTH); // ������ ������ ������, � ������, ������� ������������ ����� �������� ��������� ��������
			cout << nf / mf / mnf;
		}
		cout << endl;
	}
	cout << endl;
}