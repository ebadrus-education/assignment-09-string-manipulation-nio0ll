#include <iostream>
#include <string>
using namespace std;

int main(){
    string isi, cari;
    cout << "Input teks: ";
    getline(cin, isi);
    cout << "Input teks yang di cari: ";
    getline(cin, cari);
    size_t indeks= isi.find(cari);
    if (indeks!=string::npos) cout << "Ditemukan di indeks ke-" << indeks << endl;
    else cout << "Tidak ditemukan." << endl;
    return 0;
}