#include <iostream>
using namespace std;

class Barang{
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void tampilData(){
        cout << "Nama Barang : " << nama << endl;
        cout << "Jumlah : " << jumlah << endl;
        cout << "Kategori : " << kategori << endl;
        cout << "Tanggal Produksi : " << tanggalProduksi << endl;
        cout << "------------------------" << endl;
    }
};

int main(){
    Barang elektronik;
    Barang nonElektronik;

    elektronik.nama = "HP";
    elektronik.jumlah = 5;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "2025";

    nonElektronik.nama = "Meja";
    nonElektronik.jumlah = 3;
    nonElektronik.kategori = "Non Elektronik";
    nonElektronik.tanggalProduksi = "2024";

    elektronik.tampilData();
    nonElektronik.tampilData();

    return 0;
}