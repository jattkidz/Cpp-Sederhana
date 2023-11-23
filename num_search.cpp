#include <iostream>

using namespace std;

int findIndex(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;  // return -1 jika target tidak ditemukan dalam array
}

int main() {
    int numArrays;

    cout << "Masukkan jumlah array: ";
    cin >> numArrays;

    // Validasi jumlah array
    if (numArrays < 2) {
        cerr << "Error: Jumlah array harus minimal 2.\n";
        return 1;
    }

    int** arrays = new int*[numArrays];
    int* sizes = new int[numArrays];

    // Memasukkan elemen-elemen ke dalam setiap array
    for (int i = 0; i < numArrays; ++i) {
        cout << "Masukkan jumlah elemen untuk array ke-" << (i + 1) << ": ";
        cin >> sizes[i];

        arrays[i] = new int[sizes[i]];

        cout << "Masukkan elemen-elemen untuk array ke-" << (i + 1) << ":\n";
        for (int j = 0; j < sizes[i]; ++j) {
            cout << "Element " << (j + 1) << ": ";
            cin >> arrays[i][j];
        }
    }

    int target;

    cout << "Masukkan nilai yang dicari: ";
    cin >> target;

    // Mencari indeks dalam setiap array
    for (int i = 0; i < numArrays; ++i) {
        int index = findIndex(arrays[i], sizes[i], target);

        if (index != -1) {
            cout << "Nilai " << target << " ditemukan pada indeks " << index
                      << " dalam array ke-" << (i + 1) << ".\n";
        } else {
            cout << "Nilai " << target << " tidak ditemukan dalam array ke-" << (i + 1) << ".\n";
        }
    }

    // Membebaskan memori yang dialokasikan untuk array dan sizes
    for (int i = 0; i < numArrays; ++i) {
        delete[] arrays[i];
    }
    delete[] arrays;
    delete[] sizes;

    return 0;
}
