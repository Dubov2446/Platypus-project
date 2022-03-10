/*
  
  File Name:  platypus.cpp
  Authors:    Josue lopez, Artem Suprun
  Date:       03/03/2022
  Summary:    Implementation of the Platypus class
  
*/
#include <cstdlib> // for exit(0) if open/close file not
                   // successful and random num
#include <ctime> // for random number
#include <iostream> // for cout, cin, endl
#include <cmath>
#include <fstream>
#include "platypus.h"
using namespace std;

Platypus::Platypus()
{
    weight = 0.0;
    age = 0;
    name = "";
    gender = ' ';
    alive = false;
    mutant = false;
}
Platypus::Platypus(char g, float w, short a, string n)
{
    gender = g;
    weight = w;
    age = a;
    name = n;
    alive = true;
    mutant = false;
}

void Platypus::eat()
{
    float randAmount;
    randAmount = randNum(50, 1, 3);
    weight += (weight * randAmount);
    return;
}

void Platypus::hatch()
{
    
    this->setAlive(true);
    this->setMutant(false);
    this->setAge(0);
    if (randNum(2) == 1)
        this->setGender('m');
    else
        this->setGender('f');
    this->setWeight(randNum(10, 1, 1));
    this->setName( randName( p1.getGender()));
    return;
}

string Platypus::randName(char g)
{
    string n;
    int num,
        size;
    ifstream fin;
    
    if (g == 'm')   // opens file depending on gender
        fin.open("m_name.txt");
    else if (g == 'f')
        fin.open("f_name.txt");
    if (!fin)   // exists if there's an error
        exit(0);
    
    size = fileSize(fin);
    fin.clear();
    fin.seekg(0, ios::beg);
    num = static_cast<int>( randNum(size));
    for (int i = 0; i < num; i++)
        fin >> n;
    fin.close();
    return n;
}

int Platypus::fileSize(ifstream& fin)
{
    int size = 0;
    string temp;
    while (!fin.eof())
    {
        fin >> temp;
        size++;
    }
    return size;
}

float Platypus::randNum(int end, int addon, int pows)
{
    float value;
    srand(time(NULL));
    value = rand() % end + addon;
    value /= pow(10, pows);
    return value;
}

// FIGHT FUNCTION IS NOT DONE, NEED TO LOOK AT THIS A BIT MORE
void Platypus::fight(Platypus right){ // data type for function
    int randomNumber;                   // Platypus or void?
    srand(time(NULL));
    randomNumber = rand() % (100) + 1;
    
    float fightRatio;
    fightRatio = ((this->getWeight() / right.getWeight()) * 50.0);
    
    
}

void Platypus::print(){
    cout << "Weight: " << this->getWeight() << endl;
    cout << "Age: " << this->getAge() << endl;
    cout << "Name: " << this->getName() << endl;
    cout << "Gender: " << this->getGender() << endl;
    if(this->getAlive()){
        cout << "They are alive" << endl;
    }
    else{
        cout << "They are not alive" << endl;
    }
    if(this->getMutant()){
        cout << "They are mutant" << endl;
    }
    else{
        cout << "They are not mutant" << endl;
    }
    return;
}
