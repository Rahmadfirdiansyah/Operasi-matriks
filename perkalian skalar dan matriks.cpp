#include <iostream>
using namespace std;

int main()
{
    cout << "Perkalian Skalar dan Matriks\n";

    int bilangan[4][3];
//program looping untuk memasukkan input nilai matriks
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Masukkan Angka Matriks A ke " << i + 1 << "," << j + 1 << ": ";
            cin >> bilangan[i][j];
        }
        cout << endl;
    }
//OUTPUT TABEL MATRIKS
    cout << "===== Matriks ====\n";
    for (int k = 0; k < 4; k++)
    {
        if (k < 4)
        {
            cout << " ";
        }

        for (int l = 0; l < 3; l++)
        {
            cout << " " << bilangan[k][l] << "\t";
        }

        if (k < 4)
        {
            cout << " ";
        }
        cout << endl;
    }
    cout << "===== Matriks ====\n\n";
//PERKALIAN SKALAR
    int hasil[4][3];
    int k;

    cout << "Masukkan Nilai K: ";
    cin >> k;
    cout << "\n";
    cout << "===== Hasil =====\n";

    for (int m = 0; m < 4; m++)
    {
        if (m < 4)
        {
            cout << " ";
        }
        for (int n = 0; n < 3; n++)
        {
            hasil[m][n] = k * bilangan[m][n];
            cout << " " << hasil[m][n] << "\t";
        }
        if (m < 4)
        {
            cout << " ";
        }
        cout << endl;
    }
    cout << "===== Hasil =====\n";
    return 0;
}
