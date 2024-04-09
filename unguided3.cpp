#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

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

    // Sorting karakter secara ascending
    vector<char> ascending = characters;
    sort(ascending.begin(), ascending.end());

    // Sorting karakter secara descending
    vector<char> descending = characters;
    sort(descending.rbegin(), descending.rend());

    // Menampilkan hasil sorting
    cout << "\nHasil pengurutan secara ascending: ";
    for (char c : ascending) {
        cout << c << " ";
    }

    cout << "\nHasil pengurutan secara descending: ";
    for (char c : descending) {
        cout << c << " ";
    }

    cout << endl;

    return 0;
}
