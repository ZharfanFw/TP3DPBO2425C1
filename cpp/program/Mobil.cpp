#include "Mobil.h"

Mobil::Mobil(string platNomor, string merk, int tahun, string model, int kapasitasMesin, string tipeMobil, int jumlahPintu)
    : Kendaraan(platNomor, merk, tahun, model, kapasitasMesin), _tipeMobil(tipeMobil), _jumlahPintu(jumlahPintu) {}
