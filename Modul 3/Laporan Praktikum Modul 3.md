# <h1 align="center">Laporan Praktikum Modul Array</h1>
<p align="center">Rizal Wahyu Pratama</p>
<p align="center">2311110029</p>

## Tujuan Praktikum

Dengan adanya praktikum ini, penulis telah menargetkan beberapa tujuan diantaranya:
1. Mahasiswa dapat memahami dan menerapkan beberapa algoritma sorting dalam menyelesaikan berbagai studi kasus.
   
## Dasar Teori

Kata sorting dapat didefinisikan sebagai pengurutan sejumlah data berdasarkan nilai kunci tertentu. Pengurutan dapat dilakukan dari nilai terkecil ke nilai terbesar 
(ascending) atau sebaliknya (descending) (Wahyu Fahmy). Tujuan dari adanya sorting ini untuk mengatur data sehingga seseorang dapat mengakses datanya dengan lebih mudah dan efisien dalam memahami maupun mengolah data. Dalam pemrograman terdapat beberapa algoritma sorting yang umum digunakan diantaranya: Bubble sort, Selection sort, Insertion Sort, Merge Sort, dan Quick sort. Dalam laporan ini, penulis akan menjelaskan 3 algoritma sorting yaitu Bubble sort, Selection sort, dan 



## Guided 

### 1. Guided 1
#### Matriks 3 Dimensi

#### Program Input Array Tiga Dimensi :

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

#### Output :

```C++

```

**Penjelasan:**
 

#### Full Code Screenshot

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-2/blob/main/Modul%202/Screenshot%20In%20and%20Out/Guided01.png" alt="Alt Text">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-2/blob/main/Modul%202/Screenshot%20In%20and%20Out/OutputGuided1.png" alt="Alt Text">
</p>

### 2. Guided 2
#### Nilai Maksimum pada Array

#### Program Mencari Nilai Maksimum pada Array :

```C++

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

#### Output:

```C++

```

**Penjelasan:**


#### Full Code Screenshot

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-2/blob/main/Modul%202/Screenshot%20In%20and%20Out/Guided02.png" alt="Alt Text">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-2/blob/main/Modul%202/Screenshot%20In%20and%20Out/OutputGuided2.png" alt="Alt Text">
</p>

## Unguided 

### 1.  Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!

Data Array : 1 2 3 4 5 6 7 8 9 10

Nomor Genap : 2, 4, 6, 8 , 10,

Nomor Ganjil : 1, 3, 5, 7, 9,

Noted: Inputan boleh berubah.

**Kode Program:**

```C++
//Menggunakan library input/output dan struktur data
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

//Membuat kode inti atau main code
int main() {
    string name; // membuat variabel
    //membuat vektor bertipe integer
    vector<int> numbers;
    vector<int> evenNumbers;
    vector<int> oddNumbers;
    
    //meminta inputan
    cout << "Masukkan nama Anda:" << endl;
    getline(cin, name);
    cout<<endl;
    //Menyapa pengguna dan meminta inputan angka
    cout<<"Halo, "<< name << ". Selamat datang di Program pemilihan angka genap dan ganjil." << endl<<endl;
    cout << "Masukkan angka anda, pisahkan dengan spasi!" << endl;
    cout << "Klik enter untuk menampilkan hasil !" << endl;
    string input;
    getline(cin, input);
    
    // Membaca angka-angka dari baris input
    stringstream ss(input);
    int num;
    while (ss >> num) {
        numbers.push_back(num);
    }
    
    // Memisahkan angka genap dan ganjil dari inputan pengguna
    for (int num : numbers) {
        if (num % 2 == 0) { //menggunakan modulus
            evenNumbers.push_back(num);  //jika habis di bagi 2 masuk ke sini
        } else {
            oddNumbers.push_back(num); //jika tidak habis masuk kesini
        }
    }
    
    // Menampilkan angka-angka genap
    cout << "Angka genap: ";
    for (int num : evenNumbers) {
        cout << num << " ";
    }
    cout << endl;
    
    // Menampilkan angka-angka ganjil
    cout << "Angka ganjil: ";
    for (int num : oddNumbers) {
        cout << num << " ";
    }
    cout << endl<<endl;
    
    return 0;
}
```

**Penjelasan:**

#### Bagian 1

```C++
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
```

Pada bagian satu di atas kita menginputkan library <iostream> untuk input dan output pada C++, <sstream> untuk input dan output pada string streams, dan <vector> yang digunakan untuk mengakses struktur data vektor. Menggunakan namespace std agar tidak perlu menuliskan std lagi saat menggunakan elemen dalam namespace seperti `cin`,`cout`,`vector`.

#### Bagian 2

```C++
int main() {
    string name; // membuat variabel
    //membuat vektor bertipe integer
    vector<int> numbers;
    vector<int> evenNumbers;
    vector<int> oddNumbers;
```

Kode pada bagian 2 di atas merupakan kode inti atau main kode yang akan pertama kali di eksekusi saat menjalankan fungsi. String name mendeklarasikan variabel name yang berguna untuk menyimpan nama-nama pengguna. Berikutnya kita mendeklarasikan 3 vektor sekaligus dengan data integer di dalamnya yaitu numbers(menyimpan angka yang dimasukkan pengguna), eventNumvers(menyimpan angka genap), dan oddNumbers(menyimpan angka ganjil).

#### Bagian 3

```C++
    //meminta inputan
    cout << "Masukkan nama Anda:" << endl;
    getline(cin, name);
    cout<<endl;
```

Pada bagian di atas, kita membuat kode untuk mengambil inputan nama dari pengguna menggunakan getline yang akan disimpan dalam variabel name.

#### Bagian 4

```C++
    //Menyapa pengguna dan meminta inputan angka
    cout<<"Halo, "<< name << ". Selamat datang di Program pemilihan angka genap dan ganjil." << endl<<endl;
    cout << "Masukkan angka anda, pisahkan dengan spasi!" << endl;
    cout << "Klik enter untuk menampilkan hasil !" << endl;
    string input;
    getline(cin, input);
```

Kode di atas berguna untuk menyapa pengguna dan meminta inputan angka. Kode di atas lebih banyak memunculkan output.

#### Bagian 5

```C++
    // Membaca angka-angka dari baris input
    stringstream ss(input);
    int num;
    while (ss >> num) {
        numbers.push_back(num);
    }
```

Pada kode di atas kita membuat objek stringstream ss untuk membaca dari string input. Berikutnya menggunakan while untuk melooping dalam membaca angka-angka yang dihasilkan string input menggunakan operator (>>) serta menyimpannya dalam vektor numbers.

#### Bagian 6

```C++
    // Memisahkan angka genap dan ganjil dari inputan pengguna
    for (int num : numbers) {
        if (num % 2 == 0) { //menggunakan modulus
            evenNumbers.push_back(num);  //jika habis di bagi 2 masuk ke sini
        } else {
            oddNumbers.push_back(num); //jika tidak habis masuk kesini
        }
    }
```

Pada kode di atas, kita menggunakan loop for untuk mencari data angka di dalam vektor numbers. Setiap data angka yang ada dalam array diperiksa lalu dipisahkan antara genap dan ganjilnya. Angka genap dimasukkan ke evenNumbers dan angka ganjil dimasukkan ke oddNumbers.

#### Bagian 7

```C++
    // Menampilkan angka-angka genap
    cout << "Angka genap: ";
    for (int num : evenNumbers) {
        cout << num << " ";
    }
    cout << endl;
    
    // Menampilkan angka-angka ganjil
    cout << "Angka ganjil: ";
    for (int num : oddNumbers) {
        cout << num << " ";
    }
    cout << endl<<endl;

return 0;
```

Kode program di atas akan mencetak angka genap dan janjil dengan mencetaknya satu-persatu menggunakan loop for. Lalu return 0 untuk memastikan program berjalan dengan baik dan benar.

**Output:**

```C++
Masukkan nama Anda:
Rizal Wahyu Pratama 

Halo, Rizal Wahyu Pratama. Selamat datang di Program pemilihan angka genap dan ganjil.

Masukkan angka anda, pisahkan dengan spasi!
Klik enter untuk menampilkan hasil !
12 14 13 15 17 18 101 107 108 100 109
Angka genap: 12 14 18 108 100
Angka ganjil: 13 15 17 101 107 109
```

#### Penjelasan

Pada bagian output ini pertama user akan diminta untuk memasukkan namanya, lalu akan muncul sapaan Halo dari sistem. Setelah itu user akan diminta menginputkan angka yang setiap angkanya dapat dipisahkan dengan spasi. Jika telah selesai menginputkan angka maka user dapat menekan enter untuk mengeluarkan hasil pemilihan angka genap dan ganjilnya.

#### Full code Screenshot:

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-2/blob/main/Modul%202/Screenshot%20In%20and%20Out/Unguided01.png" alt="Alt Text">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-2/blob/main/Modul%202/Screenshot%20In%20and%20Out/OutputUnguided1.png" alt="Alt Text">
</p>

### 2.  Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!

**Kode Program:**

```C++
#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel untuk menyimpan ukuran array dalam tiga dimensi
    int x_size, y_size, z_size;

    // Meminta pengguna untuk memasukkan ukuran array
    cout << "Masukkan ukuran array dalam tiga dimensi (x y z): ";
    cin >> x_size >> y_size >> z_size;

    // Deklarasi array berdasarkan ukuran yang dimasukkan oleh pengguna
    int arr[x_size][y_size][z_size];

    // Meminta pengguna untuk memasukkan elemen array
    for (int x = 0; x < x_size; x++) {
        for (int y = 0; y < y_size; y++) {
            for (int z = 0; z < z_size; z++) {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
    }

    // Output elemen array
    cout << "\nElemen-elemen array yang dimasukkan:\n";
    for (int x = 0; x < x_size; x++) {
        for (int y = 0; y < y_size; y++) {
            for (int z = 0; z < z_size; z++) {
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }

    // Tampilan array
    cout << "\nTampilan array:\n";
    for (int x = 0; x < x_size; x++) {
        for (int y = 0; y < y_size; y++) {
            for (int z = 0; z < z_size; z++) {
                cout << arr[x][y][z] << ' ';
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
```

**Penjelasan:**

#### Bagian 1

```C++
#include <iostream>
using namespace std;
```

Pada bagian satu di atas kita menginputkan library <iostream> untuk input dan output pada C++. Menggunakan namespace std agar tidak perlu menuliskan std lagi saat menggunakan elemen dalam namespace seperti `cin`,`cout`,`vector`

#### Bagian 2

```C++
int main() {
    // Deklarasi variabel untuk menyimpan ukuran array dalam tiga dimensi
    int x_size, y_size, z_size;

    // Meminta pengguna untuk memasukkan ukuran array
    cout << "Masukkan ukuran array dalam tiga dimensi (x y z): ";
    cin >> x_size >> y_size >> z_size;
```

Pada kode di atas kita membuat kode main yang merupakan kode yang dijalankan ketika kode mulai di run. Terdapat 3 variabel yaitu x_size, y_size, dan z_size yang dapat digunakan untuk menyimpan array 3 dimensi. Berikutnya pengguna diminta untuk menginputkan ukuran dari array 3 dimensinya melalui cout dan disimpan menggunakan cin.

#### Bagian 3

```C++
    // Deklarasi array berdasarkan ukuran yang dimasukkan oleh pengguna
    int arr[x_size][y_size][z_size];

    // Meminta pengguna untuk memasukkan elemen array
    for (int x = 0; x < x_size; x++) {
        for (int y = 0; y < y_size; y++) {
            for (int z = 0; z < z_size; z++) {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
    }
```

Pada kode di atas kita mengetahui bahwa kode tersebut untuk membuat array tiga dimensi dengan mendeklarasikan x_size, y_size, dan z_size. Berikutnya membuat nested loop menggunakan for dimulai dari x lalu y dan terakhir z. 

#### Bagian 4

```C++
    // Output elemen array
    cout << "\nElemen-elemen array yang dimasukkan:\n";
    for (int x = 0; x < x_size; x++) {
        for (int y = 0; y < y_size; y++) {
            for (int z = 0; z < z_size; z++) {
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }    
```

Pada kode di atas digunakan untuk output dari semua elemen array. Setelah semua nilai dimasukkan ke dalam program, program akan mencetak kembali semua nilai array yang telah dimasukkan. Kita menggunakan for untuk mengakses dan mencetak seluruh elemen array beserta indeksnya. For pada kode di atas berulang.

#### Bagian 5

```C++
    // Tampilan array
    cout << "\nTampilan array:\n";
    for (int x = 0; x < x_size; x++) {
        for (int y = 0; y < y_size; y++) {
            for (int z = 0; z < z_size; z++) {
                cout << arr[x][y][z] << ' ';
            }
            cout << endl;
        }
        cout << endl;
    }
return 0;    
```

Kode di atas digunakan untuk menampilkan array. Pada kode ini, program dapat mencetak tampilan dari array tiga dimensi. Masih sama menggunakan loop for dalam mengakses dan mencetak setiap elemen arraynya. Setiap selesai mencetak elemen dalam satu dimensi, program mencetak baris baru untuk memisahkan dimensi y. Saat seluruh elmen pada y telah di cetak, program akan mencetak baris kosong untuk memisahkan dimensi pada x.

**Output:**

```C++
Masukkan ukuran array dalam tiga dimensi (x y z): 2 2 2
Input Array[0][0][0] = 1
Input Array[0][0][1] = 2
Input Array[0][1][0] = 3
Input Array[0][1][1] = 4
Input Array[1][0][0] = 5
Input Array[1][0][1] = 6
Input Array[1][1][0] = 7
Input Array[1][1][1] = 8

Elemen-elemen array yang dimasukkan:
Data Array[0][0][0] = 1
Data Array[0][0][1] = 2
Data Array[0][1][0] = 3
Data Array[0][1][1] = 4
Data Array[1][0][0] = 5
Data Array[1][0][1] = 6
Data Array[1][1][0] = 7
Data Array[1][1][1] = 8

Tampilan array:
1 2
3 4

5 6
7 8
```

#### Penjelasan

Pada output di atas, pengguna diminta untuk menginputkan ukuran array 3 dimensinya. Dimana pada kode di atas, pengguna menginputkan ukuran array 2 x 2 x 2. Berikuntnya pengguna menginputkan 8 elemen array untuk memenuhi nilai array 3 dimensi. Maka dapatlah dicetak seluruh elemen yang diinputkan lalu di tampilkan dalam bentuk array 3 dimensi.

#### Full code Screenshot:

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-2/blob/main/Modul%202/Screenshot%20In%20and%20Out/Unguided02.png">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-2/blob/main/Modul%202/Screenshot%20In%20and%20Out/OutputUnguided2.png">
</p>

### 3.  Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata– rata dari suatu array dengan input yang dimasukan oleh user!

**Kode Program:**

```C++
// Library yang digunakan untuk fungsi standar yaitu input/output,, algoritma, dan struktur data
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;

// Program utama yang akan dieksekusi
int main() {
    // Deklarasi variabel untuk menyimpan panjang array
    int n;
    
    // Meminta pengguna untuk memasukkan panjang array
    cout << "Masukkan panjang array: ";
    cin >> n;

    // Memeriksa jika panjang array tidak valid
    if (n <= 0) {
        cout << "Panjang array harus lebih besar dari 0" << endl;
        return 1; // Mengembalikan 1 menandakan kesalahan
    }

    // Deklarasi array untuk menyimpan data
    int array[n];
    
    // Meminta pengguna untuk memasukkan angka-angka ke dalam array
    cout << "Masukkan " << n << " angka\n";
    for (int i = 0; i < n; i++) {
        cout << "Array ke-" << (i + 1) << ": ";
        cin >> array[i];
    }

    // Mencari nilai maksimum menggunakan fungsi dari library
    int maksimum = *max_element(array, array + n);

    // Mencari nilai minimum menggunakan fungsi dari library
    int minimum = *min_element(array, array + n);

    // Menghitung nilai rata-rata
    double total = 0;
    for (int i = 0; i < n; i++) {
        total += array[i];
    }
    double rata_rata = total / n;

    // Mengurutkan array menggunakan fungsi dari library
    sort(array, array + n);

    // Menampilkan array setelah diurutkan
    cout << "Array setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    // Mencari nilai median
    double median;
    if (n % 2 == 0) {
        median = (array[n / 2 - 1] + array[n / 2]) / 2.0; // Menggunakan 2.0 agar pembagian menghasilkan double
    } else {
        median = array[n / 2]; // Jika ganjil, ambil nilai tengah langsung
    }

    // Mencari nilai modus menggunakan unordered_map untuk menghitung frekuensi
    unordered_map<int, int> frekuensi;
    for (int i = 0; i < n; i++) {
        frekuensi[array[i]]++;
    }
    int modus = -1, maksimum_frekuensi = 0;
    for (auto it : frekuensi) {
        if (it.second > maksimum_frekuensi) {
            modus = it.first;
            maksimum_frekuensi = it.second;
        }
    }

    // Menampilkan hasil perhitungan statistik
    cout << "Nilai maksimum adalah " << maksimum << endl;
    cout << "Nilai minimum adalah " << minimum << endl;
    cout << "Nilai rata-rata adalah " << rata_rata << endl;
    cout << "Nilai tengah setelah diurutkan adalah " << median << endl;
    cout << "Nilai modus adalah " << modus << " dengan frekuensi " << maksimum_frekuensi << endl;

    return 0; // Mengembalikan 0 menandakan program berjalan dengan sukses
}
```

**Penjelasan:**

#### Bagian 1

```C++
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;
```

Pada kode di atas, kita menggunakan beberapa library pada C++ yaitu <iostream> untuk input dan output kode C++, <algorithm> menggunakan fungsi seperti searching, <unordered_map> menggunakan struct unordered_map, dan <vector> untuk menggunakan struct data vektor. Menggunakan namespace std agar tidak perlu menuliskan std lagi saat menggunakan elemen dalam namespace seperti `cin`,`cout`,`vector`.

#### Bagian 2

```C++
int main() {
.............
}
```
 Kode di atas akan berikan semua main code dari seluruh codingan.

#### Bagian 3

```C++
    int n;
    cout << "Masukkan panjang array: ";
    cin >> n;   
```

Pada bagian ini n dideklarasikan untuk menyimpan panjang array serta memunculkan pesan menggunakan cout.

#### Bagian 4

```C++
    if (n <= 0) {
        cout << "Panjang array harus lebih besar dari 0" << endl;
        return 1; // Mengembalikan 1 menandakan kesalahan
    }    
```

Pada kode di atas cara kerjanya adalah memeriksa panjang array yang diinputkan dari pengguna wajib valid yaitu lebih besar sama dengan 0, jika tidak memenuhi maka akan mereturn 1 sebagai kesalahan.

#### Bagian 5

```C++
    int array[n];
    cout << "Masukkan " << n << " angka\n";
    for (int i = 0; i < n; i++) {
        cout << "Array ke-" << (i + 1) << ": ";
        cin >> array[i];
    }    
```

Pada kode di atas pertama array dideklarasikan yang ditentukan oleh pengguna. Pengguna diminta untuk memasukkan angka-angka sesuai panjang array yang dimintanya. Dimana for ini akan membaca dan menyimpan setiap angka yang dimasukkan ke dalam array.

#### Bagian 6

```C++
    int maksimum = *max_element(array, array + n);

    int minimum = *min_element(array, array + n);

    double total = 0;
    for (int i = 0; i < n; i++) {
        total += array[i];

    sort(array, array + n);
    cout << "Array setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    }
    double rata_rata = total / n;

    double median;
    if (n % 2 == 0) {
        median = (array[n / 2 - 1] + array[n / 2]) / 2.0;
    } else {
        median = array[n / 2];
    }

    unordered_map<int, int> frekuensi;
    for (int i = 0; i < n; i++) {
        frekuensi[array[i]]++;
    }
    int modus = -1, maksimum_frekuensi = 0;
    for (auto it : frekuensi) {
        if (it.second > maksimum_frekuensi) {
            modus = it.first;
            maksimum_frekuensi = it.second;
        }
    }  
```

- Pada kode program di atas, kita membuat program yang dapat mencari nilai maksimum dan minimum dimana tentunya ini menggunakan library <algorithm>. 
- Pada kode di atas kita juga dapat menghitung nilai rata-rata dari array yang diinputkan. 
- Disini kita membuat variabel total yang berupa double atau float. Lalu menggunakan for dalam perulangannya. 
- Untuk mencari nilai tengah atau median dibutuhkan data yang urut terlebih dahulu, oleh karena itu pada program tertera algoritma sorting agar dapat dicari mediannya. Pada median ini tipe data yang dikeluarkan berupa double atau float yang terdiri dari 2 kondisi, dimana kondisi pertama adalah ketika jumlah array modulo dari 2 = 0 maka akan masuk ke if, ketika array modulo dari 2 != 0 maka akan masuk ke else.
- Terakhir kita dapat mencari nilai modus atau nilai yang paling sering muncul. Disini kita dapat menggunakan library unordered_map yang berguna untuk menghitung frekuensi kemunculan setiap nilai dalam array. Dengan menggunakan for, setiap elemen dalam array dapat diakses dengan melooping. Terdapat pasangan kunci-nilai(it) yang mewakili nilai dalam array dan frekuensi kemunculannya. Apabila kemunculan nilai lebih besar dari maksimum_frekuensi maka nilai yang muncul tersebut dianggap sebagai modus baru. Maka variabel modus dan maksimum_frekuensi akan selalu berubah dan diperbaharui sesuai dengan nilai modus dan frekuensi kemunculannya.


#### Bagian 7

```C++
    cout << "Nilai maksimum adalah " << maksimum << endl;
    cout << "Nilai minimum adalah " << minimum << endl;
    cout << "Nilai rata-rata adalah " << rata_rata << endl;
    cout << "Nilai tengah setelah diurutkan adalah " << median << endl;
    cout << "Nilai modus adalah " << modus << " dengan frekuensi " << maksimum_frekuensi << endl;

return 0;    
```

Pada bagian terakhir ini, semua output hanya perlu di cetak serta mengakhiri program dengan return 0.

**Output:**

```C++
Masukkan panjang array: 4
Masukkan 4 angka
Array ke-1: 1
Array ke-2: 56
Array ke-3: 1
Array ke-4: 4
Array setelah diurutkan: 1 1 4 56 
Nilai maksimum adalah 56
Nilai minimum adalah 1
Nilai rata-rata adalah 15.5
Nilai tengah setelah diurutkan adalah 2.5
Nilai modus adalah 1 dengan frekuensi 2
```

#### Penjelasan

Pada output kode di atas, user akan diminta untuk memasukkan panjang array terlebih dahulu, pada contoh memasukkan panjang array adalah 4 dengan nilai 1, 56, 1, 4. Lalu array akan di urutkan sesuai dari terkecil ke terbesar atau ascending. Setelah diurutkan maka seluruh perhitungan dapat dicetak mulai dari nilai maksimum, minimum, rata-rata, median, dan modus.

#### Full code Screenshot:

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-2/blob/main/Modul%202/Screenshot%20In%20and%20Out/Unguided3.png">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-2/blob/main/Modul%202/Screenshot%20In%20and%20Out/OutputUnguided3.png">
</p>

## Kesimpulan

Dengan mempelajari array dalam bahasa pemrograman C++ kita dapat mengetahui berbagai hal yang baru dan penting. Dimana kita dapat mengetahui bagaimana kemampuan array dalam menyimpan dan mengelola data secara efisien di dalam program. Dalam mata kuliah ini kita mengetahui bahwa array dapat berupa sat dimensi, dua dimensi, hingga multi dimensi dengan masing-masing kegunaannya. Kita dapat melihat bagaimana array dapat digunakan untuk menyimpan data tunggal, data tabel, maupun data kompleks dalam array multi dimensi. Melalui pemahaman yang tinggi di bidang array, seorang programer dapat mengakses serta memanipulasi data dengan lebih efisien serta optimalisasi kerja dalam pengembangan aplikasi yang lebih canggih. 

## Referensi

Ed.D, P. Z., & Afifah, W. (2021). Analisis Konten Etnografi & Grounded 
Theory, dan Hermeneutika Dalam Penelitian. Jakarta Timur: PT Bumi 
Askara.

Hanief, S., & Jepriana, I. (2020). Konsep Algoritme dan Aplikasinya Dalam 
Bahasa Pemrograman C++. Penerbit Andi. Yogyakarta: Andi.
