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
    cout << "Input jumlah karakter yang ingin dihapus: ";
    cin >> jumlah;
    isi.erase(awal, jumlah);
    cout << "Setelah dihapus: " << isi << endl;
    return 0;
}