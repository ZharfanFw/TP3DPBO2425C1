#include <iostream>
#include "Bengkel.h"
#include "Pemilik.h"
#include "Mekanik.h"
#include "Mobil.h"
#include "Motor.h"

using namespace std;

int main() {
    // ====== DATA BENGKEL & PEMILIK ======
    Bengkel* bengkel = new Bengkel("Bengkel Jaya Motor", "Jl. Merdeka No. 123");
    Pemilik* pemilik = new Pemilik("Budi Santoso", "Bandung", bengkel);

    // ====== DATA MEKANIK ======
    Mekanik* mekanik1 = new Mekanik("Andi", "Cimahi", "Mesin Mobil", 5);
    Mekanik* mekanik2 = new Mekanik("Rudi", "Cibiru", "Motor", 3);

    // ====== DATA KENDARAAN ======
    Kendaraan* mobil1 = new Mobil("D1234AB", "Toyota", 2020, "Avanza", 1500, "MPV", 5);
    Kendaraan* motor1 = new Motor("Z9876XY", "Honda", 2019, "CBR150R", 150, "Sport");

    // ====== DATA SERVIS ======
    Servis* servis1 = new Servis("Ganti Oli Mobil", 350000, mekanik1, mobil1);
    Servis* servis2 = new Servis("Servis Mesin Motor", 250000, mekanik2, motor1);

    // Masukkan servis ke dalam bengkel
    bengkel->addServis(servis1);
    bengkel->addServis(servis2);

    // ====== CETAK DATA ======
    cout << "=== DATA PEMILIK BENGKEL ===" << endl;
    cout << "Nama Pemilik : " << pemilik->getNama() << endl;
    cout << "Alamat       : " << pemilik->getAlamat() << endl;
    cout << "Bengkel      : " << pemilik->getBengkel()->getNamaBengkel() << endl;
    cout << endl;

    cout << "=== DATA BENGKEL ===" << endl;
    cout << "Nama Bengkel : " << bengkel->getNamaBengkel() << endl;
    cout << "Alamat       : " << bengkel->getAlamatBengkel() << endl;
    cout << endl;

    cout << "=== DAFTAR SERVIS DI BENGKEL ===" << endl;
    for (Servis* s : bengkel->getDaftarServis()) {
        cout << "Jenis Servis : " << s->getJenisServis() << endl;
        cout << "Biaya        : Rp " << s->getBiaya() << endl;
        cout << "Mekanik      : " << s->getMekanik()->getNama() << " (Spesialisasi: " << s->getMekanik()->getSpesialisasi() << ")" << endl;
        cout << "Kendaraan    : " << s->getKendaraan()->getMerk() << " " << s->getKendaraan()->getModel() << " (" << s->getKendaraan()->getPlatNomor() << ")" << endl;
        cout << "---------------------------------" << endl;
    }

    // ====== HAPUS MEMORI ======
    delete pemilik;
    delete bengkel;
    delete mekanik1;
    delete mekanik2;
    delete mobil1;
    delete motor1;

    return 0;
}
