#include <iostream> 
// MEMBUAT PENGURUTAN ASCENDING
using namespace std; 

// Fungsi untuk mengurutkan baris menggunakan algoritma bubble sort
void bubble_sort(double arr[], int length){ 
    bool not_sorted = true;  // Variabel boolean untuk menandai apakah baris belum diurutkan
    int j=0;  // Variabel untuk menghitung iterasi
    double tmp;  // Variabel sementara untuk pertukaran nilai

    // Melakukan pengulangan sampai baris diurutkan
    while (not_sorted){ 
        not_sorted = false;  // Dianggap baris sudah terurut kecuali ada pertukaran yang terjadi
        j++;  // Menambah iterasi

        // Melakukan pengulangan untuk satu iterasi
        for (int i = 0; i < length - j; i++){ 
            // Jika elemen saat ini lebih besar dari elemen berikutnya, lakukan pertukaran
            if (arr[i] > arr[i + 1]) { 
                tmp = arr[i]; 
                arr[i] = arr[i + 1]; 
                arr[i + 1] = tmp; 
                not_sorted = true;  // Tandai bahwa pertukaran telah terjadi, sehingga iterasi berikutnya diperlukan
            }//end if 
        }//end for loop 
    }//end while loop 
}//end bubble_sort 

// Fungsi untuk mencetak isi baris
void print_array(double a[], int length) { 
    for(int i=0; i<length; i++) { 
        cout << a[i] << "\t"; 
    } 
    cout << endl; 
} 

// Fungsi utama program
int main() { 
    int length = 5;  // Panjang baris
    double a[] = {18.1, 15.3, 5.2, 36.21, 101.5};  // Inisialisasi baris bilangan double

    // Mencetak isi baris sebelum pengurutan
    cout << "Urutan bilangan sebelum sorting: " << endl; 
    print_array(a, length); 

    // Memanggil fungsi bubble_sort untuk mengurutkan baris
    bubble_sort(a, length); 

    // Mencetak isi baris setelah pengurutan
    cout << "\nUrutan bilangan setelah sorting: " << endl; 
    print_array(a, length); 
} 
