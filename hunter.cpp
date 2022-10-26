#include <string>
#include "hunter.h"
using namespace std;

int hunter::nextID = 1000;
    
hunter::hunter(string name, int volume): animal(name,volume) { 
    animalID = nextID;
    kills = 0;
    nextID++;
}

string hunter::get_name() {
    return "Hunter: " + name;
}


int hunter::get_kills() {
    return kills;
}

void hunter::set_kills(int kills) {
    this->kills = kills;
}