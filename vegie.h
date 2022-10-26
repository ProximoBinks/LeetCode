#include <string>
#include "animal.h"
using namespace std;

#ifndef VEGIE_H
#define VEGIE_H

class vegie : public animal {
    public:
        static int nextID;
    
        vegie(string n,int v);      // create a vegie with name n and body volume v

        string get_name();

        string get_favourite_food();
        void set_favourite_food(string food);

    private:
        string favourite_food;     // the vegie's favourite food, initialise to "grass"
};

#endif