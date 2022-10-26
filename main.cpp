#include <string>
#include <iostream>
#include "hunter.h"
#include "vegie.h"
#include "sort_by_animalID.h"
#include "zoo.h"
using namespace std;

int main() {

    zoo monarto("Monarto",5,6);

    sort_by_animalID::sort(monarto.get_animals(), 11);

    cout << monarto.get_animals()[0]->get_name() << endl;
    cout << monarto.get_animals()[7]->get_name() << endl;

    return 0;
}