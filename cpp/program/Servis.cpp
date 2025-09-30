#include "Servis.h"

Servis::Servis(string jenisServis, double biaya, Mekanik* mekanik, Kendaraan* kendaraan)
    : _jenisServis(jenisServis), _biaya(biaya), _mekanik(mekanik), _kendaraan(kendaraan) {}

string Servis::getJenisServis() { 
    return _jenisServis; 
}
double Servis::getBiaya() { 
    return _biaya; 
}
Mekanik* Servis::getMekanik() { 
    return _mekanik; 
}
Kendaraan* Servis::getKendaraan() { 
    return _kendaraan; 
}
