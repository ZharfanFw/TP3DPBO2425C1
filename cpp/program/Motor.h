#pragma once
#include "Kendaraan.h"

class Motor : public Kendaraan {
private:
    string _tipeMotor;
public:
    Motor(string platNomor, string merk, int tahun, string model, int kapasitasMesin, string tipeMotor);
};
