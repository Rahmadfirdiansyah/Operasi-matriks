#include <iostream>

using namespace std;

int main() {
  int i, j, baris, kolom, matriks1[10][10], matriks2[10][10], hasil[10][10];
//input jumlah baris dan kolom
  cout << "Masukkan jumlah baris matriks: ";
  cin >> baris;
  cout << "Masukkan jumlah kolom matriks: ";
  cin >> kolom;
//input nilai matrik pertama
  cout << "Masukkan elemen matrix pertama: \n";
  for(i = 0; i < baris; i++){
    for(j = 0; j < kolom; j++){
      cin >> matriks1[i][j];
    }
  }
  //input nilai matrik kedua
  cout << "Masukkan elemen matrix kedua: \n";
  for(i = 0; i < baris; i++){
    for(j = 0; j < kolom; j++){
      cin >> matriks2[i][j];
    }
  }
  //fungsi pengurangan kedua matrik
  cout << "hasil penjumlahan matrix: \n";
  for(i = 0; i < baris; i++){
    for(j = 0; j < kolom; j++){
      hasil[i][j] = matriks1[i][j] - matriks2[i][j];
      //output
      cout << hasil[i][j] << "\t";
    }
    cout << endl;
  }
  
  return 0;
}
//finish
