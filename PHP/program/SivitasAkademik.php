<?php
require("Human.php");
class SivitasAkademik extends Human
{
    private $asal_universitas;
    private $email_edu;

    public function __construct($asal_universitas = "", $email_edu = "")
    {
        $this->asal_universitas = $asal_universitas;
        $this->email_edu = $email_edu;
    }
    public function setasal_universitas($asal_universitas)
    {
        $this->asal_universitas = $asal_universitas;
    }
    public function setemail_edu($email_edu)
    {
        $this->email_edu = $email_edu;
    }
    public function getasal_universitas()
    {
        return $this->asal_universitas;
    }
    public function getemail_edu()
    {
        return $this->email_edu;
    }
}
