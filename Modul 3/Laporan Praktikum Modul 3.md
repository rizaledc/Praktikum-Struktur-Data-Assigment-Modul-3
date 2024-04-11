# <h1 align="center">Laporan Praktikum Modul Sorting</h1>
<p align="center">Rizal Wahyu Pratama</p>
<p align="center">2311110029</p>

## Tujuan Praktikum

Dengan adanya praktikum ini, penulis telah menargetkan tujuan bahwa mahasiswa dapat memahami dan menerapkan beberapa algoritma sorting dalam menyelesaikan berbagai studi kasus.
   
## Dasar Teori

Dalam beberapa konteks pemograman, algortima merupakan spesefikasi urutan langkah untuk melakukan pekerjaan tertentu(Panny Agustia). Penerapan algoritma ini sangat penting di dunia komputasi baik dengan data besar maupun dengan data kecil. Dengan menggunakan algoritma yang tepat, seseorang dapat mengolah data dengan efisien dan efektif. Dalam konteks sorting, algoritma ini dapat digunakan untuk mengurutkan nilai-nilai dari array sesuai urutan yang diinginkan.

Kata sorting dapat didefinisikan sebagai pengurutan sejumlah data berdasarkan nilai kunci tertentu. Pengurutan dapat dilakukan dari nilai terkecil ke nilai terbesar 
(ascending) atau sebaliknya (descending) (Wisudawan,2022). Tujuan dari adanya sorting ini untuk mengatur data sehingga seseorang dapat mengakses datanya dengan lebih mudah dan efisien dalam memahami maupun mengolah data. Dalam pemrograman terdapat beberapa algoritma sorting yang umum digunakan diantaranya: Bubble sort, Selection sort, Insertion Sort, Merge Sort, dan Quick sort. Dalam laporan ini, penulis akan menjelaskan 3 algoritma sorting yaitu Bubble sort, Selection sort, dan Insertion sort. 

### 1. Bubble Sort

Bubble sort merupakan algoritma sederhana dimana setiap elemen-elemennya dibandingkan secara berpasangan lalu ditukarkan apabila posisi elemennya tidak berada pada urutan yang benar. Proses akan berakhir ketika semua elemen telah berada pada posisi yang benar. 

Contoh dalam kehidupan sehari-hari:
Bayangkan terdapat tumpukan kartu yang diacak urutannya. Dengan menggunakan bubble sort, kita akan membandingkan kartu-kartu yang berpasangan, dimana ketika nomor kartu berikutnya lebih kecil dari nomor kartu sebelumnya maka posisi kartu akan ditukar. Proses ini akan terus berlanjut hingga urutan kartu benar.

Pseudocode:

```C++
procedure BubbleSort(A: daftar item yang dapat diurutkan)
    n = panjang(A)
    ulangi
        ditukar = false
        untuk i = 1 sampai n-1 lakukan
            jika A[i] > A[i+1] maka
                tukar(A[i], A[i+1])
                ditukar = true
            akhir jika
        end untuk
        n = n - 1
    sampai tidak ada yang ditukar
end procedure
```

Contoh code sederhana:

```C++
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Tukar elemen
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {18, 04, 05, 25, 09};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    cout << "Array yang diurutkan menggunakan Bubble Sort: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
```

### 2. Selection Sort

Selection Sort adalah suatu Algoritma pengurutan yang membandingkan elemen yang sekarang dengan elemen berikutnya sampai ke elemen yang terakhir. Jika ditemukan elemen lain yang lebih kecil dari elemen sekarang maka dicatat posisisnya dan langsung ditukar. Konsep Selection Sort adalah mencari atau memilih nilai terkecil ataupun nilai terbesar dan menukarnya dengan elemen paling awal pada paling kiri pada setiap tahap, proses akan terus berjalan hingga data akan mengahasilkan data yang terurut(F.E Saputro dan F. N. Khasanah, 2019).

Contoh dalam kehidupan sehari-hari:
Dalam tumpukan koin dengan nilai yang berbeda-beda lalu kita ingin mengurutkan nilai dari setiap koin menggunakan selection sort. Kita dapat mengambil koin dengan nilai terkecil untuk diletakkan pada posisi paling bawah, kemudian kita dapat mencari nilai koin yang lebih kecil lagi dari sisa tumpukan lalu meletakkannya pada posisi setelahnya (kedua). Ulagi proses ini hingga urutannya sesuai.

Pseudocode:

```C++
procedure SelectionSort(A: daftar item yang dapat diurutkan)
    n = panjang(A)
    untuk i = 1 sampai n-1 lakukan
        indeks_min = i
        untuk j = i+1 sampai n lakukan
            jika A[j] < A[indeks_min] maka
                indeks_min = j
            akhir jika
        end untuk
        jika indeks_min != i maka
            tukar(A[i], A[indeks_min])
        akhir jika
    end untuk
end procedure
```

Contoh code sederhana:

```C++
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min_index = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        // Tukar elemen
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main() {
    int arr[] = {18, 04, 05, 25, 09};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Array yang diurutkan menggunakan Selection Sort: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
```

### Insertion Sort

Insertion Sort adalah adalah sebuah algoritma pengurutan yang membandingkan dua elemen data pertama, mengurutkannya, kemudian mengecek elemen data berikutnya satu persatu dan membandingkannya dengan elemen data yang telah diurutkan(M. Arawin, 2019). Algoritma ini akan memilih elemen dari bagian yang belum diurutkan lalu disisipkan ke dalam bagian yang diurutkan dalam posisi yang tepat. Elemen-elemen yang nilainya lebih besar akan bergeser ke kanan. Langkah akan terus berulang hingga semua elemen array terurutkan dengan benar.

Contoh dalam kehidupan sehari-hari:
Kita memiliki tumpukan buku dengan judul yang berbeda-beda. Saat menggunakan insertion sort, kita akan mengambil buku satu persatu lalu menyisipkannya ke dalam tumpukan buku yang telah diurutkan sesuai dengan urutan judul buku.

Pseudocode:

```C++
procedure InsertionSort(A: daftar item yang dapat diurutkan)
    n = panjang(A)
    untuk i = 1 sampai n-1 lakukan
        kunci = A[i]
        j = i - 1
        selama j >= 0 dan A[j] > kunci lakukan
            A[j + 1] = A[j]
            j = j - 1
        akhir selama
        A[j + 1] = kunci
    end untuk
end procedure
```

Contoh code sederhana:

```C++
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    cout << "Array yang diurutkan menggunakan Insertion Sort: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
```


Pemilihan algoritma yang baik, benar, dan tepat sangat diperlukan dalam membuat suatu kode program. Pemilihan jenis algoritma ini akan disesuaikan dengan kebutuhan aplikasi serta data yang dimiliki. Semua jenis algoritma sorting ini memiliki keunggulan dan kekurangannya masing-masing sehingga perlu disesuaikan dengan kebutuhan.

## Guided 

### 1. Guided 1

#### Mengurutkan secara ascending untuk data numerik dengan tipe double/float menggunakan algoritma bubble sort.

```C++
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
```

**Penjelasan:**

#### Bagian 1

```C++
#include <iostream>
using namespace std;
```

Library iostream digunakan untuk menjalankan operasi input dan output pada program. Lalu namespace std dipanggil agar saat penulisan fungsi tidak perlu ditambahkan std lagi.

#### Bagian 2

```C++
void bubble_sort(double arr[], int length){
    bool not_sorted = true;
    int j=0;
    double tmp;
    while (not_sorted){
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i++){
            if (arr[i] > arr[i + 1]) { 
                tmp = arr[i]; 
                arr[i] = arr[i + 1]; 
                arr[i + 1] = tmp; 
                not_sorted = true;
            }
        }
    }
}
```

Pada kode di atas menjelaskan bahwa jalan kode akan menggunakan algoritma Bubble sort dengan mengurutkan data dari kecil ke besar(ascending). Dimana variabel **not_sorted** digunakan untuk memberitahu array yang ada apakah sudah terurut atau belum. Ketika semua elemen pada **not_sorted** sudah terurut maka akan bernilai true sehingga perulangan **j** bernilai 0 atau stop, ketika masih bernilai false atau belum terurut maka j akan terus menginterasi hingga bernilai benar.

#### Bagian 3

```C++
void print_array(double a[], int length) { 
    for(int i=0; i<length; i++) { 
        cout << a[i] << "\t"; 
    } 
    cout << endl; 
}
```

Pada kode ini, kode akan mencetak isi dari arry ke dalam terminal. Pada kode di atas menggunakan for sebagai looping hingga semua elemen tercetak pada terminal.

#### Bagian 4

```C++
int main() { 
    int length = 5; 
    double a[] = {18.1, 15.3, 5.2, 36.21, 101.5}; 

    cout << "Urutan bilangan sebelum sorting: " << endl; 
    print_array(a, length); 

    bubble_sort(a, length); 

    cout << "\nUrutan bilangan setelah sorting: " << endl; 
    print_array(a, length); 
}
```

Pada kode ini kita mengetahui bahwa ini merupakan fungsi inti atau fungsi main yang merupakan fungsi pertama kali yang akan dieksekusi. Pada cout pertama akan mencetak array yang belum di sorting, lalu pada cout berikutnya akan mencetak array yang telah disorting karena sebelumnya telah memanggil **bubble_sort(a, length)**.

#### Output :

```C++
Urutan bilangan sebelum sorting: 
18.1    15.3    5.2     36.21   101.5

Urutan bilangan setelah sorting:
5.2     15.3    18.1    36.21   101.5
```

**Penjelasan:**

Dengan hasil output kodingan di atas, kita mengetahui bahwa hasil dari cout pertama merupakan urutan bilangan sebelum di sorting lalu pada cout kedua merupakan urutan bilangan setelah disorting. Pada output kodingan ini bernilai benar karena urutan sudah secara ascending.

#### Full Code Screenshot

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-3/blob/main/Modul%203/Screenshot%20Kode%20dan%20Output/Guided1.png" alt="Alt Text">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-3/blob/main/Modul%203/Screenshot%20Kode%20dan%20Output/OutGuid1.png" alt="Alt Text">
</p>

### 2. Guided 2
#### Mengurutkan karakter secara descending menggunakan algoritma insertion sort.

```C++
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
```

**Penjelasan:**

#### Bagian 1

```C++
#include <iostream>
using namespace std;
```

Library iostream digunakan untuk menjalankan operasi input dan output pada program. Lalu namespace std dipanggil agar saat penulisan fungsi tidak perlu ditambahkan std lagi.

#### Bagian 2

```C++
void insertion_sort(char arr[], int length) { 
    int i, j; 
    char tmp; 

    for (i = 1; i < length; i++) { 
        j = i; 
        while (j > 0 && arr[j - 1] < arr[j]) { 
            tmp = arr[j]; 
            arr[j] = arr[j - 1]; 
            arr[j - 1] = tmp; 
            j--; 
        }
    }
}
```

Kode di atas akan menjelakankan operasi algoritma insertion sort untuk mengurutkan seluruh elemen dari array yang berisi karakter secara descending (besar ke kecil). Dimana terdapat dua jenis variabel yaitu **i** dan **j** yang dapat digunakan untuk indeks dalam setiap iterasi atau perulangan. Ketika nilai **i = 1** lebih kecil dari panjang array maka i akan terus bertambah sehingga mencapai panjang array yang ditentukan. Ketika **i** = **j** maka perulangan while akan dijalankan untuk membandingkan elemen yang saat itu dengan elemen sebelumnya.

#### Bagian 3

```C++
 void print_array(char a[], int length) { 
    for(int i=0; i<length; i++) { 
        cout << a[i] << "\t"; 
    } 
    cout << endl; 
}   
```

Kode di atas digunakan untuk mencetak isi dari array ke terminal dengan menggunakan loop for. Operasinya masih sama menggunakan variabel **i**.

#### Bagian 4

```C++
int main() { 
    int length = 6; 
    char a[length] = {'s', 'a', 'y', 'a', 'n', 'g'}; 

    cout << "Urutan karakter sebelum sorting: " << endl; 
    print_array(a, length); 

    insertion_sort(a, length); 

    cout << "\nUrutan karakter setelah sorting: " << endl; 
    print_array(a, length); 
}
```

Pada kode ini kita mengetahui bahwa ini merupakan fungsi inti atau fungsi main yang merupakan fungsi pertama kali yang akan dieksekusi. Pada cout pertama akan mencetak array yang belum di sorting, lalu pada cout berikutnya akan mencetak array yang telah disorting karena sebelumnya telah memanggil **insertion_sort(a, length)**.

#### Output:

```C++
Urutan karakter sebelum sorting: 
s       a       y       a       n       g

Urutan karakter setelah sorting:
y       s       n       g       a       a
```

**Penjelasan:**

Dengan hasil output kodingan di atas, kita mengetahui bahwa hasil dari cout pertama merupakan urutan bilangan sebelum di sorting lalu pada cout kedua merupakan urutan bilangan setelah disorting. Pada output kodingan ini bernilai benar karena urutan sudah secara descending.

#### Full Code Screenshot

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-3/blob/main/Modul%203/Screenshot%20Kode%20dan%20Output/Guided2.png" alt="Alt Text">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-3/blob/main/Modul%203/Screenshot%20Kode%20dan%20Output/OutGuid2.png" alt="Alt Text">
</p>

## Unguided 

### 1. Unguided 1

#### Kelas S1 IF 2016 G memiliki 5 mahasiswa. Pada akhir semester mereka menerima lembar Indeks Prestasi Semester (IPS), masing-masing mahasiswa tersebut memiliki IPS sebagai berikut: {3.8, 2.9, 3.3, 4.0, 2.4}. Buatlah program untuk mengurutkan IPS mahasiswa tersebut dari yang terbesar hingga terkecil dengan menggunakan algoritma Selection Sort! 

**Kode Program:**

```C++
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
```

**Penjelasan:**

#### Bagian 1

```C++
#include <iostream>
using namespace std;
```

Library iostream digunakan untuk menjalankan operasi input dan output pada program. Lalu namespace std dipanggil agar saat penulisan fungsi tidak perlu ditambahkan std lagi.

#### Bagian 2

```C++
void selection_sort(double arr[], int length) {
    for (int i = 0; i < length - 1; i++) {
        int max_index = i; 

        for (int j = i + 1; j < length; j++) {
            if (arr[j] > arr[max_index]) {
                max_index = j;
            }
        }

        double temp = arr[i];
        arr[i] = arr[max_index];
        arr[max_index] = temp;
    }
}
```

Fungsi **selection_sort** digunakan untuk mengurutkan array dalam variabel **arr** yang merupakan tempat penyimpanan nilai IPS mahasiswa. Di setiap perulangan menggunakan for, **i** akan menggunakan algoritma untuk mencari nilai terbesar dari sisa array yang belum diurutkan. Jika nilai terbesar tersebut ditemukan, maka nilai pada indeks **ke-i** akan ditukar dengan nilai tersebut.

#### Bagian 3

```C++
void print_ips(double ips[], int length) { 
    for (int i = 0; i < length; i++) {
        cout << ips[i] << "\t"; 
    } 
    cout << endl; 
}  
```

Fungsi di atas digunakan untuk memunculkan IPS ke terminal. Pada kode di atas juga menggunakan perulangan for sehingga nilai IPS akan di cetak satu persatu. 

#### Bagian 4

```C++
int main() { 
    int length = 5; 
    double ips[] = {3.8, 2.9, 3.3, 4.0, 2.4}; 

    cout << "IPS mahasiswa sebelum pengurutan: " << endl; 
    print_ips(ips, length); 

    selection_sort(ips, length); 

    cout << "\nIPS mahasiswa setelah pengurutan: " << endl; 
    print_ips(ips, length); 

    return 0;
}
```

Kode di atas merupakan fungsi main atau fungsi inti yang akan dieksekusi pertama. Pada fungsi main ini terdapat array **ips** yang belum di urutkan sehingga terdapat fungsi **selection_sort** yang dipanggil untuk mengurutkan nilai IPS. Kode di atas akan mencetak nilai IPS setelah pengurutan diselesaikan.

**Output:**

```C++
IPS mahasiswa sebelum pengurutan: 
3.8     2.9     3.3     4       2.4

IPS mahasiswa setelah pengurutan: 
4       3.8     3.3     2.9     2.4
```

#### Penjelasan

Pada output di terminal akan mengeluarkan nilai IPS mahasiswa yang belum di urutkan terlebih dahulu, berikutnya akan dicetak IPS mahasiswa setelah di urutkan. Output program ini sebelumnya sudah di atur pada fungsi main.

#### Full code Screenshot:

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-3/blob/main/Modul%203/Screenshot%20Kode%20dan%20Output/Unguided1.png" alt="Alt Text">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-3/blob/main/Modul%203/Screenshot%20Kode%20dan%20Output/OutUn1.png" alt="Alt Text">
</p>

### 2. Unguided 2

#### Pak RT memiliki 10 warga dengan nama: siti, situ, sana, ana, ani, caca, cici, dida, dodo, dan dadi. Supaya mudah dalam melakukan pencarian, Pak RT akan mengurutkan nama-nama tersebut sesuai dengan alfabet. Buatlah program untuk membantu Pak RT dengan menggunakan algoritma Bubble Sort!

**Kode Program:**

```C++
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
```

**Penjelasan:**

#### Bagian 1

```C++
#include <iostream>
#include <string>

using namespace std;
```

Dalam kode di atas kita akan menggunakan 2 library yaitu **<iostream>** untuk input dan output serta **<string>** untuk membebaskan dalam penggunaan tipe data string. Lalu namespace **std** dipanggil agar saat penulisan fungsi tidak perlu ditambahkan std lagi.

#### Bagian 2

```C++
void bubble_sort(string arr[], int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
```

Kode di atas menggunakan fungsi bubble sort. Dimana **bubble_sort** akan berisikan array string **arr** serta **length** yang merupakan panjang dari array tersebut. Terdapat dua perulangan bertingkat dimana ada for di dalam for. For pertama akan digunakan untuk melakukan perbandingan dan pertukaran elemen. For kedua digunakan untuk memasangkan setiap pasangan elemen secara berturut-turut, dan akan disesuaikan urutannya.

#### Bagian 3

```C++
void print_names(string names[], int length) {
    for (int i = 0; i < length; i++) {
        cout << names[i] << "\t";
    }
    cout << endl;
}
```

Pada kode di atas tedapat fungsi **print_names** yang akan digunakan untuk mencetak nama-nama ke terminal. Kita menggunakan perulangan for dalam memanggil nama-nama yang ada.

#### Bagian 4

```C++
int main() {
    int length = 10; 
    string names[] = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"}; 

    cout << "Nama-nama warga sebelum pengurutan: " << endl;
    print_names(names, length);

    bubble_sort(names, length);

    cout << "\nNama-nama warga setelah pengurutan: " << endl;
    print_names(names, length);

    return 0;
}
```

Kode di atas merupakan kode yang digunakan untuk membuat fungsi main. Fungsi main ini merupakan kode yang pertama kali akan dieksekusi dalam menjalankan sebuah program. Di dalam kode dilakukan inisiasi array **names** yang diisi dengan nama-nama warga sebelum diurutkan, sehingga dipanggil fungsi **bubble_sort** untuk mengurutkan nama-nama warga untuk dicetak kembali setelah di urutkan.

**Output:**

```C++
Nama-nama warga sebelum pengurutan: 
siti    situ    sana    ana     ani     caca    cici    dida    dodo    dadi

Nama-nama warga setelah pengurutan: 
ana     ani     caca    cici    dadi    dida    dodo    sana    siti    situ
```

#### Penjelasan

Pada output di terminal akan mengeluarkan nama-nama dari warga yang belum di urutkan terlebih dahulu, berikutnya akan dikeluarkan nama-nama warga setelah di urutkan. Output program ini sebelumnya sudah di atur pada fungsi main sehingga fungsi main akan sangat penting dalam pemrograman.

#### Full code Screenshot:

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-3/blob/main/Modul%203/Screenshot%20Kode%20dan%20Output/Unguided2.png" alt="Alt Text">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-3/blob/main/Modul%203/Screenshot%20Kode%20dan%20Output/OutUn2.png" alt="Alt Text">
</p>

### 3. Unguided 3

#### Buatlah program yang meminta user menginputkan suatu bilangan n dan meminta user untuk menginputkan sejumlah n karakter. Kemudian program akan melakukan sorting secara menaik (ascending) dan menurun (descending)!

**Kode Program:**

```C++
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
```

**Penjelasan:**

#### Bagian 1

```C++
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
```

Dalam kode di atas kita akan menggunakan 3 library yaitu **<iostream>** untuk input dan output, **<vector>** untuk membebaskan dalam penggunaan vector dalam pengurutan, dan **<algorithm>** yang akan digunakan pada fungsi **reverse()** dalam pengurutan vector secara descending. Lalu namespace **std** dipanggil agar saat penulisan fungsi tidak perlu ditambahkan std lagi.


#### Bagian 2

```C++
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
```

Pada kode di atas kita membuat fungsi **insertionSort** yang akan berisikan vektor **arr** sebagai parameter serta mengurutkan elemen di dalamnya menggunakan algoritma insertion sort. Disini kita menggunakan perulangan for dan while yang menggunakan perulangan **(i)** yang dapat berpindah-pindah sesuai dengan posisi yang benar dari value elemennya.

#### Bagian 3

##### Fungsi Main part 1
```C++
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
```

Pada fungsi main di atas merupakan fungsi yang akan di eksekusi pertama, kita akan membedahnya menjadi 3 bagian fungsi main agar mudah dalam penjelasan. Jadi pada fungsi di atas pengguna akan diminta untuk memasukkan panjang vektor atau banyaknya elemen ayang akan ada pada array. Kemudian **characters** akan menyimpan karakter yang diinputkan sesuai dengan panjang vektornya. Tentunya dalam kode di atas menggunakan perulangan yaitu for.

#### Bagian 4

##### Fungsi Main part 2

```C++
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

```

Pada bagian fungsi main ini, komputer diminta untuk memunculkan isi dari vektor sebelum di urutkan. Untuk memunculkan isi vektor, kita menggunakan for yang memanggil characters = c. Setelah itu, karakter akan diurutkan menggunakan insertionSort dan menampilkan kembali karakter setelah diurutkan.

#### Bagian 5

```C++
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
```

Pada bagian fungsi main di atas, vektor akan di reverse atau di balikkan agar mendapatkan hasil pengurutan secara descending. Lalu pesan pengurutan secara descending akan muncul dan outputnya muncul di terminal.

**Output:**

```C++
Masukkan panjang baris: 6
Masukkan karakter atau angka ke-1: s
Masukkan karakter atau angka ke-2: a
Masukkan karakter atau angka ke-3: y 
Masukkan karakter atau angka ke-4: a
Masukkan karakter atau angka ke-5: n
Masukkan karakter atau angka ke-6: g

Isi baris sebelum diurutkan: s a y a n g

Hasil pengurutan secara ascending (kecil ke besar): a a g n s y
Hasil pengurutan secara descending (besar ke kecil): y s n g a a
```

#### Penjelasan

Pada output di atas, pertama pengguna akan diminta untuk memasukkan panjang dari barisnya. Setelah memasukkan panjang barisnya, maka pengguna dapat memasukkan satu persatu karakter yang diinginkan dengan enter sebagai penjedanya. Setelah itu hasil pengurutan ascending dan descending akan muncul. Hasil output ini di atur pada fungsi main sebelumnya.

#### Full code Screenshot:

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-3/blob/main/Modul%203/Screenshot%20Kode%20dan%20Output/Unguided3.png" alt="Alt Text">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-3/blob/main/Modul%203/Screenshot%20Kode%20dan%20Output/OutUn3.png" alt="Alt Text">
</p>

## Kesimpulan

Dalam dunia pemrograman tidak dapat lepas dari data, sehingga data-data ini perlu di olah. Dalam pengolahan data ini diperlukan algoritma yang tepat dan efisien sehingga memudahkan dalam akses dan manipulasi data yang ada. Dalam algoritma sorting, algoritma ini memainkan peran yang krusial dalam mengakses data secara mudah dan efisien. ALgoritma Bubble Sort, Selection Sort, dan Insertion Sort merupakan algoritma yang sangat sering ditemui dan digunakan dalam kehidupan sehari-hari sama seperti halnya dalam dunia pengkodingan.

## Referensi

F. E. Saputro and F. N. Khasanah, “Teknik Selection Sort dan Bubble Sort Menggunakan Borland C ++,” J. Mhs. Bina Insa., vol. 2, no. 2, pp. 136–145, 2019. 

M. Arawin, “Penerapan bubble sort dan insertion sort pada urutan mahasiswa,” 2019. 

Wisudawan, W. F. (2006). Kompleksitas Algoritma Sorting yang Populer Dipakai. 1–8.
