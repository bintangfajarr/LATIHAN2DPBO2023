from Human import Human


class SivitasAkademik(Human):
    __asal_universitas = ""
    __email_edu = ""

    def __init__(self, asal_universitas="", email_edu=""):
        self.__asal_universitas = asal_universitas
        self.__email_edu = email_edu

    def getemail_edu(self):
        return self.__email_edu

    def getasal_universitas(self):
        return self.__asal_universitas

    def setasal_universitas(self, asal_universitas):
        self.__asal_universitas = asal_universitas

    def setemail_edu(self, email_edu):
        self.__email_edu = email_edu
