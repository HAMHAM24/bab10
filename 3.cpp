#include <iostream>
using namespace std;

char katabaru;
char kata[100] = {};
int jumlah;

// Program Untuk Konversi Char Kata Pertama Menjadi Kapital
void kataKapital(){
    katabaru = kata[0]-32;
    cout << "Kata baru        : ";
    cout << katabaru;
    for(int i=1; i<=sizeof(kata); i++){
        cout << kata[i];
    }
    cout << endl;
}

int main(){
    cout << endl;
    cout<<"Masukkan kata    : ";
    fgets(kata, sizeof(kata), stdin);
    cout << endl;
    kataKapital();
}