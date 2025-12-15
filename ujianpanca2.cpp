#include <iostream>#include <iostream>
using namespace std;

int main() {
    int bilangan;

    cout << "Masukkan bilangan : ";
    cin >> bilangan;

    if (bilangan % 2 != 0) {
        cout << "ganjil" << endl;
    }
    else {
        cout << "genap" << endl;
    }

    if (bilangan > 10) {
        cout << "diatas 10" << endl;
    }
    else {
        cout << "dibawah atau sama dengan 10" << endl;
    }

    return 0;
}


