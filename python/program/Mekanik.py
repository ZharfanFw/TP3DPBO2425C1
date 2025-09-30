from Manusia import Manusia


class Mekanik(Manusia):
    def __init__(self, nama, alamat, spesialisasi, pengalaman_tahun):
        super().__init__(nama, alamat)
        self.spesialisasi = spesialisasi
        self.pengalaman_tahun = pengalaman_tahun
