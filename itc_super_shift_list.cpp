#include "easy_list.h"

void lshift(vector<int> &mass){
    

}

void itc_super_shift_list(vector<int> &mass, int n){
    if(n > 0){

    for(int i = 0; i< (n % mass.size()); i++){
            itc_rshift_list(mass);
        }
    }else if(n < 0){
        n = n * (-1);
        for(int i = 0; i < (n % mass.size()); i++){
            lshift(mass);
        }
    }
}
