#include "easy_list.h"

void itc_even_index_list (const vector <int> &mass, vector <int> &mass2){
    if(mass.size() != 0){
    for(int i = 0; i < mass.size(); i+=2){
        mass2.push_back(mass[i]);
    }}

}
