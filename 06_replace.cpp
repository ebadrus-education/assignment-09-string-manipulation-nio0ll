#include <iostream>
#include <string>
using namespace std;

int main(){
    string isi, ganti;
    int awal, jumlah;
    cout << "Input teks: ";
    getline(cin, isi);
    cout << "Input indeks awal: ";
    cin >> awal;
    cout << "Input jumlah karakter yang ingin diganti: ";
    cin >> jumlah;
    cin.ignore();
    cout << "Input teks pengganti: ";
    getline(cin, ganti);
    isi.replace(awal, jumlah, ganti);
    cout << "Setelah diganti: " << isi << endl;
    return 0;
}