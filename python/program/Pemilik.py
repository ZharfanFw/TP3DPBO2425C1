from Bengkel import Bengkel
from Manusia import Manusia


class Pemilik(Manusia):
    def __init__(self, nama: str, alamat: str, bengkel: Bengkel):
        super().__init__(nama, alamat)
        self.bengkel = bengkel
