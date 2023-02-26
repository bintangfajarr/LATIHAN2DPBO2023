from Mahasiswa import Mahasiswa
# from Human import Human


__listmhs = []
# mhs = Human()
n = int(input())
for i in range(n):
    mhs = Mahasiswa()
    nama = input()
    NIK = input()
    jenis_kelamin = input()
    asal_universitas = input()
    email_edu = input()
    NIM = input()
    prodi = input()
    fakultas = input()
    mhs.setnama(nama)
    mhs.setNIK(NIK)
    mhs.setjenis_kelamin(jenis_kelamin)
    mhs.setasal_universitas(asal_universitas)
    mhs.setemail_edu(email_edu)
    mhs.setNIM(NIM)
    mhs.setProdi(prodi)
    mhs.setFakultas(fakultas)
    __listmhs.append(mhs)

for i in range(len(__listmhs)):
    print("Data Mahasiswa ke-", i+1)
    print("Nama : ", __listmhs[i].getnama())
    print("NIK : ", __listmhs[i].getNIK())
    print("Jenis Kelamin : ", __listmhs[i].getjenis_kelamin())
    print("Asal Universitas : ", __listmhs[i].getasal_universitas())
    print("Email Edu : ", __listmhs[i].getemail_edu())
    print("NIM : ", __listmhs[i].getNIM())
    print("Prodi : ", __listmhs[i].getProdi())
    print("Fakultas : ", __listmhs[i].getFakultas(), "\n")
