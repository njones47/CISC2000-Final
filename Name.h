//username: njones47

#include <iostream>
#include <string>
using namespace std;

#ifndef NAME_H
#define NAME_H

//declaring the name class
class Name
{
        public:
               	Name();
                Name(string userName);
                string getFirstName() const;
                string getLastName() const;
                void printName() const;
		string getFullName() const;

        private:
                string fname;
                string lname;

};

#endif
