#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk mengurutkan nama-nama warga menggunakan algoritma Bubble Sort
void bubble_sort(string arr[], int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            // Membandingkan dua nama berturut-turut dan menukar jika perlu
            if (arr[j] > arr[j + 1]) {
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Fungsi untuk mencetak nama-nama warga
void print_names(string names[], int length) {
    for (int i = 0; i < length; i++) {
        cout << names[i] << "\t";
    }
    cout << endl;
}

int main() {
    int length = 10; // Jumlah warga
    string names[] = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"}; // Nama-nama warga

    cout << "Nama-nama warga sebelum pengurutan: " << endl;
    print_names(names, length);

    // Memanggil fungsi bubble_sort untuk mengurutkan nama-nama warga
    bubble_sort(names, length);

    cout << "\nNama-nama warga setelah pengurutan: " << endl;
    print_names(names, length);

    return 0;
}
