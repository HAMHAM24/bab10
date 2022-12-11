#include <iostream>
#include<algorithm>
using namespace std;
string kata;

void pembalikata(){
    reverse(kata.begin(), kata.end());
    cout << "Kata Setelah Dibalik : " << kata << endl;
}

int main(){
    cout << "Masukkan Kata : ";
    getline(cin, kata);
    cout << endl;
    cout << "Kata Sebelum Dibalik : " << kata << endl;
    pembalikata();
}