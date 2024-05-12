//username: njones47

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Name.h"
#include "ID.h"
#include "UnivMember.h"
#include "Student.h"
using namespace std;

int main()
{

	ifstream infile;

	//opening the file
	infile.open("StudentsWithCRNs.txt");
	if (!infile) {
		cout << "File open failure!" << endl;
		exit(1);
	}

	vector<Student> Vstudents;
	Student student;

	//adding students to the vector
	while (infile >> student) {
		Vstudents.push_back(student);
	}

	//display the first 5 entries in the vector (kind of a debug statement)
	for (int i = 0; i < 5; i++) {
		cout << Vstudents[i] << endl;
	}

	//close the file
	infile.close();

	string searchName;
	string decision;

	//ask user which student's information they'd like to display
	do {
		cout << "Enter student name to search: ";
		getline(cin, searchName);

		//using a for loop to search for the desired student's name
		bool found = false;
		for (int i = 0; i < Vstudents.size(); i++) {
			if (Vstudents[i].getUnivName().getFullName() == searchName) {
				cout << Vstudents[i] << endl;
				found = true;
				break;
			}
		}

		if(!found) {
			cout << "Student was not found." << endl;
		}


		do {
			//ask the user if they wish to continue
			cout << "Do you want to search for another student? (y/n): ";
			getline(cin, decision);
		} while (decision != "Y" && decision != "y" && decision != "N" && decision != "n");
	} while (decision == "Y" || decision == "y");

	return 0;
}
