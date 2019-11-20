/*
 * Smalltalk_Brit.cpp
 *
 *  Created on: Nov 13, 2019
 *      Author: sean
 */

#include "./includes/Smalltalk_Brit.h"
#include "./includes/constants.h";

/**
 * Constructor: Initializes Smalltalk_Brit, also calls populatePhrases and Smalltalk constructor.
 * @param iPerson - Represents the number of a person, used to differentiate various people of the same nationality.
 */
Smalltalk_Brit::Smalltalk_Brit(int iPerson):Smalltalk(BRIT, iPerson){
	populatePhrases();
}

Smalltalk_Brit::~Smalltalk_Brit(){

}

/**
 * Populates mySmallTalk with British phrases.
 */
void Smalltalk_Brit::populatePhrases(){
	mySmallTalk.push_back(BRIT_1);
	mySmallTalk.push_back(BRIT_2);
	mySmallTalk.push_back(BRIT_3);
	mySmallTalk.push_back(BRIT_4);
	mySmallTalk.push_back(BRIT_5);
	mySmallTalk.push_back(BRIT_6);
	mySmallTalk.push_back(BRIT_7);
}


