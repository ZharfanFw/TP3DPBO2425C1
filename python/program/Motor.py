from Kendaraan import Kendaraan


class Motor(Kendaraan):
    def __init__(self, plat_nomor, merk, tahun, model, kapasitas_mesin, tipe_motor):
        super().__init__(plat_nomor, merk, tahun, model, kapasitas_mesin)
        self.tipe_motor = tipe_motor
