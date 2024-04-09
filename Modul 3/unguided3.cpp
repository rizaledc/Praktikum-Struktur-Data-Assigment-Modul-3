#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void insertionSort(vector<char> &arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        char key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    cout << "Masukkan panjang baris: ";
    cin >> n;

    vector<char> characters(n);

    // Meminta pengguna untuk memasukkan n karakter
    for (int i = 0; i < n; ++i) {
        cout << "Masukkan karakter atau angka ke-" << i + 1 << ": ";
        cin >> characters[i];
    }

    // Menampilkan isi baris sebelum pengurutan
    cout << "\nIsi baris sebelum diurutkan: ";
    for (char c : characters) {
        cout << c << " ";
    }
    cout << endl;

    // Mengurutkan karakter menggunakan Insertion Sort secara ascending (kecil ke besar)
    insertionSort(characters);

    // Menampilkan hasil pengurutan secara ascending (kecil ke besar)
    cout << "\nHasil pengurutan secara ascending (kecil ke besar): ";
    for (char c : characters) {
        cout << c << " ";
    }

    // Mengurutkan karakter menggunakan Insertion Sort secara descending (besar ke kecil)
    insertionSort(characters);
    reverse(characters.begin(), characters.end());

    // Menampilkan hasil pengurutan secara descending (besar ke kecil)
    cout << "\nHasil pengurutan secara descending (besar ke kecil): ";
    for (char c : characters) {
        cout << c << " ";
    }

    cout << endl;

    return 0;
}