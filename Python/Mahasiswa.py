from SivitasAkademik import SivitasAkademik


class Mahasiswa(SivitasAkademik):
    __NIM = ""
    __prodi = ""
    __fakultas = ""

    def __init__(self, NIM="", prodi="", fakultas=""):
        self.__NIM = NIM
        self.__prodi = prodi
        self.__fakultas = fakultas

    def getNIM(self):
        return self.__NIM

    def getProdi(self):
        return self.__prodi

    def getFakultas(self):
        return self.__fakultas

    def setNIM(self, NIM):
        self.__NIM = NIM

    def setProdi(self, prodi):
        self.__prodi = prodi

    def setFakultas(self, fakultas):
        self.__fakultas = fakultas
