from Servis import Servis


class Bengkel:
    def __init__(self, nama_bengkel, alamat_bengkel):
        self.nama_bengkel = nama_bengkel
        self.alamat_bengkel = alamat_bengkel
        self.daftar_servis = []

    def add_servis(self, servis: Servis):
        self.daftar_servis.append(servis)
