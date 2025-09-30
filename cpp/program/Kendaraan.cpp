#include "Kendaraan.h"

Kendaraan::Kendaraan(string platNomor, string merk, int tahun, string model, int kapasitasMesin)
    : _platNomor(platNomor), _merk(merk), _tahun(tahun), _model(model), _kapasitasMesin(kapasitasMesin) {}

string Kendaraan::getPlatNomor() { 
    return _platNomor; 
}
string Kendaraan::getMerk() { 
    return _merk; 
}
string Kendaraan::getModel() { 
    return _model; 
}
