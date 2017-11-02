#include "Menu.h"
#include "Board.h"
#include "Tetriminos.h"
#include "Functions.h"



using namespace std;

int main()
{
	srand(time(NULL));

	Menu menu;
	menu.initGame();

	while (menu.getPlaying())
	{
		menu.setWindowFullScreen();
		menu.mainMenu();
	}
	return 0;
}