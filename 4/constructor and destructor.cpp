#include <iostream>
#include <string>

using namespace std;

class mahasiswa
{
public:
    string NIM;
    string Nama;

    mahasiswa()
    {
        this->Nama = "Nama";
        this->NIM = "0000";
    }

    ~mahasiswa()
    {
        cout << "Hapus Data : " << this->Nama << endl;
    }
};

class mahasiswa2
{
public:
    string NIM;
    string Nama;

    mahasiswa2(string nama, string nim)
    {
        this->Nama = nama;
        this->NIM = nim;
    }

    ~mahasiswa2()
    {
        cout << "Hapus Data : " << this->Nama << endl;
    }
};

int main()
{

    mahasiswa gondes;

    gondes.NIM = "696969";
    gondes.Nama = "Mbah";

    cout << "NIM : " << gondes.NIM << endl;
    cout << "NAMA : " << gondes.Nama << endl;

    mahasiswa gondes2;

    cout << "NIM : " << gondes2.NIM << endl;
    cout << "NAMA : " << gondes2.Nama << endl;

    mahasiswa2 gondes3("Namaa","88888");

    cout << "NIM : " << gondes3.NIM << endl;
    cout << "NAMA : " << gondes3.Nama << endl;

    return 0;
}