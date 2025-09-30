#pragma once
#include <string>

using namespace std;

class Manusia {
private:
    string _nama;
    string _alamat;

public:
    Manusia(string nama, string alamat);
    virtual ~Manusia() = default;

    string getNama();
    void setNama(string nama);
    string getAlamat();
    void setAlamat(string alamat);
};
