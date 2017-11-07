#include "Menu.h"
#include "inGame.h"

#include "windows.h"
#include <stdlib.h>





Menu::Menu()
{
	choice = 0;
	playing = true;
	activeCharacter = 0;
	fileName = "characters.txt";
}

Menu::~Menu()
{

}

// Functions
void Menu::setWindowFullScreen()
{
	HWND hwnd = GetConsoleWindow();
	if (hwnd != NULL) { MoveWindow(hwnd, 0, 0, 1920, 1080, TRUE); }
}

void Menu::initGame()
{
}

void Menu::mainMenu()
{

#pragma region Menu Layout
	// -- Menu Layout ---

	printf("____  ______________________________________________ .___   _________ \n");
	printf("\\   \\/  /\\__    ___/\\_   _____/\\__    ___/\\______   \\|   | /   _____/ \n");
	printf(" \\     /   |    |    |    __)_   |    |    |       _/|   | \\_____  \\  \n");
	printf(" /     \\   |    |    |        \\  |    |    |    |   \\|   | /        \\ \n");
	printf("/___/\\  \\  |____|   /_______  /  |____|    |____|_  /|___|/_______  / \n");
	printf("      \\_/                   \\/                    \\/              \\/  \n");
	cout << "                                                         " << endl;
	cout << "                                                         " << endl;
	cout << "                         Select Option:                  " << endl;
	cout << "                                                         " << endl;
	cout << "                         1. Play Game                    " << endl;
	cout << "                         2. Create New Character         " << endl;
	cout << "                         3. Load Character               " << endl;
	cout << "                         4. Stats                        " << endl;
	cout << "                         5. Options                      " << endl;
	cout << "                         6. Quit                         " << endl;
	cout << "                                                         " << endl;
#pragma endregion

	choice = _getch() - '0';  // Get User input

	
	inGame game;

	switch (choice)
	{
	case 1:		// Play game
#pragma region Game Code
				// -- Play Game Code --
		
		game.StartGame();


#pragma endregion
		break;

	case 2:		// New Character
#pragma region New Character Code

				// -- Create new Character Code ---

		createNewCharacter();
		saveNewCharacter();

#pragma endregion
		break;

	case 3:		// Load Character
#pragma region Load Character Code
				// -- Load Character Code ---

#pragma endregion
		break;

	case 4:		// Show Character Stats
#pragma region Show Character Stats Code
				// -- Show Character Stats Code ---

		characters[activeCharacter].printStats(); // Prints the stats

#pragma endregion
		break;

	case 5:		// Options
#pragma region Options Code
				// -- Options Code ---

#pragma endregion
		break;

	case 6:		// Quit the game
#pragma region Quit Game Code
				// -- Options Code ---

		playing = false;

#pragma endregion
		break;

	default:
		incorrectInput();
		break;
	}
}

void Menu::incorrectInput()
{
	system("cls");

	choice = choice + '0'; // Transform

	int d = choice - '0';

	int y = choice; // Create variable to decode characters

	if (y == 13) cout << "! WARNING : Please select using the menu below without pressing ENTER KEY.\n" << endl;
	else if (y == 8) cout << "! WARNING : You pressed BACKSPACE KEY. Select using the menu below.\n" << endl;
	else if (y == 32) cout << "! WARNING : You pressed SPACE KEY. Select using the menu below.\n" << endl;
	else if (y == 9) cout << "! WARNING : You pressed TAB KEY. Select using the menu below.\n" << endl;
	else cout << "! WARNING : Your selected '" << d << "' which is not in the menu. Please try again.\n\n";

}

void Menu::createNewCharacter()
{
	std::string username;
	cout << "---> Enter username: ";
	std::getline(cin, username);
	system("cls");

	cout << "\n\n		         Welcome " << username << "!\n\n";

	characters.push_back(Character());
	activeCharacter = characters.size() - 1;
	characters[activeCharacter].initialize(username);

}

void Menu::saveNewCharacter()
{
	std::ofstream outFile(fileName);

	int chsize = characters.size(); // Variable to check for debugging

	if (outFile.is_open())
	{
		for (size_t i = 0; i < this->characters.size(); i++)
		{
			outFile << characters[i].getAsString() << "\n";
		}
	}

	outFile.close();
}

/*void Game::loadCharacter()
{
	std::ifstream inFile(fileName);

	if (inFile.is_open())
	{
		while (inFile.eof)
		{
		}
	}

	inFile.close();
}
*/
