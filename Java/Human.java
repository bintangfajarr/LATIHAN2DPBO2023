class Human {
    private String NIK;
    private String nama;
    private String jenis_kelamin;

    Human() {

    }

    Human(String NIK, String nama, String jenis_kelamin) {
        this.NIK = NIK;
        this.nama = nama;
        this.jenis_kelamin = jenis_kelamin;
    }

    public void setNIK(String NIK) {
        this.NIK = NIK;
    }

    public void setnama(String nama) {
        this.nama = nama;
    }

    public void setjenis_kelamin(String jenis_kelamin) {
        this.jenis_kelamin = jenis_kelamin;
    }

    public String getNIK() {
        return this.NIK;
    }

    public String getnama() {
        return this.nama;
    }

    public String getjenis_kelamin() {
        return this.jenis_kelamin;
    }
}