/*
  
  File Name:  driver
  Authors:    Josue Lopez, Artem Suprun
  Date:       03/03/2022
  Summary:    Testing file for the Platypus class
  
*/

#include <iostream>
#include "platypus.h"
using namespace std;

int main()
{
    Platypus p1;
    p1.hatch();
    
    p1.print();
    
    return 0;
}
