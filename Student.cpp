//username: njones47

#include <iostream>
#include <string>
#include <vector>
#include "Name.h"
#include "ID.h"
#include "UnivMember.h"
#include "Student.h"
using namespace std;

//default constructor, derived from UnivMember
Student::Student() : UnivMember()
{
	for (int i = 0; i < 5; i++) {
		courseCRNS[i] = 0;
	}
}

//constructor derived from UnivMember
Student::Student(ID personID, string fullname, string role) : UnivMember(personID, fullname, role)
{
	for (int i = 0; i < 5; i++) {
		courseCRNS[i] = 0;
	}
}

//member function to set course CRN values
void Student::setCourseCRNs(int courses[5])
{
	for (int i = 0; i < 5; i++) {
		courseCRNS[i] = courses[i];
	}
}

//member function to get course CRN values
int * Student::getCourseCRNs()
{
	return courseCRNS;
}


//overloading the << operator, only need to print Name and course CRNs
ostream& operator <<(ostream& outs, const Student& stud)
{
	outs << stud.getUnivName().getFirstName() << " " << stud.getUnivName().getLastName() << endl;
	for (int i = 0; i < 5; i++) {
		outs << stud.courseCRNS[i] << " ";
	}
	outs << endl;
	return outs;
}

//overloading the >> operator, suspected issue here
istream& operator >>(istream& ins, Student& stud)
{
	string fullName;
	int cCRNs[5];

	getline(ins, fullName, '\t');
	stud.UnivName = Name(fullName);

	for (int i = 0; i < 5; i++) {
		ins >> cCRNs[i];
	}

	stud.setCourseCRNs(cCRNs);
	return ins;
}

