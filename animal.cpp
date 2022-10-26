#include <string>
#include "animal.h"
using namespace std;

animal::animal(string name, int volume) {
    set_name(name);
    set_volume(volume);
}

void animal::set_name(string name) {
    this->name = name;
}

void animal::set_volume(int volume) {
    this->volume = volume;
}


int animal::get_volume() {
    return volume;
}

int animal::get_animalID() {
    return animalID; 
}