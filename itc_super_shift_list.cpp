#include "easy_list.h"

void itc_super_shift_list(vector<int> &mass, int n){
    if(n > 0){

    for(int i = 0; i< n; i++){
            itc_rshift_list(mass);
        }
    }else if(n < 0){
        for(int i = 0; i < mass.size() - n - 1; i++){
            itc_rshift_list(mass);
        }
    }
}
