#include <bits/stdc++.h>
#include "SivitasAkademik.cpp"
using namespace std;
class Mahasiswa : public SivitasAkademik
{
private:
    string NIM, fakultas, prodi;

public:
    Mahasiswa()
    {
        this->NIM = "";
        this->fakultas = "";
        this->prodi = "";
    };
    Mahasiswa(string NIM, string fakultas, string prodi)
    {
        this->NIM = NIM;
        this->fakultas = fakultas;
        this->prodi = prodi;
    }
    void setNIM(string NIM)
    {
        this->NIM = NIM;
    }
    void setFakultas(string fakultas)
    {
        this->fakultas = fakultas;
    }
    void setProdi(string prodi)
    {
        this->prodi = prodi;
    }
    string getNIM() { return this->NIM; }
    string getFakultas() { return this->fakultas; }
    string getProdi() { return this->prodi; }
    ~Mahasiswa(){

    };
};
