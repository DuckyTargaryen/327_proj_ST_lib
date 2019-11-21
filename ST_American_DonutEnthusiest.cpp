/*
 * ST_American_DonutEnthusiest.cpp
 *
 *  Created on: Nov 13, 2019
 *      Author: sean
 */

#include "./includes/ST_American_DonutEnthusiest.h"
#include "./includes/constants.h"

/**
 * Constructor: Initializes Smalltalk_DonutEnthusiest, also calls populatePhrases and Smalltalk_American constructor.
 * @param iPerson - Represents the number of a person, used to differentiate various people of the same nationality.
 */
ST_American_DonutEnthusiest::ST_American_DonutEnthusiest(int i):Smalltalk_American(AMERICAN_DE, i){
	populatePhrases();
}

/**
 * Destructor
 */
ST_American_DonutEnthusiest::~ST_American_DonutEnthusiest(){

}

/**
 * Populates mySmallTalk with American donut enthusiest phrases.
 */
void ST_American_DonutEnthusiest::populatePhrases(){
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_1);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_2);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_3);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_4);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_5);
}



