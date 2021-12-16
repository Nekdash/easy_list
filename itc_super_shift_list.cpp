#include "easy_list.h"

void itc_super_shift_list(vector <int> &mass, int n){
    n %= mass.size();
    int temp;
    long long ch;
    for(int i = 0; i < mass.size(); i++){
        ch = i - n;
        if(ch < 0){
            ch = mass.size() + ch;
        }else if(ch > mass.size() -1){
            ch = ch  - mass.size();
        }
        temp = mass[i];
        mass[i] = mass[ch];
        mass[ch] = temp;
    }
}
