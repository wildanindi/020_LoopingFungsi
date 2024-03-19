#include <iostream>
using namespace std;

int main (){
    int bilangan;

    srand(time(0)); // untuk mengacak angka dari 0

    bilangan = rand() % 10; // batasan dari angka yang di acak

    while (bilangan > 4)
    {
        cout << "Bilangan lebih dari 4" << endl;
        bilangan = rand() % 10;
        cout << "Bilangannya = " << bilangan << endl;

    }

    cout << "Bilangan Terakhir = " << bilangan << endl;
}