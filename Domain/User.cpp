//
// Created by Oana on 10/05/2022.
//

#include "User.h"
#include "cstring"
User::User() {
    this->id = 0;
    this->varsta = 0;
    this->nume = nullptr;
    this->oras = nullptr;
}

User::User(int id, const char* nume, const char* oras, int varsta) {
    this->id = id;
    this->nume = new char[strlen(nume) + 1];
    strcpy_s(this->nume, strlen(nume)+1, nume);
    this->oras = new char[strlen(oras) +1];
    strcpy_s(this->oras, strlen(oras)+1, oras);
    this->varsta = varsta;
}
User::User(const User &rhs) {
    this->id = rhs.id;
    this->nume = new char[strlen(rhs.nume) + 1];
    strcpy_s(this->nume, strlen(rhs.nume) + 1, rhs.nume);
    this->oras = new char[strlen(rhs.oras) + 1];
    strcpy_s(this->oras, strlen(rhs.oras) + 1, rhs.oras);
    this->varsta = rhs.varsta;
}

bool User::operator==(const User &rhs)  {
    return this->id == rhs.id && strcmp(this->nume, rhs.nume) == 0 &&
           strcmp(this->oras, rhs.oras) == 0 &&
           this->varsta == rhs.varsta;

}

User& User::operator=(const User &rhs) {
    if(this != &rhs) {
        this->id = rhs.id;
        this->nume = new char[strlen(rhs.nume) + 1];
        strcpy_s(this->nume, strlen(rhs.nume) + 1, rhs.nume);
        this->oras = new char[strlen(rhs.oras) + 1];
        strcpy_s(this->oras, strlen(rhs.oras) + 1, rhs.oras);
        this->varsta = rhs.varsta;
        return *this;
    }
}

bool User::operator<(const User &rhs) const {
    return this->varsta < rhs.varsta;
}

bool User::operator>(const User &rhs) const {
    return this->varsta > rhs.varsta;
}

ostream &operator<<(ostream &os, const User &user) {
    os <<  "id: "<<user.id << " nume: " << user.nume << " oras: " << user.oras << " varsta: " << user.varsta;
    return os;
}

User::~User() {

}

int User::getId() const {
    return id;
}

char *User::getNume() const {
    return nume;
}

char *User::getOras() const {
    return oras;
}

int User::getVarsta() const {
    return varsta;
}

void User::setId(int id) {
    User::id = id;
}

void User::setNume(char *nume) {
    User::nume = nume;
}

void User::setOras(char *oras) {
    User::oras = oras;
}

void User::setVarsta(int varsta) {
    User::varsta = varsta;
}
