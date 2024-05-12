//username: njones47

#include <iostream>
#include <string>
#include "Name.h"
#include "ID.h"
#include "UnivMember.h"
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H

//declaring the Student class, derived from University Member
class Student : public UnivMember
{
	public:
		Student();
		Student(ID personID, string fullname, string role);
		void setCourseCRNs(int courses[5]);
		int * getCourseCRNs();
		friend ostream& operator <<(ostream& outs, const Student& stud);
		friend istream& operator >>(istream& ins, Student& stud);

	private:
		int courseCRNS[5];
};

#endif
