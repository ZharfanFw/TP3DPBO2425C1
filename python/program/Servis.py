from Kendaraan import Kendaraan
from Mekanik import Mekanik


class Servis:
    def __init__(
        self, jenis_servis: str, biaya: float, mekanik: Mekanik, kendaraan: Kendaraan
    ):
        self.jenis_servis = jenis_servis
        self.biaya = biaya
        self.mekanik = mekanik
        self.kendaraan = kendaraan
