#include <string>
#include "animal.h"
#include "vegie.h"
using namespace std;

int vegie::nextID = 100;

vegie::vegie(string name, int volume): animal(name,volume) { 
    animalID = nextID;
    favourite_food = "grass";
    nextID++;
}

string vegie::get_name() {
    return "Safe: " + name;
}

void vegie::set_favourite_food(string food) {
    this->favourite_food = food;
}

string vegie::get_favourite_food() {
    return favourite_food;
}