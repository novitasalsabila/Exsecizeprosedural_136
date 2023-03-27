#include <iostream>
using namespace std;

int main()
{
    int n;
    string nama[20], status[20];
    double mtk[20], inggris[20], rerata[20];

    cout << "Masukan Jumlah Data = ";
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++) {
        cout << endl;

        cout << "Data ke-" << i + 1 << endl;
        cout << "Masukan Nama = ";
        cin >> nama[i];
        cout << "Masukan Nilai Matematika = ";
        cin >> mtk[i];
        cout << "Masukan Nilai Inggris = ";
        cin >> inggris[i];

        rerata[i] = (mtk[i] + inggris[i]) / 2;

        if (rerata[i] >= 70 && mtk[i] >= 80) {
            status[i] = "Lulus";
        }
        else {
            status[i] = "Tidak Lulus";
        }
    }
    cout << endl;
    cout << "DAFTAR SISWA" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "No    Nama           Nilai Rata           Status         " << endl;
    cout << "-------------------------------------------" << endl;

    for (int i = 0; i < n;i++) {
        cout << i + 1 << "   " << nama[i] << "            " << rerata[i] << "          " << status[i] << endl;
        cout << "-------------------------------------------" << endl;
    }

}



