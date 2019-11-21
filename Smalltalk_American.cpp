/*
 * Smalltalk_American.cpp
 *
 *  Created on: Nov 13, 2019
 *      Author: sean
 */

#include "./includes/Smalltalk_American.h"
#include "./includes/constants.h"

/**
 * Constructor: Initializes Smalltalk_American, also calls populatePhrases and Smalltalk constructor.
 * @param iPerson - Represents the number of a person, used to differentiate various people of the same nationality.
 */
Smalltalk_American::Smalltalk_American(int iPerson):Smalltalk(AMERICAN, iPerson){
	populatePhrases();
}

/**
 * Constructor: Initializes Smalltalk_American, also calls populatePhrases and Smalltalk constructor.
 * @param myNationality - Represents the nationality of the person.
 * @param iPerson - Represents the number of a person, used to differentiate various people of the same nationality.
 */
Smalltalk_American::Smalltalk_American(std::string myNationality, int iPerson):Smalltalk(myNationality, iPerson){
	populatePhrases();
}

/**
 * Destructor
 */
Smalltalk_American::~Smalltalk_American(){
}

/**
 * Populates mySmallTalk with American phrases.
 */
void Smalltalk_American::populatePhrases(){
	mySmallTalk.push_back(AMERICAN_PHRASE_1);
	mySmallTalk.push_back(AMERICAN_PHRASE_2);
	mySmallTalk.push_back(AMERICAN_PHRASE_3);
	mySmallTalk.push_back(AMERICAN_PHRASE_4);
	mySmallTalk.push_back(AMERICAN_PHRASE_5);
}
