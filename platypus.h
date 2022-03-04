/*

  File Name:  platypus.h
  Authors:    Josue Lopez, Artem Suprun
  Date:       03/03/2022
  Summary:    Definition of the Platypus class

// constructors
Platypus()
  Precondition:
  Postcondition:
Platypus(char, float, short, string)
  Precondition:
  Postcondition:

// destructor
~Platypus()
  Precondition:
  Postcondition:
  
// mutators
void setWeight(float)
  Precondition:
  Postcondition:
void setAge(short)
  Precondition:
  Postcondition:
void setName(string)
  Precondition:
  Postcondition:
void setGender(char)
  Precondition:
  Postcondition:
void setAlive(bool)
  Precondition:
  Postcondition:
void setMutant(bool)
  Precondition:
  Postcondition:

// accessors
float getWeight()
  Precondition:
  Postcondition:
short getAge()
  Precondition:
  Postcondition:
string getName()
  Precondition:
  Postcondition:
char getGender()
  Precondition:
  Postcondition:
bool isAlive()
  Precondition:
  Postcondition:
bool getMutant()
  Precondition:
  Postcondition:

// other public member functions
void ageMe()
  Precondition:
  Postcondition:
void fight(Platypus)
  Precondition:
  Postcondition:
void eat()
  Precondition:
  Postcondition:
void hatch()
  Precondition:
  Postcondition:
void print()
  Precondition:
  Postcondition:
  
// helper member functions
string randName(char)
  Precondition:
  Postcondition:

*/

#ifndef PLATYPUS_H
#define PLATYPUS_H

#include <string>

class Platypus
{
private:
    float weight;
    short age;
    std::string name;
    char gender;
    bool alive;
    bool mutant;
    // helper functions
    std::string randName(char);
public:
    // constructors
    Platypus();
    Platypus(char, float, short, std::string);
    ~Platypus() { }
    // mutators
    void setWeight(float w) { weight = w; }
    void setAge(short a) { age = a; }
    void setName(std::string n) { name = n; }
    void setGender(char g) { gender = g; }
    void setAlive(bool a) { alive = a; }
    void setMutant(bool m) { mutant = m; }
    // accessors
    float getWeight() { return weight; }
    short getAge() { return age; }
    std::string getName() { return name; }
    char getGender() { return gender; }
    bool getAlive() { return alive; }
    bool getMutant() { return mutant; }
    // other member functions
    void ageMe();
    void fight(Platypus);
    void eat();
    void hatch();
    void print();
};

#endif
