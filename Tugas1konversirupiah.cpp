#include <iostream>
#include <iomanip> // ditambah untuk mengatur presisi desimal
using namespace std;

int main(){

    cout << "========================="<< endl;
    cout << "Nama : Nurhasan" << endl;
    cout << "NIM  : 32602200014" << endl;
    cout << "========================="<< endl;

    double rupiah, dollar, yen, poundsterling, euro;
    dollar = 11400; yen = 115; poundsterling = 18400; euro = 15400;
    cout << "=====PROGRAM MENGKONVERSI RUPIAH KE DOLAR, YEN, POUNDSTERLING, DAN EURO " << endl;
    cout << "Masukkan nilai rupiah : ";
    cin >> rupiah;
    cout << "===== HASIL KONVERSI ====="<<endl;
    cout << fixed << setprecision(2); // untuk mengatur presisi menjadi 1 angka desimal
    cout << rupiah << " Rupiah = " << rupiah/dollar << " dollar\n\n";
    cout << rupiah << " Rupiah = " << rupiah/yen << " yen\n\n";
    cout << rupiah << " Rupiah = " << rupiah/poundsterling << "poundsterling\n\n";
    cout << rupiah << " Rupahh = " << rupiah/euro << "euro\n\n";
    return 0;
}