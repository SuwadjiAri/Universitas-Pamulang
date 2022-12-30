#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

main () {
    cout << "Kode   Jenis Minuman   Harga" << endl;
    printf("1       Milo           Rp 10.000\n");
    printf("2       Kopi           Rp  3.000\n");
    printf("3       Teh Manis      Rp  2.500\n");
    printf("4       Jus            Rp  5.000\n");
    cout << "Silahkan pilih menu apa saja yang ingin anda pesan : " << endl;
    int kode, jumlah, total;
    cout << "Masukkan kode minuman : ";
    cin >> kode;
    cout << "Silahkan masukkan jumlah pesanan : ";
    cin >> jumlah;
    switch (kode) {
        case 1:
            total = jumlah * 10000;
            break;
        case 2:
            total = jumlah * 3000;
            break;
        case 3:
            total = jumlah * 2500;
            break;
        case 4:
            total = jumlah * 5000;
            break;
        default:
            cout << "Kode yang anda masukkan salah" << endl;
            break;
    }
    if(total > 100000) {
        printf("Selamat anda mendapatkan diskon 15 persen\n");
        cout << "Total diskon : " << total * 0.15 << endl;
        total = total - (total * 15 / 100);
    }
    cout << "Total harga yang harus anda bayar adalah : " << total << endl;
    getch();
}