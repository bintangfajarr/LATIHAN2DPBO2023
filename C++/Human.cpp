#include <bits/stdc++.h>
using namespace std;
class Human
{
private:
    string NIK, nama, jenis_kelamin;

public:
    Human()
    {

        this->NIK = "";
        this->nama = "";
        this->jenis_kelamin = "";
    };

    Human(string NIK, string nama, string jenis_kelamin)
    {
        this->NIK = NIK;
        this->nama = nama;
        this->jenis_kelamin = jenis_kelamin;
    }
    void setNIK(string NIK)
    {
        this->NIK = NIK;
    }
    void setnama(string nama)
    {
        this->nama = nama;
    }
    void setjenis_kelamin(string jenis_kelamin)
    {
        this->jenis_kelamin = jenis_kelamin;
    }
    string getNIK() { return this->NIK; }
    string getnama() { return this->nama; }
    string getjenis_kelamin() { return this->jenis_kelamin; }

    ~Human(){};
};
