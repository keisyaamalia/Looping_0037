#include <iostream>
using namespace std;

int main(){
    float nilB, nilM, rerata;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB + nilM) / 2;

if (!(rerata < 60) )
        status = "Lulus";
    else
        status = "Tidak lulus";

    cout<<"Nilai rata-rata = "<<rerata<<endl;
}