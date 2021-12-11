#include <iostream>
#include "easy_list.h"
using namespace std;

void enter_vector(vector<int> &mass, int len){
    int a;
    for(int i = 0; i < len; i++){
        cin >> a;
        mass.push_back(a);
    }
}
void print_vector(const vector<int> &mass){
    for(int i = 0 ; i < mass.size(); i++){
        cout << mass[i] << endl;
    }
}


int main()
{
    int len1, len2;
    cout << "Enter len1:" << endl;
    cin >> len1;
    vector<int> mass;
    vector<int> mass2;
    enter_vector(mass, len1);
    //itc_even_index_list(mass, mass2);
    //itc_even_parts_list(mass, mass2);
    itc_rev_list(mass);
    print_vector(mass2);

    return 0;
}
