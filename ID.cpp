//username: njones47

#include <iostream>
#include <string>
#include "ID.h"
using namespace std;

//default constructor definition
ID::ID()
{
        static int currentNumber = 10000000;
        ID_number = currentNumber++;
        full_ID = "A" + to_string(ID_number);
}


//function definition to get the ID number
int ID::getID_number()
{
        return ID_number;
}


//function definition to get full ID number
string ID::getFullID_number() const
{
        return full_ID;
}
