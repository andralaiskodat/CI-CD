#include <iostream>

using namespace std;

void tampilkanMenu() {
    cout << "==== KALKULATOR C++ Tim B ====" << endl;
    cout << "1. Penjumlahan (+)" << endl;
    cout << "2. Pengurangan (-)" << endl;
    cout << "3. Perkalian (*)" << endl;
    cout << "4. Pembagian (/)" << endl;
    cout << "5. Modulus (%)" << endl;
    cout << "0. Keluar" << endl;
    cout << "=========================" << endl;
}
//Test Problem 1
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
