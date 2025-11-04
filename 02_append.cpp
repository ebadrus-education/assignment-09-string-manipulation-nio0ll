#include <iostream>
#include <string>
using namespace std;

int main(){
    string isi, tambah, ygk;
    cout << "Input teks: ";
    getline(cin, isi);
    cout << "Input teks tambahan: ";
    getline(cin, tambah);
        cout << "Spasi atau gabung (y/gk): ";
        cin >> ygk;
        if (ygk=="y") cout << "Gabungan teks: " << isi + " " + tambah << endl;
        else if (ygk=="gk") cout << "Gabungan teks: " << isi + tambah << endl;
    return 0;
}