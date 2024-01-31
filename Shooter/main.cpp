#include<iostream>
#include<conio.h>
using namespace std;

#define UP_ARROW        72   // ARROW - Стрелка UP - Вверх
#define DOWN_ARROW      80   // DOWN - Вниз
#define LEFT_ARROW      75   // LEFT - Влево
#define RIGHT_ARROW     77   // RIGHT - Вправо
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
			cout << " Вперед " << endl;
		else if (key == 115)
			cout << " Назад " << endl;
		else if (key == 97)
			cout << " Влево " << endl;
		else if (key == 100)
			cout << " Вправа " << endl;
		else if (key == 32)
			cout << " Прыжок " << endl;
		else if (key == 13)
			cout << " Огонь " << endl;
		else if (key == 27 )
			cout << " GAME OVER " << endl;
		else if (key != 13 || 32 || 100 || 97 || 115 || 119 || 27)
			cout << " Вы нажали не ту клавишу " << endl;

	} 
	while (key != 27); cout << " Выход " << endl;
	*/
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		/*if (key == 'w' || key == 'W' || key == UP_ARROW)cout << "Вперед" << endl;
		else if (key == 's' || key == 'S' || key == DOWN_ARROW)cout << "Назад" << endl;
		else if (key == 'a' || key == 'A' || key == LEFT_ARROW)cout << "Влево" << endl;
		else if (key == 'd' || key == 'D' || key == RIGHT_ARROW)cout << "Вправо" << endl;
		else if (key == ' ')cout << "Прыжок" << endl;
		else if (key == 13)cout << "Огонь" << endl;
		else if (key != 27 && key != -32)cout << "Error" << endl;*/
		switch (key)
		{
		case 'w':case 'W':case UP_ARROW: cout << "Вперед" << endl;  break;
		case 's':case 'S':case DOWN_ARROW: cout << "Назад" << endl;   break;
		case 'a':case 'A':case LEFT_ARROW: cout << "Влево" << endl;   break;
		case 'd':case 'D':case RIGHT_ARROW: cout << "Вправо" << endl;  break;
		case 13: cout << "ОГОНЬ" << endl;  break;
		case 32: cout << "Прыжок" << endl;  break;
		case Escape:cout << "Выход" << endl;
		case -32: break;
		default:  cout << "ERROR" << endl;
		}
	} while (key != 27 );
}