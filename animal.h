#include <string>
using namespace std;

#ifndef ANIMAL_H
#define ANIMAL_H

class animal {
    public:
        animal();
        
        animal(string n, int v);    // creates an animal with name n and body volume v.
                                    // animals are allocated a unique ID on creation

        virtual string get_name() = 0;
        void set_name(string name);
        
        int get_animalID();
        void set_animalID();

        int get_volume();
        void set_volume(int volume); 

    protected:
        int animalID;               // the animal's unique ID
        string name;                // the animal's name
        int volume;                 // the volume of the animal's body
};

#endif