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
    Precondition:   Platypus instance exists.
    Postcondition:  Increments teh object's age value;
                    with a 2% chance of turing mutant true;
                    and has a chance of becoming dead.
                    The "death" chance is calculated by
                    10 * (object's weight value).
                    (e.g. 10 * 5 = 50%)
void fight(Platypus)
    Precondition:   Two Platypus instances: calling instance,
                    and the parameter.
    Postcondition:  The calling instance will attack the
                    parameter instance, the survivor is
                    calculated with the "fight ratio" with
                    a random value between 1 to 100;
                    fight ratio: (calling / parameter) * 50.
                    If the random value is less than the
                    fight ratio, the calling survives;
                    If it's more than the fight ratio,
                    the parameter survives.
void eat()
    Precondition:   Platypus instance exists.
    Postcondition:  Increases the weight value of the
                    Platypus object by a random amount
                    between 0.1% to 5.0% of its current
                    weight value.
void hatch()
    Precondition:   Platypus instance exists.
    Postcondition:  Randomly creates a newborn Platypus;
                    alive is initialized to true;
                    mutant is initialized to false;
                    age is initialized to 0;
                    gender is initialized to
                    either f or m, randomly;
                    weight is randomly initialized
                    between 0.1  and 1.0;
                    name is randomly chosen by the
                    randName() function.
                    
void print()
    Precondition:   Platypus instance exists.
    Postcondition:  Displays the attributes of the
                    Platypus instance.
  
// helper member functions
string randName(char)
    Precondition:   Called by other member functions with
                    gender value in the parameter.
    Postcondition:  Returns a random name based on the
                    value of the gender variable (m/f).
float randNum(int, int, bool)
    Precondition:   Called by other member functions with
                    3 double values. first is the ending
                    value, second is the additional value,
                    and the third is a bool. while true
                    converts the random value to %.
    Postcondition:  Returns a random value.
int fileSize(ifstream&)
    Precondition:   Called by other member functions with
                    input file class in the parameter.
    Postcondition:  Returns the total number of names.

*/

#ifndef PLATYPUS_H
#define PLATYPUS_H

#include <string>
#include <fstream>

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
    float randNum(int, int addon = 0, bool convert = false);
    int fileSize(std::ifstream&);
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
