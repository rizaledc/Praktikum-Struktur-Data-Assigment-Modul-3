#include <iostream>

using namespace std;

// Fungsi untuk melakukan pengurutan menggunakan algoritma Selection Sort
void selection_sort(double arr[], int length) {
    for (int i = 0; i < length - 1; i++) {
        int max_index = i; // Indeks maksimum diinisialisasi dengan indeks saat ini

        // Mencari indeks nilai maksimum dari sisa larik yang belum diurutkan
        for (int j = i + 1; j < length; j++) {
            if (arr[j] > arr[max_index]) {
                max_index = j;
            }
        }

        // Menukar elemen pada indeks maksimum dengan elemen pada indeks saat ini
        double temp = arr[i];
        arr[i] = arr[max_index];
        arr[max_index] = temp;
    }
}

// Fungsi untuk mencetak IPS mahasiswa
void print_ips(double ips[], int length) {
    for (int i = 0; i < length; i++) {
        cout << ips[i] << "\t";
    }
    cout << endl;
}

int main() {
    int length = 5; // Jumlah mahasiswa
    double ips[] = {3.8, 2.9, 3.3, 4.0, 2.4}; // IPS mahasiswa

    cout << "IPS mahasiswa sebelum pengurutan: " << endl;
    print_ips(ips, length);

    // Memanggil fungsi selection_sort untuk mengurutkan IPS mahasiswa
    selection_sort(ips, length);

    cout << "\nIPS mahasiswa setelah pengurutan: " << endl;
    print_ips(ips, length);

    return 0;
}
