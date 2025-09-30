#pragma once
#include "Kendaraan.h"

class Mobil : public Kendaraan {
private:
    string _tipeMobil;
    int _jumlahPintu;
public:
    Mobil(string platNomor, string merk, int tahun, string model, int kapasitasMesin, string tipeMobil, int jumlahPintu);
};
