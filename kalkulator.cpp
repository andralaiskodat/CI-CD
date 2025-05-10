#include <iostream>
#include <cmath>    // Untuk pow dan sqrt
using namespace std;

void tampilkanMenu() {
    cout << "==== KALKULATOR C++ ====" << endl;
    cout << "1. Penjumlahan (+)" << endl;
    cout << "2. Pengurangan (-)" << endl;
    cout << "3. Perkalian (*)" << endl;
    cout << "4. Pembagian (/)" << endl;
    cout << "5. Modulus (%)" << endl;
    cout << "6. Pangkat (x^y)" << endl;
    cout << "7. Akar Kuadrat (√x)" << endl;
    cout << "0. Keluar" << endl;
    cout << "=========================" << endl;
}

void kalkulator() {
    int pilihan;
    double a, b;

    do {
        tampilkanMenu();
        cout << "Pilih operasi (0-7): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan dua angka: ";
                cin >> a >> b;
                cout << "Hasil: " << a + b << endl;
                break;
            case 2:
                cout << "Masukkan dua angka: ";
                cin >> a >> b;
                cout << "Hasil: " << a - b << endl;
                break;
            case 3:
                cout << "Masukkan dua angka: ";
                cin >> a >> b;
                cout << "Hasil: " << a * b << endl;
                break;
            case 4:
                cout << "Masukkan dua angka: ";
                cin >> a >> b;
                if (b == 0)
                    cout << "Error: Pembagian dengan nol!" << endl;
                else
                    cout << "Hasil: " << a / b << endl;
                break;
            case 5:
                int x, y;
                cout << "Masukkan dua angka (bilangan bulat): ";
                cin >> x >> y;
                if (y == 0)
                    cout << "Error: Modulus dengan nol!" << endl;
                else
                    cout << "Hasil: " << x % y << endl;
                break;
            case 6:
                cout << "Masukkan basis dan eksponen: ";
                cin >> a >> b;
                cout << "Hasil: " << pow(a, b) << endl;
                break;
            case 7:
                cout << "Masukkan angka: ";
                cin >> a;
                if (a < 0)
                    cout << "Error: Tidak bisa menghitung akar dari bilangan negatif!" << endl;
                else
                    cout << "Hasil: " << sqrt(a) << endl;
                break;
            case 0:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }

        cout << endl;
    } while (pilihan != 0);
}

int main() {
    kalkulator();
    return 0;
}
