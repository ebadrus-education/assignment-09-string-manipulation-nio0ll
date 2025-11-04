#include <iostream>
#include <string>
using namespace std;

int main(){
    string isi;
    int awal, jumlah;
    cout << "Input teks: ";
    getline(cin, isi);
    cout << "Input indeks awal: ";
    cin >> awal;
    cout << "Input jumlah karakter: ";
    cin >> jumlah;
    cout << "Substring: " << isi.substr(awal, jumlah) << endl;
    return 0;
}