<?php
class Human
{
    private $NIK;
    private $nama;
    private $jenis_kelamin;

    public function __construct($NIK = "", $nama = "", $jenis_kelamin = "")
    {
        $this->NIK = $NIK;
        $this->nama = $nama;
        $this->jenis_kelamin = $jenis_kelamin;
    }

    public function setNIK($NIK)
    {
        $this->NIK = $NIK;
    }
    public function setNama($nama)
    {
        $this->nama = $nama;
    }
    public function setjenis_kelamin($jenis_kelamin)
    {
        $this->jenis_kelamin = $jenis_kelamin;
    }
    public function getNIK()
    {
        return $this->NIK;
    }
    public function getNama()
    {
        return $this->nama;
    }
    public function getjenis_kelamin()
    {
        return $this->jenis_kelamin;
    }
}
