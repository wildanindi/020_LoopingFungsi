#include <iostream>
using namespace std;

int main(){



    int i;
    string nama[5];

    for (i = 150; i > 100; i-=10)
    {
    cout << i << ". " << "Selamat Berbuka" << endl;
    }

    cout << "Nilai i terakhir = " << i << endl;

    for (i = 0; i < 5; i++){
        cout << "Masukkan Nama ke-" << i << endl;
        cin >> nama[i];
    }

    for (i = 0; i < 5; i++){
        cout << "Nama ke-" << i << ": " << nama[i] << endl;
    }
}