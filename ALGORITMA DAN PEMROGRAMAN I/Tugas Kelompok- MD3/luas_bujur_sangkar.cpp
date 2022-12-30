#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
main(){
    cout << "TUGAS ALGORITMA DAN PEMROGRAMAN I" << endl;
    cout << "KELOMPOK I\n" << endl;
    cout << "1. Arif Frima Ari Suwadji - 221011700443" << endl;
    cout << "2. Dipa Sonata - 221011700093" << endl;
    cout << "3. Noufal Farhan - 221011700463" << endl;
    cout << "4. Rangga Dwi Mardika - 221011700473" << endl;
    cout << "5. Rini Safitri - 221011700088\n" << endl;
	cout << "PROGRAM C++ MENGHITUNG LUAS BUJUR SANGKAR" << endl;
	cout << "============================================" << endl;
    cout << endl;
    
    int   Sisi1, Sisi2, Luas;

    cout << "\n Masukkan Nilai Sisi: ";
    cin >> Sisi1;
    cout << "\n Masukkan Nilai Sisi: ";
    cin >> Sisi2;
    Luas=Sisi1*Sisi2;
    cout << "\n Luas Bujur Sangkar:"<<Luas;
    getch();
}