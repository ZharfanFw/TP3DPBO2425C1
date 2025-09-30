#include "Bengkel.h"

Bengkel::Bengkel(string namaBengkel, string alamatBengkel)
    : _namaBengkel(namaBengkel), _alamatBengkel(alamatBengkel) {}

Bengkel::~Bengkel() {
    for (Servis* s : _daftarServis) {
        delete s;
    }
    _daftarServis.clear();
}

string Bengkel::getNamaBengkel() { 
    return _namaBengkel; 
}
string Bengkel::getAlamatBengkel() { 
    return _alamatBengkel; 
}
vector<Servis*>& Bengkel::getDaftarServis() { 
    return _daftarServis; 
}
void Bengkel::addServis(Servis* servis) { 
    _daftarServis.push_back(servis); 
}
