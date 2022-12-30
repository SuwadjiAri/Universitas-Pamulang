#include <iostream>
using namespace std;
 
int main(){
    cout << "UAS PENGANTAR TEKNOLOGI INFORMASI" << endl;
    cout << "P=Keliling" << endl;
    cout << "RUMUS= 2 x phi x r" << endl;
    cout << "1. Arif Frima Ari Suwadji - 221011700443" << endl;
    cout << "PROGRAM C++ MENGHITUNG KELILING LINGKARAN" << endl;
    cout << "============================================" << endl;
    cout << endl;

    float r, luas;
    const float phi = 3.14;

    cout << "Input jari-jari lingkaran: ";
    cin >> r;
    luas = 2 * phi * r;
    cout << "Keliling Lingkaran = "<< luas << endl;
    return 0;
}