#pragma once

#include "Functions.h"
#include "Character.h"

#include <ctime>
#include <stdio.h>
#include <conio.h>
#include <vector>
#include <fstream>
#include <cstdio>


using namespace std;

class Menu
{
private:
	int choice;
	bool playing;

	// Character 
	int activeCharacter;
	std::vector<Character> characters;
	std::string fileName;

public:
	Menu();
	virtual ~Menu();

	// Operators

	// Functions
	void setWindowFullScreen();
	void mainMenu();
	void endGame();
	void incorrectInput();
	void initGame();
	void createNewCharacter();
	void saveNewCharacter();
	void loadCharacter();
	void openGame();

	// Accessors 
	inline bool getPlaying() const { return this->playing; };

	// Modifier

};

