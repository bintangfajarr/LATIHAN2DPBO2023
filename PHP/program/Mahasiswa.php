<?php
require("SivitasAkademik.php");
class Mahasiswa extends SivitasAkademik
{
    private $NIM;
    private $prodi;
    private $fakultas;

    public function __construct($NIM = "", $prodi = "", $fakultas = "")
    {
        $this->NIM = $NIM;
        $this->prodi = $prodi;
        $this->fakultas = $fakultas;
    }
    public function setNIM($NIM)
    {
        $this->NIM = $NIM;
    }
    public function setProdi($prodi)
    {
        $this->prodi = $prodi;
    }
    public function setFakultas($fakultas)
    {
        $this->fakultas = $fakultas;
    }
    public function getNIM()
    {
        return $this->NIM;
    }
    public function getProdi()
    {
        return $this->prodi;
    }
    public function getFakultas()
    {
        return $this->fakultas;
    }
}
