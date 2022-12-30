#include <iostream>
using namespace std;
 
int main(){
    cout << "TUGAS ALGORITMA DAN PEMROGRAMAN I" << endl;
    cout << "KELOMPOK I\n" << endl;
    cout << "1. Arif Frima Ari Suwadji - 221011700443" << endl;
    cout << "2. Dipa Sonata - 221011700093" << endl;
    cout << "3. Noufal Farhan - 221011700463" << endl;
    cout << "4. Rangga Dwi Mardika - 221011700473" << endl;
    cout << "5. Rini Safitri - 221011700088\n" << endl;
    cout << "Pengurangan dua buah matriks" << endl;
    cout << "============================================" << endl;
    cout << endl;

    int i, j, m, n, matriks1[10][10], matriks2[10][10], hasil[10][10];
    cout << "Masukkan Jumlah Baris Matriks: ";
    cin >> m;
    cout << "Masukkan Jumlah Kolom Matriks: ";
    cin >> n;
    cout << "Masukkan Elemen Matrix Pertama: \n";
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
        cin >> matriks1[i][j];
        }
    }
    cout << "Masukkan Elemen Matrix Kedua: \n";
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
        cin >> matriks2[i][j];
        }
    }
    cout << "Hasil Pengurangan 2 Buah Matrix: \n";
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
        hasil[i][j] = matriks1[i][j] - matriks2[i][j];
        cout << hasil[i][j] << "\t";
        }
        cout << endl;
    }
    
    return 0;
}