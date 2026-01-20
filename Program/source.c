#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

void position(int x, int y)
{							
	COORD position = { x, y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

int main()
{
	char key = 0;

	int x = 0;
	int y = 0;

	position(x, y);

	printf("¡Ú");

	while (1)
	{
		key = _getch();

		if (key == -32 || key == 0)
		{
			key = _getch();
		}
		
		switch (key)
		{
			case UP	   : y--;
				break;

			case LEFT  : x -= 2;
				break;

			case RIGHT : x += 2;
				break;

			case DOWN  : y++;
				break;

			default	   : printf("exception\n");
				break;
		}

		system("cls");

		position(x, y);

		printf("¡Ú");
	}



	return 0;
}