#include <iostream>
using namespace std;

// Fungsi untuk menghitung gaji pokok
int pokok(int jamKerja) {
    int gajiPokokPerJam = 7500;
    if (jamKerja > 8) {
        return 8 * gajiPokokPerJam;  // Maksimal gaji pokok untuk 8 jam
    } else {
        return jamKerja * gajiPokokPerJam;
    }
}

// Fungsi untuk menghitung gaji lembur
int lembur(int jamKerja) {
    int gajiPokokPerJam = 7500;
    if (jamKerja > 8) {
        int jamLembur = jamKerja - 8;
        return jamLembur * 1.5 * gajiPokokPerJam;
    } else {
        return 0;  // Tidak ada lembur jika jam kerja <= 8
    }
}

// Fungsi untuk menghitung uang makan
int makan(int jamKerja) {
    if (jamKerja >= 9) {
        return 10000;
    } else {
        return 0;
    }
}

// Fungsi untuk menghitung uang transport
int transport(int jamKerja) {
    if (jamKerja >= 10) {
        return 13000;
    } else {
        return 0;
    }
}

// Fungsi utama
int main() {
    string NIP, nama;
    int jamKerja;

    // Input NIP, nama, dan jumlah jam kerja
    cout << "Masukkan NIP: ";
    cin >> NIP;
    cout << "Masukkan Nama: ";
    cin.ignore(); // Membersihkan buffer input
    getline(cin, nama);
    cout << "Masukkan jumlah jam kerja: ";
    cin >> jamKerja;

    // Hitung gaji pokok, lembur, uang makan, dan transport
    int gajiPokok = pokok(jamKerja);
    int gajiLembur = lembur(jamKerja);
    int uangMakan = makan(jamKerja);
    int uangTransport = transport(jamKerja);

    // Output hasil perhitungan
    cout << "\nNIP: " << NIP << endl;
    cout << "Nama: " << nama << endl;
    cout << "Gaji Pokok: Rp. " << gajiPokok << endl;
    cout << "Gaji Lembur: Rp. " << gajiLembur << endl;
    cout << "Uang Makan: Rp. " << uangMakan << endl;
    cout << "Uang Transport: Rp. " << uangTransport << endl;

    return 0;
}


