//
// Created by Oana on 22/05/2022.
//

#include "Eveniment.h"
Eveniment::Eveniment() {
    this->id_e = 0;
    this->tip = nullptr;
    this->locatie = nullptr;
    this->data = 0;
}
Eveniment::Eveniment(int id_e, char* tip, char* locatie, int data) {
    this->id_e = id_e;
    this->tip = new char[strlen(tip) + 1];
    strcpy_s(this->tip, strlen(tip)+1, tip);
    this->locatie = new char[strlen(locatie) +1];
    strcpy_s(this->locatie, strlen(locatie)+1, locatie);
    this->data = data;
}
Eveniment::Eveniment(const Eveniment &rhs) {
    this->id_e = rhs.id_e;
    this->tip = new char[strlen(rhs.tip) + 1];
    strcpy_s(this->tip, strlen(rhs.tip) + 1, rhs.tip);
    this->locatie = new char[strlen(rhs.locatie) + 1];
    strcpy_s(this->locatie, strlen(rhs.locatie) + 1, rhs.locatie);
    this->data = rhs.data;
}


int Eveniment::getIdE() const {
    return id_e;
}

char *Eveniment::getTip() const {
    return tip;
}

char *Eveniment::getLocatie() const {
    return locatie;
}

int Eveniment::getData() const {
    return data;
}

//const vector<User> &Eveniment::getUsers() const {
//    return users;
//}

void Eveniment::setIdE(int idE) {
    id_e = idE;
}

void Eveniment::setTip(char *tip) {
    Eveniment::tip = tip;
}

void Eveniment::setLocatie(char *locatie) {
    Eveniment::locatie = locatie;
}

void Eveniment::setData(int data) {
    Eveniment::data = data;
}

//void Eveniment::setUsers(const vector<User> &users) {
//    Eveniment::users = users;
//}

Eveniment& Eveniment::operator=(const Eveniment &rhs) {
    if(this != &rhs) {
        this->id_e = rhs.id_e;
        this->tip = new char[strlen(rhs.tip) + 1];
        strcpy_s(this->tip, strlen(rhs.tip) + 1, rhs.tip);
        this->locatie = new char[strlen(rhs.locatie) + 1];
        strcpy_s(this->locatie, strlen(rhs.locatie) + 1, rhs.locatie);
        this->data = rhs.data;
        return *this;
    }
}
ostream& operator<<(ostream& os, const Eveniment& e) {
    os <<"Id eveniment: "<<e.id_e<<"\n"<<"Tip: " << e.tip <<
       ", Locatia: " << e.locatie<< ", data: " << e.data << ". \n";
    return os;
}



Eveniment::~Eveniment() = default;



