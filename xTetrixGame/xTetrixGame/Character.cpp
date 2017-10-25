#include "Character.h"

Character::Character()
{
	this->username = "NONE";
	this->level = 1;
	this->scoreTotal = 0;
	this->scoreSesion = 0;

}

Character::Character(std::string name, int level, int scoreTotal, int scoreSesion)
{
	this->username = "NONE";
	this->level = 1;
	this->scoreTotal = 0;
	this->scoreSesion = 0;

}

Character::~Character()
{
}

void Character::initialize(const std::string username)
{
	this->username = username;
	this->level = level;
	this->scoreTotal = 0;
	this->scoreSesion = 0;
}

void Character::printStats() const
{
	system("cls");
	std::cout << "----  User stats ---" << std::endl;
	std::cout << "                    " << std::endl;
	std::cout << "Username : " << this->username << std::endl;
	std::cout << "Level : " << this->level << std::endl;
	std::cout << "Highest Score : " << this->scoreTotal << std::endl;
	std::cout << std::endl;
	system("pause");
	system("cls");

}

std::string Character::getAsString() const
{
	return "Username:" + username + " Level:"
		+ std::to_string(level) + " ScoreTotal:"
		+ std::to_string(scoreTotal) + " ScoreSesion:"
		+ std::to_string(scoreSesion);
}