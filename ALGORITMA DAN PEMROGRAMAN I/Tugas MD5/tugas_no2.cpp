#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

main () {
    cout << "Silahkan masukkan angka : ";
    int angka;
    cin >> angka;
    if(angka % 2 == 0) {
        cout << "Tidak ada sisa" << endl;
    } else {
        cout << "Sisa: " << angka % 2 << endl;
    }
}