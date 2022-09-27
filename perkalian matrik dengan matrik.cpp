#include <iostream>
using namespace std;
int main() {
	//tipe_data
  int matriks1[10][10], matriks2[10][10], hasil[10][10];
  int i, j, k, baris1, kolom1, baris2, kolom2, jumlah = 0;
//input jumlah baris dan kolom b1,k1 dan b2,k1
  cout << "Masukkan jumlah baris matriks pertama: ";
  cin >> baris1;
  cout << "Masukkan jumlah kolom matriks pertama: ";
  cin >> kolom1;
  cout << "Masukkan jumlah baris matriks kedua: ";
  cin >> baris2;
  cout << "Masukkan jumlah kolom matriks kedua: ";
  cin >> kolom2;
  //jika kolom 1 tidak sama dengan kolom 2 maka tidak bisa dikalikan
  if(kolom1 != baris2){
    cout << "Matriks tidak dapat dikalikan satu sama lain.\n";
  } else {
  	//input nilai matrik pertama dan kedua
    cout << "Masukkan elemen matriks pertama: \n";
    for(i = 0; i < baris1; i++){
      for(j = 0; j <kolom1; j++){
        cin >> matriks1[i][j];
      }
    }
    cout << "Masukkan elemen matriks kedua: \n";
    for(i = 0; i < baris2; i++){
      for(j = 0; j < kolom2; j++){
        cin >> matriks2[i][j];
      }
    }
    //-------------//
    //program pengalian kedua matrik
    for(i = 0; i < baris1; i++){
      for(j = 0; j < kolom2; j++){
        for(k = 0; k < baris2; k++){
          jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
        }
        hasil[i][j] = jumlah;
        jumlah = 0;
      }
    }
    //output
    
    cout << "Hasil perkalian matriks: \n";
    for(i = 0; i < baris1; i++){
      for(j = 0; j < kolom2; j++){
        cout << hasil[i][j] << "\t";
      }
      cout << endl;
    }
  }
  
  return 0;
}
