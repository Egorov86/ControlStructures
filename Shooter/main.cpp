#include<iostream>
#include<conio.h>
using namespace std;

#define UP_ARROW        72   // ARROW - ������� UP - �����
#define DOWN_ARROW      80   // DOWN - ����
#define LEFT_ARROW      75   // LEFT - �����
#define RIGHT_ARROW     77   // RIGHT - ������
#define Enter           13
#define Escape          27

void main()
{
	setlocale(LC_ALL, "");
	/* char key;
	do
	{
		key = _getch();

		if (key == 119) 
			cout << " ������ " << endl;
		else if (key == 115)
			cout << " ����� " << endl;
		else if (key == 97)
			cout << " ����� " << endl;
		else if (key == 100)
			cout << " ������ " << endl;
		else if (key == 32)
			cout << " ������ " << endl;
		else if (key == 13)
			cout << " ����� " << endl;
		else if (key == 27 )
			cout << " GAME OVER " << endl;
		else if (key != 13 || 32 || 100 || 97 || 115 || 119 || 27)
			cout << " �� ������ �� �� ������� " << endl;

	} 
	while (key != 27); cout << " ����� " << endl;
	*/
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		/*if (key == 'w' || key == 'W' || key == UP_ARROW)cout << "������" << endl;
		else if (key == 's' || key == 'S' || key == DOWN_ARROW)cout << "�����" << endl;
		else if (key == 'a' || key == 'A' || key == LEFT_ARROW)cout << "�����" << endl;
		else if (key == 'd' || key == 'D' || key == RIGHT_ARROW)cout << "������" << endl;
		else if (key == ' ')cout << "������" << endl;
		else if (key == 13)cout << "�����" << endl;
		else if (key != 27 && key != -32)cout << "Error" << endl;*/
		switch (key)
		{
		case 'w':case 'W':case UP_ARROW: cout << "������" << endl;  break;
		case 's':case 'S':case DOWN_ARROW: cout << "�����" << endl;   break;
		case 'a':case 'A':case LEFT_ARROW: cout << "�����" << endl;   break;
		case 'd':case 'D':case RIGHT_ARROW: cout << "������" << endl;  break;
		case 13: cout << "�����" << endl;  break;
		case 32: cout << "������" << endl;  break;
		case Escape:cout << "�����" << endl;
		case -32: break;
		default:  cout << "ERROR" << endl;
		}
	} while (key != 27 );
}