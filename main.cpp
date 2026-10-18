
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, sekolah;

    cout << "Masukkan nama: ";
    getline(cin, nama);

    cout << "Masukkan nama sekolah: ";
    getline(cin, sekolah);

    cout << "\n=== DATA DIRI ===" << endl;
    cout << "Nama    : " << nama << endl;
    cout << "Sekolah : " << sekolah << endl;

    return 0;
}
