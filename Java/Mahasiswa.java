class Mahasiswa extends SivitasAkademik {
    private String NIM;
    private String fakultas;
    private String prodi;

    Mahasiswa() {

    }

    Mahasiswa(String NIM, String fakultas, String prodi) {
        this.NIM = NIM;
        this.fakultas = fakultas;
        this.prodi = prodi;
    }

    public void setNIM(String NIM) {
        this.NIM = NIM;
    }

    public void setFakultas(String fakultas) {
        this.fakultas = fakultas;
    }

    public void setProdi(String prodi) {
        this.prodi = prodi;
    }

    public String getNIM() {
        return this.NIM;
    }

    public String getFakultas() {
        return this.fakultas;
    }

    public String getProdi() {
        return this.prodi;
    }
}
