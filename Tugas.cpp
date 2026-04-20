#include <iostream>
using namespace std;

class Barang{
public :
    string nama;
    int jumlah;
    string TanggalProduksi;
    string kategori;

    void tampilkanSpesifikasi(){
        cout << "Nama           : " << nama << endl;
        cout << "Jumlah         : " << jumlah << endl;
        cout << "Kategori       : " << kategori << endl;
        cout << "Tanggal Produksi : " << TanggalProduksi << endl;
    }
};

int main(){
    Barang elektronik;
    elektronik.nama = "Lenovo";
    elektronik.jumlah = 100;
    elektronik.kategori = "elektronik";
    elektronik.TanggalProduksi = "10-10-2012";

    Barang nonElektronik;
    nonElektronik.nama = "Pensil";
    nonElektronik.jumlah = 100;
    nonElektronik.kategori = "Alat Tulis";
    nonElektronik.TanggalProduksi = "11-11-2011" ;

    elektronik.tampilkanSpesifikasi();
    nonElektronik.tampilkanSpesifikasi();
}