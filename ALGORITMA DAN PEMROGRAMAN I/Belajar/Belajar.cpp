#include <conio.h>
#include <iostream>
#include <math.h>

void main()
{
    int x,y,z;
    // clrscr();
    std::cout << "\n Input nilai x : "; std::cin >> x;
    std::cout << "\n Input nilai y : "; std::cin >> y;
    z = x + y;
    std::cout << "\n Hasil penjumlahan : " << z;
    getch();
}