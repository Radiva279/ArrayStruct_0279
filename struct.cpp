#include <iostream>
using namespace std;

struct mahasiswa
{
    string nim;
    string nama;
    string alamat;
};

int main(){
    mahasiswa mhs;

    mhs.nim = "20240140279";
    mhs.nama = "Radiva Galih";
    mhs.alamat = "Banguntapan"; 

    cout << "Masukkan NIM = ";
    cin >> mhs.nim;
    cout << "Masukkan NAMA = ";
    cin >> mhs.nama;
    cout << "Masukkan Alamat = ";
    cin >> mhs.alamat;
}