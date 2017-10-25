#pragma once
#include <string>
#include <iostream>
#include <iomanip>

class Character
{
private:
	std::string username;
	int level;
	int scoreTotal;
	int scoreSesion;

public:
	Character();
	Character::Character(std::string name, int level, int scoreTotal, int scoreSesion);
	virtual ~Character();

	// Functions
	void initialize(const std::string username);
	void printStats() const;
	std::string getAsString() const;

	

	// Accessors
	inline const std::string& getUsername() const { return this->username; };
	inline const int& getLevel() const { return this->level; };
	inline const int& getScoreTotal() const { return this->scoreTotal; };
	inline const int& getScoreSesion() const { return this->scoreSesion; };

	// Modifiers


};

