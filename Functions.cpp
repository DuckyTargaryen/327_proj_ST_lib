//
/*
 * Functions.cpp
 *
 *  Created on: Nov 5, 2017
 *      Author: keith
 */
#include <iostream>
#include <memory>

#include "./includes/Functions.h"
#include "./includes/Smalltalk_American.h"
#include "./includes/ST_American_DonutEnthusiest.h"
#include "./includes/Smalltalk_Brit.h"
#include "./includes/Watch.h"
#include "./includes/constants.h"

using namespace std;

//create a vector with appropriate numbers of Smalltalk_Brit,Smalltalk_American and ST_American_DonutEnthusiest
//objects using unique pointers.  Since we are using c++11 returning this vector by value is fine since the 
//compiler will move the vector on return rather than recreate it (this means there is no copy penalty)
std::vector<std::unique_ptr<Smalltalk>> getPeople(int numBrit,
		int numAmerican, int numbAmericanDonutEnthusiest,
		int numWatches) {
	
	vector<unique_ptr<Smalltalk>> vectPeople;
	for(int i = 1; i <= numBrit; i++){
		vectPeople.push_back(unique_ptr<Smalltalk_Brit>(new Smalltalk_Brit(i)));
	}
	for(int i = 1; i <= numAmerican; i++){
		vectPeople.push_back(unique_ptr<Smalltalk_American>(new Smalltalk_American(i)));
	}
	for(int i = 1; i <= numbAmericanDonutEnthusiest; i++){
		vectPeople.push_back(unique_ptr<ST_American_DonutEnthusiest>(new ST_American_DonutEnthusiest(i)));
	}
	int size = vectPeople.size();
	int watchNum = 0;
	for(int i = 0; i < size; i++){
		if(watchNum < numWatches){
			unique_ptr<Watch> temp = unique_ptr<Watch>(new Watch);
			if(vectPeople[i]->giveWatch(temp)){
				watchNum++;
			}
		}
	}
	return vectPeople;
}
