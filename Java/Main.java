import java.util.Scanner;
import java.util.ArrayList;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String NIM, NIK, nama, jenis_kelamin, fakultas, prodi, asal_universitas, email_edu;
        ArrayList<Mahasiswa> listmhs;
        Mahasiswa mhs = new Mahasiswa();
        listmhs = new ArrayList<Mahasiswa>();
        System.out.println("Masukkan Jumlah Data yang ingin anda input : ");
        int n;
        n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            System.out.println("Masukkan data ke " + (i + 1));
            nama = sc.next();
            NIK = sc.next();
            jenis_kelamin = sc.next();
            asal_universitas = sc.next();
            email_edu = sc.next();
            NIM = sc.next();
            prodi = sc.next();
            fakultas = sc.next();

            mhs.setnama(nama);
            mhs.setNIK(NIK);
            mhs.setjenis_kelamin(jenis_kelamin);
            mhs.setasal_universitas(asal_universitas);
            mhs.setemail_edu(email_edu);
            mhs.setNIM(NIM);
            mhs.setFakultas(fakultas);
            mhs.setProdi(prodi);
            listmhs.add(mhs);
        }
        for (int i = 0; i < listmhs.size(); i++) {
            System.out.println("Data Mahasiswa ke-" + (i + 1));
            System.out.println("Nama : " + listmhs.get(i).getnama());
            System.out.println("NIK : " + listmhs.get(i).getNIK());
            System.out.println("Jenis Kelamin : " + listmhs.get(i).getjenis_kelamin());
            System.out.println("Asal Universitas : " + listmhs.get(i).getasal_universitas());
            System.out.println("Email Edu : " + listmhs.get(i).getemail_edu());
            System.out.println("NIM : " + listmhs.get(i).getNIM());
            System.out.println("Prodi : " + listmhs.get(i).getProdi());
            System.out.println("Fakultas : " + listmhs.get(i).getFakultas());
            System.out.println();
        }

    }
}
