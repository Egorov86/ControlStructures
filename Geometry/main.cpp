// Geometry
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define SQURE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define ROMBUS_1
//#define ROMBUS_2
//#define TASK_9_6
//#define HARDCORES
//#define CHESSBOARD_1
#define HARD_CHESSBOARD_2
#define TRIANGLE_PASCAL
#define WAVE
#define UPPER_LEFT_ANGLE    (char)218 
#define UPPER_RIGHT_ANGLE   (char)191 
#define LOWER_LEFT_ANGLE    (char)192 
#define LOWER_RIGHT_ANGLE   (char)217 
#define HORIZONTAL_LINE     (char)196 <<  (char)196
#define VERTICAL_LINE       (char)179 
#define WHITE_BOX          "\xDB\xDB"
#define BLACK_BOX          "\x20\x20"



void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << " Введите кол-во звездочек: "; cin >> n;
#ifdef SQURE
	setlocale(LC_ALL, "Russian");
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "*";
		}
		cout << endl;
	}
#endif // SQURE
#ifdef TRIANGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
				cout << "* ";	
		}
		cout << endl;
	}
	cout << endl;
#endif // TRIANGLE_1

#ifdef TRIANGLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
#endif // TRIANGLE_2

#ifdef TRIANGLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}
	cout << endl;
#endif // TRIANGLE_3

#ifdef TRIANGLE_4
		for (int i = 0; i < n; i++)
		{
			for (int j = i; j < n - 1; j++)cout << "  ";
			for (int j = 0; j <= i; j++)cout << "* ";
			cout << endl;
		}
#endif // TRIANGLE_4

#ifdef ROMBUS_1

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << " "; cout << "/";
		for (int j = 0; j < i; j++) cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++) cout << " "; cout << "\\";
		for (int j = i; j < n - 1; j++) cout << "  "; cout << "/";
		cout << endl;
	}

#endif // ROMBUS_1
#ifdef ROMBUS_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << " "; cout << "/";
		for (int j = 0; j < 2*i; j++) cout << " "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++) cout << " "; cout << "\\";
		for (int j = 0; j < (n - 1 - i) * 2; j++) cout << " "; cout << "/";
		cout << endl;
	}
#endif // ROMBUS_2


#ifdef TASK_9_6
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if ((i + j) % 2 == 0)cout << "+ ";else cout << "- ";
			//if (i%2 == j%2)cout << "+ "; else cout << "- ";
			//(i % 2 == j % 2) ? cout << "+ ": cout << "- ";
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
#endif // TASK_9_6
#ifdef HARDCORES
	for (int a = 0, b = 1; a < n; b += a, a = b - a)
	{
		cout << a << "\t";
	}
	cout << endl;
#endif // HARDCORES
#ifdef CHESSBOARD_1
	setlocale(LC_ALL, "C");
	n++;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0) cout << UPPER_LEFT_ANGLE ;
			else if (i == 0 && j == n) cout << UPPER_RIGHT_ANGLE ;
			else if (i == n && j == 0) cout << LOWER_LEFT_ANGLE ;
			else if (i == n && j == n) cout << LOWER_RIGHT_ANGLE ;
			else if (i == 0 || i == n) cout << HORIZONTAL_LINE;
			else if (j == 0 || j == n) cout << VERTICAL_LINE ;
			else (i % 2 == j % 2)? cout << WHITE_BOX : cout << "  ";
		}
		cout << endl;
	}
	
#endif // CHESSBOARD_1


#ifdef HARD_CHESSBOARD_2
	for (int i = 0; i < n * n; i++)
	{
		for (int j = 0; j < n * n ; j++)
		{
			cout << ((i / n & 1) ^ (j / n & 1) ? "* " : "  ");
			 //cout << (i / n + j / n) % 2 ? "* " : "  ";
		}
		cout << endl;
	}
	cout << endl;
#endif // HARD_CHESSBOARD_2

#ifdef TRIANGLE_PASCAL
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= n - i; j++) cout << " ";  // рисуем пробелы до побочной диагонали
		{
			int k = 1;
			for (int j = 0; j <= i; j++)
			{
				cout << k << " "; // вырисовываем переменную k до того момента когда она преобрела новые значения
				k = k * (i - j) / (j + 1);
			}
			cout << endl;
		}
		cout << endl;
	}
	cout << endl;
#endif TRIANGLE_PASCAL

#ifdef WAVE
	for (int i = 0; i < n * n; i++)
	{
		for (int j = 0; j < n * n - 1; j++)
		{
			cout << ((i / n + j / n) % 2 ? "* " : "  ");
		}
	}
	cout << endl;
#endif // WAVE

}