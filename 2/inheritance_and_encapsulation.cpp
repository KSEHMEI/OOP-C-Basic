#include <iostream>
#include <string>

using namespace std;

class Binatang
{
private:
    int jumlah = 1000;

protected:
    string jenis;

public:
    void makan()
    {
        cout << "Hidup untuk makan" << endl;
    }

    void berjalan()
    {
        cout << "Jalan jalan" << endl;
    }
};

class Burung : public Binatang
{
public:
    void addJenis(string value)
    {
        this->jenis = value;
    }

    void terbang()
    {
        cout << "terbang terbang" << endl;
    }
};

class Buaya : public Binatang
{
public:
    void addJenis(string value)
    {
        this->jenis = value;
    }

    void berenang()
    {
        cout << "kalo aku chat ada yang marah engga ?" << endl;
    }
};

int main()
{

    //Inheritance
    
    Binatang omnivora;
    Burung garuda;
    Buaya darat;

    omnivora.berjalan();
    garuda.berjalan();
    darat.makan();

    // garuda.berenang();
    darat.berenang();

    //Encapsulation

    // cout<<omnivora.jumlah;
    // cout<<omnivora.jenis;

    garuda.addJenis("unggas");

    return 0;
}