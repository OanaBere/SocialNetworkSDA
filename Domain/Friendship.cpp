//
// Created by Oana on 22/05/2022.
//

#include "Friendship.h"
Friendship::Friendship(){
    this->id_f = 0;
    this->u1 = 0;
    this->u2 = 0;
}
Friendship::Friendship(int id_f, int u1, int u2){
    this->id_f = id_f;
    this->u1 = u1;
    this->u2 = u2;
}
Friendship::Friendship(const Friendship &f) {
    this->id_f = f.id_f;
    this->u1 = f.u1;
    this->u2 = f.u2;
}

Friendship::~Friendship() {

}
Friendship& Friendship::operator=(const Friendship& f) {
    if (this != &f) {


        this->id_f = f.id_f;
        this->u1 = f.u1;
        this->u2 = f.u2;
    }
    return *this;
}
bool Friendship::operator==(const Friendship& f) {
    return this->id_f == f.id_f && this->u1 == f.u1 &&
           this->u2 == f.u2;
}
ostream& operator<<(ostream& os, const Friendship& f) {
    os <<"Id prietenie: "<<f.id_f<<"\n"<<" User: " << f.u1 <<
       ",  User: " << f.u2<< ". \n";
    return os;
}