#pragma once
#include <string>

using namespace std;

class Kendaraan {
private:
    string _platNomor;
    string _merk;
    int _tahun;
    string _model;
    int _kapasitasMesin;

public:
    Kendaraan(string platNomor, string merk, int tahun, string model, int kapasitasMesin);
    virtual ~Kendaraan() = default;

    string getPlatNomor();
    string getMerk();
    string getModel();
};
