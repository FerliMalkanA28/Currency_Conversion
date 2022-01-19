#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main(){
    int Pilihan, Asal, Tujuan;
    double Nominal_1, Nominal_2, Rupiah, US_Dollar, Euro, Poundsterling;
    char Ulang;

    do {                                                                            
        cout << "==================================" << endl;
        cout << "   Aplikasi Konversi Finansial    " << endl;
        cout << "==================================" << endl;

        cout << endl;

        cout << "Menu : " << endl;
        cout << "1. Konversi Mata Uang" << endl;                                                                                                        
        cout << "2. Konverwsi Cryptocurrency" << endl;
        cout << "Piilihan : " << endl;
        cin  >>  Pilihan;

        if (Pilihan == 1){
            cout << "Konversi Mata Uang" << endl;
            cout << endl;                                           
            cout << "Pilihan Mata Uang" << endl;
            cout << "1. Rupiah" << endl;                              
            cout << "2. Dollar" << endl;
            cout << "3. Euro" << endl;
            cout << "4. Poundsterling" << endl;
            cout << "Mata Uang Asal \t: " << endl;
            cin  >> Asal;
            cout << "Mata Uang Tujuan \t: " << endl;
            cin  >> Tujuan;

            cout << "Masukan Nominal Asal : " << endl;
            cin  >> Nominal_1;
            
            if (Asal == 1){
                if (Tujuan == 2){
                    cout << Nominal_1 / 14000;
                }
                else if (Nominal_1 == 3){
                    cout << Asal / 20000;
                }
                else if (Nominal_1 == 4){
                    cout << Asal / 22000;
                }
                else {
                    cout << "Error";
                }
            }

            
        }



    } while (Ulang == 'Y' || Ulang == 'y');

}
