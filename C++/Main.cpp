#include <bits/stdc++.h>
#include "Mahasiswa.cpp"
using namespace std;
int main()
{
    vector<Mahasiswa> listmhs;
    Mahasiswa mhs;
    string nama, NIK, jenis_kelamin, asal_universitas, email_edu, NIM, prodi, fakultas;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> nama >> NIK >> jenis_kelamin >> asal_universitas >> email_edu >> NIM >> prodi >> fakultas;
        mhs.setnama(nama);
        mhs.setNIK(NIK);
        mhs.setjenis_kelamin(jenis_kelamin);
        mhs.setemail_edu(email_edu);
        mhs.setasal_universitas(asal_universitas);
        mhs.setNIM(NIM);
        mhs.setProdi(prodi);
        mhs.setFakultas(fakultas);
        listmhs.push_back(mhs);
    }
    for (int i = 0; i < listmhs.size(); i++)
    {
        cout << "Data Mahasiswa ke-" << i + 1 << endl;
        cout << "Nama : " << listmhs[i].getnama() << endl;
        cout << "NIK : " << listmhs[i].getNIK() << endl;
        cout << "Jenis Kelamin : " << listmhs[i].getjenis_kelamin() << endl;
        cout << "Asal Universitas : " << listmhs[i].getasal_universitas() << endl;
        cout << "Email Edu : " << listmhs[i].getemail_edu() << endl;
        cout << "NIM : " << listmhs[i].getNIM() << endl;
        cout << "Prodi : " << listmhs[i].getProdi() << endl;
        cout << "Fakultas : " << listmhs[i].getFakultas() << endl;
        cout << endl;
    }

    return 0;
}
