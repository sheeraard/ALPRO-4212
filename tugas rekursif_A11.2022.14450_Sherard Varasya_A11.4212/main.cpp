#include <iostream>
//A11.2022.14450 SHERARD  VARASYA A11.4212

using namespace std;


int penjumlahan(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return penjumlahan(a + 1, b - 1);
    }
}


int pengurangan(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return pengurangan(a - 1, b - 1);
    }
}


int perkalian(int a, int b) {
    if (b == 0) {
        return 0;
    } else {
        return a + perkalian(a, b - 1);
    }
}


int pembagian(int a, int b) {
    if (a < b) {
        return 0;
    } else {
        return 1 + pembagian(a - b, b);
    }
}


int pangkat(int a, int b) {
    if (b == 0) {
        return 1;
    } else {
        return a * pangkat(a, b - 1);
    }
}

int main() {
    //INPUT
    int a, b;
    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;

    //HASIL
    cout << "Penjumlahan: " << penjumlahan(a, b) << endl;
    cout << "Pengurangan: " << pengurangan(a, b) << endl;
    cout << "Perkalian: " << perkalian(a, b) << endl;
    cout << "Pembagian: " << pembagian(a, b) << endl;
    cout << "Pangkat: " << pangkat(a, b) << endl;

    return 0;
}
