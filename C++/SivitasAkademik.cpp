#include <bits/stdc++.h>
#include "Human.cpp"
using namespace std;
class SivitasAkademik : public Human
{
private:
    string asal_universitas, email_edu;

public:
    SivitasAkademik()
    {
        this->asal_universitas = "";
        this->email_edu = "";
    };
    SivitasAkademik(string asal_universitas, string email_edu)
    {
        this->asal_universitas = asal_universitas;
        this->email_edu = email_edu;
    }
    void setasal_universitas(string asal_universitas)
    {
        this->asal_universitas = asal_universitas;
    }
    void setemail_edu(string email_edu)
    {
        this->email_edu = email_edu;
    }
    string getasal_universitas() { return this->asal_universitas; }
    string getemail_edu() { return this->email_edu; }

    ~SivitasAkademik(){};
};
