#include "animal.h"
#include "sort_by_name.h"

void sort_by_name::sort(animal **animals, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            if (animals[j]->get_name() > animals[j+1]->get_name()) {
                swap(animals[j], animals[j+1]);
            }
        }
    }
}
