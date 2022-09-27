#include <iostream>

using namespace std;

int main(){
  int i, j, baris, kolom, matriks[10][10], transpose[10][10];
//input baris dan kolom
  cout << "Masukkan jumlah baris matriks: ";
  cin >> baris;
  cout << "Masukkan jumlah kolom matriks: ";
  cin >> kolom;
//masukkan nilai
  cout << "Masukkan elemen matriks\n";
  for (i = 0; i < baris; i++){
    for (j = 0; j < kolom; j++){
      cin  >> matriks[i][j];
    }
  }
//--------//
//nilai akan di transpose melalui pengulangan
  for (i = 0; i < baris; i++){
    for (j = 0; j < kolom; j++){
      transpose[j][i] = matriks[i][j];
    }
  }
//--------//
//output tabel transpose
  cout << "Hasil Transpose Matriks: \n";
  for (i = 0; i < kolom; i++){
    for (j = 0; j < baris; j++){
      cout << transpose[i][j] << "\t";
    }
    cout << endl;
  }
}
