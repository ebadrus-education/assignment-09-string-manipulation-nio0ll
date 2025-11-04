#include <iostream>
#include <string>
using namespace std;

int main(){
    string isi;
    cout << "Input teks: ";
    getline(cin, isi);
    cout << "Jumlah karakter pada teks tersebut adalah " << isi.length() << endl;
    return 0;
}