class Human():
    __NIK = ""
    __nama = ""
    __jenis_kelamin = ""

    def __init__(self, NIK="", nama="", jenis_kelamin=""):
        self.__NIK = NIK
        self.__nama = nama
        self.__jenis_kelamin = jenis_kelamin

    def getNIK(self):
        return self.__NIK

    def getnama(self):
        return self.__nama

    def getjenis_kelamin(self):
        return self.__jenis_kelamin

    def setNIK(self, NIK):
        self.__NIK = NIK

    def setnama(self, nama):
        self.__nama = nama

    def setjenis_kelamin(self, jenis_kelamin):
        self.__jenis_kelamin = jenis_kelamin
