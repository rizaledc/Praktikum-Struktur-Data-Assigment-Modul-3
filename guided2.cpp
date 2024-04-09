#include <iostream> 
// MEMBUAT PENGURUTAN DESCENDING
using namespace std; 

// Fungsi untuk mengurutkan baris karakter menggunakan algoritma insertion sort
void insertion_sort(char arr[], int length) { 
    int i, j; 
    char tmp; 

    // Melakukan pengulangan untuk setiap elemen dalam baris
    for (i = 1; i < length; i++) { 
        j = i; 

        // Membandingkan elemen saat ini dengan elemen sebelumnya dan menukar jika diperlukan
        while (j > 0 && arr[j - 1] < arr[j]) { 
            tmp = arr[j]; 
            arr[j] = arr[j - 1]; 
            arr[j - 1] = tmp; 
            j--; 
        }//end while loop 
    }//end for loop 
}//end insertion_sort 

// Fungsi untuk mencetak isi baris
void print_array(char a[], int length) { 
    for(int i=0; i<length; i++) { 
        cout << a[i] << "\t"; 
    } 
    cout << endl; 
} 

// Fungsi utama program
int main() { 
    int length = 6;  // Panjang baris yang ditentukan
    char a[length] = {'s', 'a', 'y', 'a', 'n', 'g'};  // Inisialisasi baris karakter

    // Mencetak isi baris sebelum pengurutan
    cout << "Urutan karakter sebelum sorting: " << endl; 
    print_array(a, length); 

    // Memanggil fungsi insertion_sort untuk mengurutkan baris
    insertion_sort(a, length); 

    // Mencetak isi baris setelah pengurutan
    cout << "\nUrutan karakter setelah sorting: " << endl; 
    print_array(a, length); 
} 
