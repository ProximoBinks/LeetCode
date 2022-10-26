#include <string>
#include "animal.h"
using namespace std;

#ifndef HUNTER_H
#define HUNTER_H

class hunter : public animal {
    public:
        static int nextID;
    
        hunter(string n, int v);  // create a hunter with name n and body volume v

        string get_name();

        void set_kills(int kills);
        int get_kills();

    private:
        int kills ;               // how many kills have been recorded, initialised to 0

};

#endif