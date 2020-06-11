#include <iostream>
#include <string>

using namespace std;

class Mahasiswa
{
public:
    string Nama;
    int NIM;

    void berbicara()
    {
        cout << "IRI BILANG BOSS" << endl;
    }

    void tampilkanData()
    {
        cout << "Nama Saya = " << this->Nama << endl;
        cout << "NIM Saya = " << this->NIM << endl;
    }
};

int main()
{
    //Dasar
    Mahasiswa gondes;

    gondes.Nama = "fapfap";
    gondes.NIM = 112233;

    // cout << "Nama Gondes = " << gondes.Nama << endl;
    // cout << "NIM Gondes = " << gondes.NIM << endl;

    gondes.berbicara();

    gondes.tampilkanData();

    cout << endl
         << endl;

    //Lanjutan
    Mahasiswa mendes[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Nama Mahasiswa Mendes " << i << ": ";
        cin >> mendes[i].Nama;
        cout << "NIM Mahasiswa Mendes " << i << ": ";
        cin >> mendes[i].NIM;
    }

    cout << endl
         << endl;

    // for (int i = 0; i < 3; i++)
    // {
    //     cout << "Nama Mahasiswa Mendes " << i << ": " << mendes[i].Nama << endl;
    //     cout << "NIM Mahasiswa Mendes " << i << ": " << mendes[i].NIM << endl;
    // }

    for (int i = 0; i < 3; i++)
    {
        mendes[i].tampilkanData();
    }

    return 0;
}