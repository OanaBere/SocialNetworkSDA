//
// Created by Oana on 22/05/2022.
//

#ifndef PROIECT_SDA_REPOMESAJ_H
#define PROIECT_SDA_REPOMESAJ_H
#include "../Domain/List.h"
#include "vector"
#include "../Domain/Mesaj.h"

class RepoMesaj {

protected:
    vector<Mesaj> mesaje;
public:
    RepoMesaj();
    ~RepoMesaj();
    void addMesaj(Mesaj &m);
    int getSize();
    Mesaj getPoz(int poz);
    vector<Mesaj> getAll();
    void delMesaj(int poz);
    RepoMesaj& operator=(const RepoMesaj &r);


};


#endif //PROIECT_SDA_REPOMESAJ_H
