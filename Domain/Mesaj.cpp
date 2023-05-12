//
// Created by Oana on 22/05/2022.
//

#include "Mesaj.h"
#include <cstring>
using namespace std;

Mesaj::Mesaj() {
    this->id_m = 0;
    this->id1 = 0;
    this->id2 = 0;
}
Mesaj::Mesaj(int id_m,int id1, int id2, string mesaj) {
    this->id_m = id_m;
    this->id1 = id1;
    this->id2 = id2;
    this->mesaj = mesaj;
}
Mesaj::Mesaj(const Mesaj& m) {
    this->mesaj = m.mesaj;
    this->id_m = m.id_m;
    this->id1 = m.id1;
    this->id2 = m.id2;
}
Mesaj::~Mesaj() {

}
Mesaj& Mesaj::operator=(const Mesaj& m) {
    if (this != &m) {

        this->mesaj = m.mesaj;
        this->id_m = m.id_m;
        this->id1 = m.id1;
        this->id2 = m.id2;
    }
    return *this;
}
bool Mesaj::operator==(const Mesaj& m) {
    return this->id_m == m.id_m && this->id1 == m.id1 &&
           this->id2 == m.id2 && this->mesaj == m.mesaj;
}
ostream& operator<<(ostream& os, const Mesaj& m) {
    os <<"Id mesaj: "<<m.id_m<<"\n"<<"ID User 1: " << m.id1 <<
        ", ID User 2: " << m.id2
       << ", mesaj: " << m.mesaj << ". \n";
    return os;
}