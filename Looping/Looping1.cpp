#include <iostream>
using namespace std;

int main(){



    int i;  // variabel
    string nama[5]; // variabel

    for (i = 150; i > 100; i-=10) //prosedur perulangan yang menggunakan for
    {
    cout << i << ". " << "Selamat Berbuka" << endl;
    }

    cout << "Nilai i terakhir = " << i << endl;

    for (i = 0; i < 5; i++){    // prosedur perulangan yang menggunakan for
        cout << "Masukkan Nama ke-" << i << endl;
        cin >> nama[i];
    }

    for (i = 0; i < 5; i++){    // prosedur perulangan yang menggunakan for
        cout << "Nama ke-" << i << ": " << nama[i] << endl;
    }
}