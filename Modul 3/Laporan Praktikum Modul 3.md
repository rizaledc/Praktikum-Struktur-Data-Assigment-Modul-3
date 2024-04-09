# <h1 align="center">Laporan Praktikum Modul Array</h1>
<p align="center">Rizal Wahyu Pratama</p>
<p align="center">2311110029</p>

## Tujuan Praktikum

Dengan adanya praktikum ini, penulis telah menargetkan beberapa tujuan diantaranya:
1. Mahasiswa dapat memahami dan menerapkan beberapa algoritma sorting dalam menyelesaikan berbagai studi kasus.
   
## Dasar Teori

Kata sorting dapat didefinisikan sebagai pengurutan sejumlah data berdasarkan nilai kunci tertentu. Pengurutan dapat dilakukan dari nilai terkecil ke nilai terbesar 
(ascending) atau sebaliknya (descending) (Wahyu Fahmy). Tujuan dari adanya sorting ini untuk mengatur data sehingga seseorang dapat mengakses datanya dengan lebih mudah dan efisien dalam memahami maupun mengolah data. Dalam pemrograman terdapat beberapa algoritma sorting yang umum digunakan diantaranya: Bubble sort, Selection sort, Insertion Sort, Merge Sort, dan Quick sort. Dalam laporan ini, penulis akan menjelaskan 3 algoritma sorting yaitu Bubble sort, Selection sort, dan Insertion sort. 

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

Selection sort merupakan pengurutan dengan memilih elemen dengan nilai terkecil dari sisa array, jika telah ditemukan maka nilai tersebut akan dipindahkan ke posisi yang sesuai dengan nilainya. Proses ini akan terus berulang hingga seluruh elemen array berada pada posisi yang benar.

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

Insertion sort ini merupakan metode pengurutan dengan membagi elemen array menjadi dua bagian(bagian yang diurutkan dan bagian yang belum diurutkan). Algoritma ini akan memilih elemen dari bagian yang belum diurutkan lalu disisipkan ke dalam bagian yang diurutkan dalam posisi yang tepat. Elemen-elemen yang nilainya lebih besar akan bergeser ke kanan. Langkah akan terus berulang hingga semua elemen array terurutkan dengan benar.

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
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-2/blob/main/Modul%202/Screenshot%20In%20and%20Out/Guided01.png" alt="Alt Text">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-2/blob/main/Modul%202/Screenshot%20In%20and%20Out/OutputGuided1.png" alt="Alt Text">
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
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-2/blob/main/Modul%202/Screenshot%20In%20and%20Out/Guided02.png" alt="Alt Text">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-2/blob/main/Modul%202/Screenshot%20In%20and%20Out/OutputGuided2.png" alt="Alt Text">
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

```



#### Bagian 2

```C++

```



#### Bagian 3

```C++
  
```


#### Bagian 4

```C++

```



#### Bagian 5

```C++

```



#### Bagian 6

```C++

```



#### Bagian 7

```C++

```



**Output:**

```C++

```

#### Penjelasan



#### Full code Screenshot:

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-2/blob/main/Modul%202/Screenshot%20In%20and%20Out/Unguided01.png" alt="Alt Text">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-2/blob/main/Modul%202/Screenshot%20In%20and%20Out/OutputUnguided1.png" alt="Alt Text">
</p>

### 2. Guided 2

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

```


#### Bagian 2

```C++

```



#### Bagian 3

```C++

```



#### Bagian 4

```C++

```



#### Bagian 5

```C++

```



**Output:**

```C++

```

#### Penjelasan



#### Full code Screenshot:

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-2/blob/main/Modul%202/Screenshot%20In%20and%20Out/Unguided02.png">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-2/blob/main/Modul%202/Screenshot%20In%20and%20Out/OutputUnguided2.png">
</p>

### 3. Guided 3

#### Buatlah program yang meminta user menginputkan suatu bilangan n dan meminta user untuk menginputkan sejumlah n karakter. Kemudian program akan melakukan sorting secara menaik (ascending) dan menurun (descending)!

**Kode Program:**

```C++

```

**Penjelasan:**

#### Bagian 1

```C++

```

#### Bagian 2

```C++

```

#### Bagian 3

```C++
 
```



#### Bagian 4

```C++

```



#### Bagian 5

```C++

```



#### Bagian 6

```C++

```


#### Bagian 7

```C++
    
```


**Output:**

```C++

```

#### Penjelasan



#### Full code Screenshot:

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-2/blob/main/Modul%202/Screenshot%20In%20and%20Out/Unguided3.png">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-2/blob/main/Modul%202/Screenshot%20In%20and%20Out/OutputUnguided3.png">
</p>

## Kesimpulan



## Referensi

