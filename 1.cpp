#include <iostream>
using namespace std;

int main(){
    int pilihan;
    string hari[100] = {"Minggu", "Senin", "Selasa", "Rabu", "Kamis", "Jum'at", "Sabtu"};
    string *minggu, *senin, *selasa, *rabu, *kamis, *jumat, *sabtu;
    minggu = &hari[0];
    senin = &hari[1];
    selasa = &hari[2];
    rabu = &hari[3];
    kamis = &hari[4];
    jumat = &hari[5];
    sabtu = &hari[6];


    cout << "\nMasukkan Pilihan Hari (1-7) : ";
    cin >> pilihan;
    cout << endl;
    if(pilihan == 1){
        cout << "Hari " << *minggu << "\n" << endl;
    }else if(pilihan == 2){
        cout << "Hari " << *senin << "\n" << endl;
    }else if(pilihan == 3){
        cout << "Hari " << *selasa << "\n" << endl;
    }else if(pilihan == 4){
        cout << "Hari " << *rabu << "\n" << endl;
    }else if(pilihan == 5){
        cout << "Hari " << *kamis << "\n" << endl;
    }else if(pilihan == 6){
        cout << "Hari " << *jumat << "\n" << endl;
    }else if(pilihan == 7){
        cout << "Hari " << *sabtu << "\n" << endl;
    }else {
        cout << "Pilihan Hari Salah...........\n" << endl;
    }
    return 0;
}