from Kendaraan import Kendaraan


class Mobil(Kendaraan):
    def __init__(
        self, plat_nomor, merk, tahun, model, kapasitas_mesin, tipe_mobil, jumlah_pintu
    ):
        super().__init__(plat_nomor, merk, tahun, model, kapasitas_mesin)
        self.tipe_mobil = tipe_mobil
        self.jumlah_pintu = jumlah_pintu
