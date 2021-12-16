#include "easy_list.h"

void lshift(vector<int> &mass){
    if (mass.size()!= 0){
    int store = mass[0];
    for( int i = 1; i < mass.size(); i++){
        mass[i - 1] = mass[i];
    }
    mass[mass.size() - 1] = store;
}}

void itc_super_shift_list(vector<int> &mass, int n){
    if (mass.size() != 0){
    if(n > 0){
    for(int i = 0; i< (n % mass.size()); i++){
            itc_rshift_list(mass);
        }
    }else if(n < 0){
        n = n * (-1);
        for(int i = 0; i < (n % mass.size()); i++){
            lshift(mass);
        }
    }}
}
