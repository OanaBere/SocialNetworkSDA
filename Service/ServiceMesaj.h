//
// Created by Oana on 22/05/2022.
//

#ifndef PROIECT_SDA_SERVICEMESAJ_H
#define PROIECT_SDA_SERVICEMESAJ_H
#include "../Repository/RepoMesaj.h"

class ServiceMesaj {
protected:
    RepoMesaj repository;
public:
    ServiceMesaj();
    explicit ServiceMesaj(RepoMesaj &r);
    ServiceMesaj(const ServiceMesaj &s);
    ServiceMesaj& operator=(const ServiceMesaj &s);
    void add_mesaj(int id_m, int id1, int id2, char* mesaj);
    void del_mesaj(int id_m);
    int get_size();
    vector<Mesaj>read();
    vector<Mesaj>mesaje_2_useri(int id1, int id2);
    ~ServiceMesaj();
};


#endif //PROIECT_SDA_SERVICEMESAJ_H
