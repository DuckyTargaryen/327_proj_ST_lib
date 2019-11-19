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

Smalltalk::Smalltalk(std::string myNationality, int iPerson):nationality(myNationality), iPerson(iPerson), current_phrase(0){
	pWatch = unique_ptr<Watch>(nullptr);
}

Smalltalk::~Smalltalk(){

}

std::string Smalltalk::saySomething(){
	string str = mySmallTalk[current_phrase % mySmallTalk.size()];
	current_phrase++;
	return str;
}

std::string Smalltalk::getTime(){
	if(pWatch == 0){
		return I_DO_NOT_HAVE_A_WATCH;
	}
	return pWatch->getTime();

}

std::unique_ptr<Watch>  Smalltalk::takeWatch(){
	if(pWatch == 0){
		return unique_ptr<Watch>(nullptr);
	}
	return move(pWatch);
}

bool Smalltalk::giveWatch(std::unique_ptr<Watch> &pWatch){
	if(this->pWatch.get() != 0){
		return false;
	}
	this->pWatch = move(pWatch);
	return true;
}


