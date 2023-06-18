#include <iostream>
using namespace std;

int main(){
    float a,b,c,d,e,f,g,h,i;

    cout << "========================="<< endl;
    cout << "Nama : Nurhasan" << endl;
    cout << "NIM  : 32602200014" << endl;
    cout << "========================="<< endl;
    
    cout << "Masukkan 5 buah angka" << endl;
    cout << "Angka pertama :";
    cin >> a;
    cout << "Angka kedua   :";
    cin >> b;
    cout << "Angka ketiga  :";
    cin >> c;
    cout << "Angka keempat :";
    cin >> d;
    cout << "Angka kelima  :";
    cin >> e;
    f = a*b;
    g = d-e;
    h = c*g;
    i = f/h;

    cout << "..........HASIL PERHITUNGAN .........."<<endl;
    cout << a << "*" << b << "/" << c << "(" << d << "-" << e << ")";
    cout << "=" << f << "/" << c << "(" << g << ")" <<endl;
    cout << "\t=" << f << "/" << h << endl;
    cout << "\t=" << i << endl;
}