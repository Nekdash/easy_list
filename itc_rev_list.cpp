#include "easy_list.h"

void itc_rev_list(vector <int> &mass){
    int temp;
    for(int i = 0; i <= mass.size() / 2 - 1 + (mass.size()%2); i++){
        temp = mass[i];
        mass[i] = mass[mass.size() - 1 - i];
        mass[mass.size() - 1 - i] = temp;
    }
}
