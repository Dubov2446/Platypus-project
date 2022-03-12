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
#include <cmath> // pow()
#include <fstream> // ifstream
#include "platypus.h"
using namespace std;

Platypus::Platypus()
{
    srand(time(NULL));
    weight = 0.0;
    age = 0;
    name = "";
    gender = ' ';
    alive = false;
    mutant = false;
}
Platypus::Platypus(char g, float w, short a, string n)
{
    srand(time(NULL));
    gender = g;
    weight = w;
    age = a;
    name = n;
    alive = true;
    mutant = false;
}

void Platypus::eat()
{
    try
    {
        if ( !(alive) )
            throw "Cannot feed a dead platypus";
        float randAmount;
        randAmount = randNum(50, 1, 3);
        weight += (weight * randAmount);
    }
    catch (const char* msg)
    {
        cerr << msg << endl;
    }
    return;
}

void Platypus::hatch()
{
    alive = true;
    mutant = false;
    age = 0;
    if (randNum(2) == 1)
        gender = 'm';
    else
        gender = 'f';
    weight = randNum(10, 1, 1);
    name = randName(gender);
    return;
}

string Platypus::randName(char g)
{
    string newName;
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
    num = static_cast<int>( randNum(size, 1));
    for (int i = 0; i < num; i++)
        getline(fin, newName);
    fin.close();
    return newName;
}

int Platypus::fileSize(ifstream& fin)
{
    int size = 0;
    string temp;
    while (!fin.eof())
    {
        getline(fin, temp);
        size++;
    }
    return size;
}

float Platypus::randNum(int end, int addon, int pows)
{
    float value;
    value = rand() % end + addon;
    value /= pow(10, pows);
    return value;
}

void Platypus::fight(Platypus right){
    int randomNumber;
    srand(time(NULL));
    randomNumber = (rand() % (100) + 1);

    float fightRatio;

    fightRatio = ((getWeight() / right.getWeight()) * 50.0);

    if (randomNumber < fightRatio){
        right.getAlive = false;
    }
    else{
        getAlive = false;
    }
}

void Platypus::ageMe(){
    int randNumber;
    float chanceDying;
    srand(time(NULL));
    randomNumber = (rand() % (100) + 1); // random num from 1 - 100
    
    this->age++; // increments objects age.

    if(randomNumber < 3){ // 2% chance
        this->mutant = true;
    }

    chanceDying = this->weight * 10.0;
    
    if(this->weight >= 10.0){
        this->alive = false;
        return; // ends because if it weighs 10 or more lbs, it dies 100%
    }
    else if(randomNumber <= chanceDying){
        this->alive = false;
    }
    return;
}

void Platypus::print(){
    cout << "Weight: " << this->weight << endl;
    cout << "Age: " << this->age << endl;
    cout << "Name: " << this->name << endl;
    cout << "Gender: " << this->gender << endl;
    if(this->alive){
        cout << "They are alive" << endl;
    }
    else{
        cout << "They are not alive" << endl;
    }
    if(this->mutant){
        cout << "They are mutant" << endl;
    }
    else{
        cout << "They are not mutant" << endl;
    }
    return;
}
