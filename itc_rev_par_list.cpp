#include "easy_list.h"

void itc_rev_par_list(vector <int> &mass){
    if(mass.size() != 0){
      int temp;
    for(int i = 0; i < mass.size() - 1; i+=2){
        temp = mass[i];
        mass[i] = mass[i + 1];
        mass[i + 1] = temp;
    }

    }

}
