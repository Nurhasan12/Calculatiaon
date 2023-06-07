#include <iostream>
using namespace std;

int main(){
    string Nama;
    float Tugas, UTS, UAS, Total_Nilai, Rata_Rata;
    {
        cout<<"Menghitung nilai rata-rata :"<< endl;

        cout<<"Nama Mahasiswa :";
        cin >> Nama;

        cout<<"Nilai Tugas =";
        cin >> Tugas;

        cout<<"Nilai UTS =";
        cin >> UTS;

        cout<<"Nilai UAS =";
        cin >> UAS;
    }
    cout<<"Nama mahasiswa =" << Nama <<endl;
    Total_Nilai =Tugas+UTS+UAS;
    cout<<"Total_Nilai ="<< Total_Nilai <<endl;
    Rata_Rata = Total_Nilai/3;
    cout<<"Rata-Rata ="<< Rata_Rata <<endl;
    return 0;

}