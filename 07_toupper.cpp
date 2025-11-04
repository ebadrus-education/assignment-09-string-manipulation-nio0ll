#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string isi;
    int pilihan;
    do {
    cout << "\nProgram Ubah Huruf\n1. Ubah ke huruf BESAR\n2. Ubah ke huruf kecil\n3. Keluar\nPilihan: ";
    cin >> pilihan;
    cin.ignore(); 
    if (pilihan==1){
        cout << "Input isi: ";
        getline(cin, isi);
        for (int i=0;i<isi.length();i++) {
            isi[i]=toupper(isi[i]);
        }
        cout << "Hasil toupper: " << isi << endl;
    } 
    else if (pilihan==2){
        cout << "Input isi: ";
        getline(cin, isi);
        for (int i=0;i<isi.length();i++) {
            isi[i]=tolower(isi[i]);
        }
        cout << "Hasil tolower: " << isi << endl;
    } 
    else if (pilihan==3){
        cout << "Terima kasih." << endl;
    }
    else {
        cout << "Pilihan tidak valid!" << endl;
    }
    } while(pilihan!=3);
    return 0;
    }