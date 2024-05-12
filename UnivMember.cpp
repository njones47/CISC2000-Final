//username: njones47

#include <iostream>
#include <string>
#include "Name.h"
#include "ID.h"
#include "UnivMember.h"
using namespace std;

//default constructor
UnivMember::UnivMember()
{
        role = " ";
        UnivID = ID();
        UnivName = Name();
}

//constructor
UnivMember::UnivMember(string fullName, string myRole)
{
        UnivName = Name(fullName);
        role = myRole;
}

//constructor
UnivMember::UnivMember(ID myID, string fullName, string myRole)
{
        UnivID = myID;
        UnivName = Name(fullName);
        role = myRole;
}

//member function to print
void UnivMember::printUnivMember()
{
        cout << role << ": ";
        UnivName.printName();
        cout << "ID: " << UnivID.getFullID_number() << endl;
}

//member function to get Name
Name UnivMember::getUnivName() const
{
	return UnivName;
}
