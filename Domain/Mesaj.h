//
// Created by Oana on 22/05/2022.
//

#ifndef PROIECT_SDA_MESAJ_H
#define PROIECT_SDA_MESAJ_H
#include "ostream"
using namespace std;

class Mesaj {
private:
    int id_m;
    int id1, id2;
    string mesaj;
public:
    Mesaj();
    Mesaj(int id_m,int id1, int id2, string mesaj);
    Mesaj(const Mesaj& m);
    ~Mesaj();
    int get_id_mesaj() {
        return this->id_m;
    }
    int get_id1() {
        return this->id1;
    }
    int get_id2() {
        return this->id2;
    }
    string get_mesaj() {
        return this->mesaj;
    }
    void set_id1(int id1) {
        this->id1 = id1;
    }
    void set_id2(int id2) {
        this->id2 = id2;
    }
    void set_mesaj(string mesaj) {

        this->mesaj = mesaj;
    }
    Mesaj& operator=(const Mesaj& mesaj);
    bool operator==(const Mesaj& mesaj);
    friend ostream& operator<<(ostream& os, const Mesaj& mesaj);



};



#endif //PROIECT_SDA_MESAJ_H
