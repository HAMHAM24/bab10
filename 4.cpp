#include <iostream>
using namespace std;
string kata;
int jumlah;

void penghitung(){
    jumlah = kata.length();
    cout << jumlah << endl;
}

int main(){
    cout << "\nMasukkan Kata / kalimat               : ";
    getline(cin, kata);
    cout << "Jumlah karakter dari kalimat tersebut : ";
    penghitung();
    cout << endl;

}