# Import semua kelas yang akan dibuat objeknya
from Bengkel import Bengkel
from Mekanik import Mekanik
from Mobil import Mobil
from Motor import Motor
from Pemilik import Pemilik
from Servis import Servis

# Blok utama yang akan dieksekusi
if __name__ == "__main__":
    # ====== DATA BENGKEL & PEMILIK ======
    bengkel = Bengkel("Bengkel Jaya Motor", "Jl. Merdeka No. 123")
    pemilik = Pemilik("Budi Santoso", "Bandung", bengkel)

    # ====== DATA MEKANIK ======
    mekanik1 = Mekanik("Andi", "Cimahi", "Mesin Mobil", 5)
    mekanik2 = Mekanik("Rudi", "Cibiru", "Motor", 3)

    # ====== DATA KENDARAAN ======
    mobil1 = Mobil("D1234AB", "Toyota", 2020, "Avanza", 1500, "MPV", 5)
    motor1 = Motor("Z9876XY", "Honda", 2019, "CBR150R", 150, "Sport")

    # ====== DATA SERVIS ======
    servis1 = Servis("Ganti Oli Mobil", 350000, mekanik1, mobil1)
    servis2 = Servis("Servis Mesin Motor", 250000, mekanik2, motor1)

    # Masukkan servis ke dalam bengkel
    bengkel.add_servis(servis1)
    bengkel.add_servis(servis2)

    # ====== CETAK DATA ======
    print("=== DATA PEMILIK BENGKEL ===")
    print(f"Nama Pemilik : {pemilik.nama}")
    print(f"Alamat       : {pemilik.alamat}")
    print(f"Bengkel      : {pemilik.bengkel.nama_bengkel}")
    print()

    print("=== DATA BENGKEL ===")
    print(f"Nama Bengkel : {bengkel.nama_bengkel}")
    print(f"Alamat       : {bengkel.alamat_bengkel}")
    print()

    print("=== DAFTAR SERVIS DI BENGKEL ===")
    for s in bengkel.daftar_servis:
        print(f"Jenis Servis : {s.jenis_servis}")
        print(f"Biaya        : Rp {s.biaya}")
        print(
            f"Mekanik      : {s.mekanik.nama} (Spesialisasi: {s.mekanik.spesialisasi})"
        )
        print(
            f"Kendaraan    : {s.kendaraan.merk} {s.kendaraan.model} ({
                s.kendaraan.plat_nomor
            })"
        )
        print("---------------------------------")
