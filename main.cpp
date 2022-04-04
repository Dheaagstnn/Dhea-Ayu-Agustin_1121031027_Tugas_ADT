//Nama  :Dhea Ayu Agustin
//NIM   :1121031027
//Kelas : Informatika A
//Deskripsi : memasukan jam, menit, detik dan membuat fungsi tambahan yaitu fungsi isValid untuk mengecek apakah waktu yang diinputkan valid atau tidak
#include <iostream>

#include <windows.h>

using namespace std;

int main()

{

    clock setJam;

    clock setMenit;

    clock setDetik;

    cout << "Masukan Jam : ";

    cin >> setJam.jam;

    int hh = getJam(setJam.jam);


    cout << "Masukan Menit : ";

    cin >> setMenit.menit;

    int jj = getMenit(setMenit.menit);


    cout << "Masukan Detik : ";

    cin >> setDetik.detik;

    int dd = getDetik(setDetik.detik);


    if (0 <= hh <= 23 && 0 <= jj <= 59 && 0 <= dd <= 59){

        cout << "Benar \n";

        cout << "Jam : " << hh << " Menit : " << jj << " Detik : " << dd;

    }else {

        cout << "Salah";

    }

    return 0;

};
