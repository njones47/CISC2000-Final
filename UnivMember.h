//username: njones47

#include <iostream>
#include <string>
#include "Name.h"
#include "ID.h"
using namespace std;

#ifndef UNIVMEMBER_H
#define UNIVMEMBER_H

//declaring the University Member class
class UnivMember
{
        public:
               	UnivMember();
                UnivMember(string fullname, string role);
                UnivMember(ID personID, string fullname, string role);
                void printUnivMember();
		Name getUnivName() const;
	//protected so that they are accessible by the derived classes
        protected:
                ID UnivID;
                Name UnivName;
                string role;

};

#endif
