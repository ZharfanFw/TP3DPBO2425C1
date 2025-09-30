#pragma once
#include <string>
#include <vector>
#include "Servis.h"

using namespace std;

class Bengkel {
private:
    string _namaBengkel;
    string _alamatBengkel;
    vector<Servis*> _daftarServis;
public:
    Bengkel(string namaBengkel, string alamatBengkel);
    ~Bengkel();
    string getNamaBengkel();
    string getAlamatBengkel();
    vector<Servis*>& getDaftarServis();
    void addServis(Servis* servis);
};
