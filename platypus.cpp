/*
  
  File Name:  platypus.cpp
  Authors:    Josue lopez, Artem Suprun
  Date:       03/03/2022
  Summary:    Implementation of the Platypus class
  
*/
#include <cstdlib> // for exit(0) if open/close file not successful and random num
#include <ctime> // for random number
#include "platypus.h"
using std::cout, std::endl;

// FIGHT FUNCTION IS NOT DONE, NEED TO LOOK AT THIS A BIT MORE
Platypus Platypus::fight(Platypus right){ // data type for function
    int randomNumber;                   // Platypus or void?
    srand(time(NULL));
    randomNumber = rand() % (100) + 1;
    
    float fightRatio;
    fightRatio = ((this->getWeight() / right.getWeight()) * 50.0);
    
    
}

void Platypus::print(Platypus p){
    cout << "Weight: " << p.getweight() << endl;
    cout << "Age: " << p.getAge() << endl;
    cout << "Name: " << p.getName() << endl;
    cout << "Gender: " << p.getGender() << endl;
    if(p.getAlive()){
        cout << "They are alive" << endl;
    }
    else{
        cout << "They are not alive" << endl;
    }
    if(p.getMutant()){
        cout << "They are mutant" << endl;
    }
    else{
        cout << "They are not mutant" << endl;
    }
    return;
}
