# Platypus-project
Platypus-project finals week


## Responsibilities
### Artem Suprun:
- Header file
  - accessors & mutators
- Member Funcitons
  - default constructor & constructor
  - hatch Funciton
  - eat Function
  - helper Functions
<hr />


### Josue Lopez:
- Driver file
  - main
- Member Functions
  - print Funciton
  - ageMe Function
  - fight Function
  

## Platypus Data Dictionary
| Class | Status | Data Type | Name | initialized |
| --- | --- | --- | --- | --- | 
| Platypus | private | float | weight | false |
| Platypus | private | short | age | false |
| Platypus | private | string | name | false |
| Platypus | private | char | gender | false |
| Platypus | private | bool | alive | false |
| Platypus | private | bool | mutant | false |


## Platypus Function List
| Function | Located | Function Type |
| --- | --- | --- |
| Platypus() | platypus.h | constructor |
| Platypus(char, float, short, string) | platypus.h | overloaded constructor |
| ~Platypus() | platypus.h | destructor |
| float getWeight() | platypus.h | accessor |
| short getAge() | platypus.h | accessor |
| string getName() | platypus.h | accessor |
| char getGender() | platypus.h | accessor |
| bool getAlive() | platypus.h | accessor |
| bool getMutant() | platypus.h | accessor |
| void setWeight(float) | platypus.h | mutator |
| void setAge(short) | platypus.h | mutator |
| void setName(string) | platypus.h | mutator |
| void setGender(char) | platypus.h | mutator |
| void setAlive(bool) | platypus.h | mutator |
| void setMutant(bool) | platypus.h | mutator |
| void print() | platypus.h | member function |
| void ageMe() | platypus.h | member function |
| void fight(Platypus) | platypus.h | member function |
| void eat() | platypus.h | member function |
| Platypus hatch() | platypus.h | member function |
| string randName(char) | platypus.h | helper function
