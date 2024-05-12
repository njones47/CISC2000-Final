//username: njones47

#include <iostream>
#include <string>
#include "Name.h"

//default constrcutor
Name::Name()
{
        fname = "First";
        lname = "Last";
}

//constructor
Name::Name(string userName)
{
        int commapos = userName.find(",");
        lname = userName.substr(0, commapos);
        fname = userName.substr(commapos + 2, userName.size() - commapos);
}

//member function to get first name
string Name::getFirstName() const
{
        return fname;
}

//member function to get last name
string Name::getLastName() const
{
        return lname;
}

//member function to print name
void Name::printName() const
{
        cout << fname << " " << lname;
}

//member function to get full name
string Name::getFullName() const
{
	return fname + " " + lname;
}
