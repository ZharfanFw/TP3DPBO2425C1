#include "Pemilik.h"

Pemilik::Pemilik(string nama, string alamat, Bengkel* bengkel)
    : Manusia(nama, alamat), _bengkel(bengkel) {}

Bengkel* Pemilik::getBengkel() { 
    return _bengkel; 
}
