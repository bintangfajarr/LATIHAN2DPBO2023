<?php
require("Mahasiswa.php");


$listmhs = array();
$mhs = new Mahasiswa();

$mhs->setNama("Muhammad Cahyana Bintang Fajar");
$mhs->setNIK("321336789754");
$mhs->setjenis_kelamin("laki-laki");
$mhs->setasal_universitas("UPI");
$mhs->setemail_edu("upi.edu");
$mhs->setNIM("2102665");
$mhs->setProdi("Ilmu Komputer");
$mhs->setFakultas("FPMIPA");
array_push($listmhs, $mhs);

$mhs = new Mahasiswa();
$mhs->setNama("Zalfa Julia R");
$mhs->setNIK("321333345343");
$mhs->setjenis_kelamin("Perempuan");
$mhs->setasal_universitas("UPI");
$mhs->setemail_edu("upi.edu");
$mhs->setNIM("2102665");
$mhs->setProdi("IPSE");
$mhs->setFakultas("FPMIPA");
array_push($listmhs, $mhs);



foreach ($listmhs as $a) {
    echo "<br>";
    echo "Nama        : " . $a->getNama() . "<br>";
    echo "NIK        : " . $a->getNIK() . "<br>";
    echo "Jenis Kelamin       : " . $a->getjenis_kelamin() . "<br>";
    echo "Asal Universitas       : " . $a->getasal_universitas() . "<br>";
    echo "Email Edu       : " . $a->getemail_edu() . "<br>";
    echo "NIM        : " . $a->getNIM() . "<br>";
    echo "Prodi       : " . $a->getProdi() . "<br>";
    echo "Fakultas    : " . $a->getFakultas() . "<br>";
    echo "<br>";
}
