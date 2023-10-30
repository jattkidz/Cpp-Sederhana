#include <iostream>
using namespace std;

int main() {
    char oper;
    double bilangan1, bilangan2;

    do {
        cout << "Masukkan operator (+, -, *, /) atau 'q' untuk keluar: ";
        cin >> oper;

        if (oper == 'q') {
            cout << "Program berakhir. Selamat tinggal!";
            break;
        }

        cout << "Masukkan bilangan pertama: ";
        cin >> bilangan1;
        cout << "Masukkan bilangan kedua: ";
        cin >> bilangan2;

        switch (oper) {
            case '+':
                cout << "Hasil penjumlahan: " << bilangan1 + bilangan2;
                break;
            case '-':
                cout << "Hasil pengurangan: " << bilangan1 - bilangan2;
                break;
            case '*':
                cout << "Hasil perkalian: " << bilangan1 * bilangan2;
                break;
            case '/':
                if (bilangan2 != 0) {
                    cout << "Hasil pembagian: " << bilangan1 / bilangan2;
                } else {
                    cout << "Tidak dapat membagi dengan nol.";
                }
                break;
            default:
                cout << "Operator tidak valid.";
                break;
        }
        cout << endl;
    } while (true);

    return 0;
}