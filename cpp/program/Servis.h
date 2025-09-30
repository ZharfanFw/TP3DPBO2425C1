#pragma once
#include <string>
#include "Mekanik.h"
#include "Kendaraan.h"

using namespace std;

class Servis {
private:
    string _jenisServis;
    double _biaya;
    Mekanik* _mekanik;
    Kendaraan* _kendaraan;
public:
    Servis(string jenisServis, double biaya, Mekanik* mekanik, Kendaraan* kendaraan);
    string getJenisServis();
    double getBiaya();
    Mekanik* getMekanik();
    Kendaraan* getKendaraan();
};
