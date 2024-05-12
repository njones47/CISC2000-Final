//username

#include <iostream>
#include <string>
using namespace std;

#ifndef ID_H
#define ID_H

//declaring the ID class
class ID
{
        public:
               	ID();
                int getID_number();
                string getFullID_number() const;

        private:
                int ID_number;
                string full_ID;
};

#endif

