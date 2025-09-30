#pragma once
#include "Manusia.h"

class Mekanik : public Manusia {
private:
    string _spesialisasi;
    int _pengalamanTahun;
public:
    Mekanik(string nama, string alamat, string spesialisasi, int pengalamanTahun);
    string getSpesialisasi();
};
