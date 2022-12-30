#include <iostream>
using namespace std;
 
int main(){
    cout << "UAS PENGANTAR TEKNOLOGI INFORMASI" << endl;
    cout << "A=Luas\n" << endl;
    cout << "RUMUS= phi x r x r" << endl;
    cout << "1. Arif Frima Ari Suwadji - 221011700443" << endl;
    cout << "PROGRAM C++ MENGHITUNG LUAS LINGKARAN" << endl;
    cout << "============================================" << endl;
    cout << endl;

    float r, luas;
    const float phi = 3.14;

    cout << "Input jari-jari lingkaran: ";
    cin >> r;
    luas = phi * r * r;
    cout << "Luas Lingkaran = "<< luas << endl;
    return 0;
}