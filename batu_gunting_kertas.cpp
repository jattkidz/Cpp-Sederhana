#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int pilihanBot() {
    return rand() % 3 + 1;
}

string konversiPilihan(int pilihan) {
    switch (pilihan) {
        case 1:
            return "Batu";
        case 2:
            return "Gunting";
        case 3:
            return "Kertas";
        default:
            return "Pilihan tidak valid";
    }
}

string menentukanPemenang(int pilihanManusia, int pilihanBot) {
    if (pilihanManusia == pilihanBot) {
        return "Seimbang!";
    } else if ((pilihanManusia == 1 && pilihanBot == 2) ||
               (pilihanManusia == 2 && pilihanBot == 3) ||
               (pilihanManusia == 3 && pilihanBot == 1)) {
        return "Anda Menang!";
    } else {
        return "Bot Menang!";
    }
}

int main() {
    srand(time(0));

    cout << "Selamat datang di Game Batu-Gunting-Kertas!" << endl;

    while (true) {
        cout << "\nPilihan Anda (1:Batu, 2:Gunting, 3:Kertas, 0:Keluar): ";
        int pilihanManusia;
        cin >> pilihanManusia;

        if (pilihanManusia == 0) {
            cout << "Terima kasih sudah bermain. Sampai jumpa!" << endl;
            break;
        }

        if (pilihanManusia < 1 || pilihanManusia > 3) {
            cout << "Pilihan tidak valid. Silakan pilih lagi." << endl;
            continue;
        }

        int pilihanBotVar = pilihanBot(); // Menggunakan variabel yang berbeda dari nama fungsi
        cout << "Anda memilih: " << konversiPilihan(pilihanManusia) << endl;
        cout << "Bot memilih: " << konversiPilihan(pilihanBotVar) << endl;

        cout << menentukanPemenang(pilihanManusia, pilihanBotVar) << endl;
    }

    return 0;
}
