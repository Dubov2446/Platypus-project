/*

  File Name:  platypus.h
  Authors:    Josue Lopez, Artem Suprun
  Date:       03/03/2022
  Summary:    Definition of the Platypus class

// constructors
Platypus()
    Precondition:   An instance of Platypus is declared.
    Postcondition:  weight and age are initialized to 0;
                    name is initialized to "";
                    gender is initialized to '';
                    alive and mutant are initialized to false.
Platypus(char, float, short, string)
    Precondition:   An instance of Platypus is declared.
    Postcondition:  gender, weight, age, and name are
                    initialized to parameter values;
                    alive is initialized to true;
                    mutant is initialized to false.

// destructor
~Platypus()
    Precondition:   End block.
    Postcondition:  Platyus Instance is removed from memory.
  
// mutators
void setWeight(float)
    Precondition:   Platypus instance exists.
    Postcondition:  weight is set to parameter value.
void setAge(short)
    Precondition:   Platypus instance exists.
    Postcondition:  age is set to parameter value.
void setName(string)
    Precondition:   Platypus instance exists.
    Postcondition:  name is set to parameter value.
void setGender(char)
    Precondition:   Platypus instance exists.
    Postcondition:  gender is set to parameter value.
void setAlive(bool)
    Precondition:   Platypus instance exists.
    Postcondition:  alive is set to parameter value.
void setMutant(bool)
    Precondition:   Platypus instance exists.
    Postcondition:  mutant is set to parameter value.

// accessors
float getWeight()
    Precondition:   Platypus instance exists.
    Postcondition:  return value of weight.
short getAge()
    Precondition:   Platypus instance exists.
    Postcondition:  return value of age.
string getName()
    Precondition:   Platypus instance exists.
    Postcondition:  return value of name.
char getGender()
    Precondition:   Platypus instance exists.
    Postcondition:  return value of gender.
bool getAlive()
    Precondition:   Platypus instance exists.
    Postcondition:  return value of alive.
bool getMutant()
    Precondition:   Platypus instance exists.
    Postcondition:  return value of mutant.

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
    Platypus hatch();
    void print();
};

#endif
