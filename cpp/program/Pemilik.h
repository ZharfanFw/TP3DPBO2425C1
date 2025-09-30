#pragma once
#include "Manusia.h"
#include "Bengkel.h"

class Pemilik : public Manusia {
private:
    Bengkel* _bengkel;
public:
    Pemilik(string nama, string alamat, Bengkel* bengkel);
    Bengkel* getBengkel();
};
