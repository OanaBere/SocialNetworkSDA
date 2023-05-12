//
// Created by Oana on 22/05/2022.
//

#ifndef PROIECT_SDA_FRIENDSHIP_H
#define PROIECT_SDA_FRIENDSHIP_H
#include "User.h"

class Friendship {
private:
    int id_f;
    int u1;
    int u2;
public:
public:
    Friendship();
    Friendship(int id_f, int u1, int u2);
    Friendship(const Friendship &f);
    ~Friendship();
    int get_id_f() {
        return this->id_f;
    }
    int get_u1() {
        return this->u1;
    }
    int get_u2() {
        return this->u2;
    }
    void set_id_f(int id_f) {
        this->id_f;
    }
    void set_u1(int u1) {
        this->u1 = u1;
    }
    void set_u2(int u2) {
        this->u2 = u2;
    }

    Friendship& operator=(const Friendship& friendship);
    bool operator==(const Friendship& friendship);
   friend ostream& operator<<(ostream& os, const Friendship& friendship);



};




#endif //PROIECT_SDA_FRIENDSHIP_H
