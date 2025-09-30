#include "Motor.h"

Motor::Motor(string platNomor, string merk, int tahun, string model, int kapasitasMesin, string tipeMotor)
    : Kendaraan(platNomor, merk, tahun, model, kapasitasMesin), _tipeMotor(tipeMotor) {}
