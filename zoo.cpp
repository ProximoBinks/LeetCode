#include <string>
#include "hunter.h"
#include "vegie.h"
#include "zoo.h"
using namespace std;

    zoo::zoo(string name,int cows,int lions) {
        this->name = name;

        int animal_count = cows+lions;
        animals = new animal*[animal_count];

        for (int i = 0; i < cows; i++) {
            animals[i] = new vegie("Diasy",100);
        }

        for (int i = cows; i < cows+lions; i++) {
            animals[i] = new hunter("Clarence",50);
        }

    }

    string zoo::get_name() {return name;}
    int zoo::get_number_of_animals() {return number_of_animals;}
    animal** zoo::get_animals() {return animals;}