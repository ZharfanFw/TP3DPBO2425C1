#include "Manusia.h"

Manusia::Manusia(string nama, string alamat) : _nama(nama), _alamat(alamat) {}

string Manusia::getNama() { 
    return _nama; 
}
void Manusia::setNama(string nama) { 
    _nama = nama; 
}
string Manusia::getAlamat() { 
    return _alamat; 
}
void Manusia::setAlamat(string alamat) { 
    _alamat = alamat; 
}
