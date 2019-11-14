/*
 * Smalltalk.cpp
 *
 *  Created on: Nov 13, 2019
 *      Author: sean
 */
#include "./includes/Smalltalk.h"
#include "./includes/Watch.h"


Smalltalk::Smalltalk(std::string myNationality, int iPerson):nationality(myNationality), iPerson(iPerson), current_phrase(0){
}

Smalltalk::~Smalltalk(){

}

std::string Smalltalk::saySomething(){

}

std::string Smalltalk::getTime(){

}

std::unique_ptr<Watch>  Smalltalk::takeWatch(){

}

bool Smalltalk::giveWatch(std::unique_ptr<Watch> &pWatch){

}


