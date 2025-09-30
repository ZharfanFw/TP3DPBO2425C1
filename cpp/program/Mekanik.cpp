#include "Mekanik.h"

Mekanik::Mekanik(string nama, string alamat, string spesialisasi, int pengalamanTahun)
    : Manusia(nama, alamat), _spesialisasi(spesialisasi), _pengalamanTahun(pengalamanTahun) {}

string Mekanik::getSpesialisasi() { 
    return _spesialisasi; 
}
