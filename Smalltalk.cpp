/*
 * Smalltalk.cpp
 *
 *  Created on: Nov 13, 2019
 *      Author: sean
 */
#include <iostream>
#include "./includes/Smalltalk.h"
#include "./includes/Watch.h"
#include "./includes/constants.h"

using namespace std;

/**
 * Constructor: Initializes Smalltalk variables.
 * @param myNationality - Represents the nationality of the person.
 * @param iPerson - Represents the number of the person, used to differentiate various people of the same nationality.
 */
Smalltalk::Smalltalk(std::string myNationality, int iPerson):nationality(myNationality), iPerson(iPerson), current_phrase(0), pWatch(unique_ptr<Watch>(nullptr)){
}

/**
 * Destructor
 */
Smalltalk::~Smalltalk(){
}

/**
 * Cycles through phrases of each person.
 * @return std::string - The current phrase.
 */
std::string Smalltalk::saySomething(){
	string str = mySmallTalk[current_phrase % mySmallTalk.size()];
	current_phrase++;
	return str;
}

/**
 * Gets the time from the person's watch.
 * If they don't have a watch, it will return that it doesn't have a watch.
 * @return std::string - A string representing the time or a statement that there is no watch.
 */
std::string Smalltalk::getTime(){
	if(pWatch == 0){
		return I_DO_NOT_HAVE_A_WATCH;
	}
	return pWatch->getTime();

}

/**
 * Takes the watch from the person and gives it to someone else.
 * @return std::unique_ptr<Watch> - The watch that the person has or an null pointer.
 */
std::unique_ptr<Watch>  Smalltalk::takeWatch(){
	if(pWatch == 0){
		return unique_ptr<Watch>(nullptr);
	}
	return move(pWatch);
}

/**
 * Assigns a watch to the person.
 * @param pWatch - The watch that will be assigned to the person.
 * @return bool - Represents whether or not the watch was able to be given to the person.
 */
bool Smalltalk::giveWatch(std::unique_ptr<Watch> &pWatch){
	if(this->pWatch.get() != 0){
		return false;
	}
	this->pWatch = move(pWatch);
	return true;
}


