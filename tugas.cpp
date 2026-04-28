#include <iostream>
#include <cmath>

using namespace std;

class BelahKetupat;

class LayangLayang {
private:
    float d1, d2, sisi1, sisi2;

public:
    void inputData() {
        cout << "--- Input Layang-Layang ---" << endl;
        cout << "Diagonal 1: "; cin >> d1;
        cout << "Diagonal 2: "; cin >> d2;
        cout << "Sisi 1    : "; cin >> sisi1;
        cout << "Sisi 2    : "; cin >> sisi2;
    }

    double hitungLuas() {
        return 0.5 * d1 * d2;
    }

    // Method Output untuk Luas
    void tampilkanOutput() {
        cout << "Luas Layang-Layang : " << hitungLuas() << endl;
    }

    // Deklarasi Friend Function
    friend void tampilkanKeliling(LayangLayang, BelahKetupat);
};

class BelahKetupat {
private:
    float d1, d2, sisi;

public:
    void inputData() {
        cout << "\n--- Input Belah Ketupat ---" << endl;
        cout << "Diagonal 1: "; cin >> d1;
        cout << "Diagonal 2: "; cin >> d2;
        cout << "Sisi      : "; cin >> sisi;
    }

    double hitungLuas() {
        return 0.5 * d1 * d2;
    }

    // Method Output untuk Luas
    void tampilkanOutput() {
        cout << "Luas Belah Ketupat : " << hitungLuas() << endl;
    }

    // Deklarasi Friend Function
    friend void tampilkanKeliling(LayangLayang, BelahKetupat);
};

// Definisi Friend Function untuk Keliling
void tampilkanKeliling(LayangLayang l, BelahKetupat b) {
    double kelilingLayang = 2 * (l.sisi1 + l.sisi2);
    double kelilingBelah = 4 * b.sisi;

    cout << "\n--- Hasil Keliling ---" << endl;
    cout << "Keliling Layang-Layang : " << kelilingLayang << endl;
    cout << "Keliling Belah Ketupat : " << kelilingBelah << endl;
}

int main() {
    // Membuat Object
    LayangLayang objLayang;
    BelahKetupat objBelah;

    // Menggunakan method input
    objLayang.inputData();
    objBelah.inputData();

    // Menggunakan method output masing-masing class
    cout << "\n--- Hasil Luas ---" << endl;
    objLayang.tampilkanOutput();
    objBelah.tampilkanOutput();

    // Menggunakan friend function untuk keliling
    tampilkanKeliling(objLayang, objBelah);

    return 0;
}