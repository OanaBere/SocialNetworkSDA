//
// Created by Oana on 23/05/2022.
//

#ifndef PROIECT_SDA_REPOEVENIMENT_H
#define PROIECT_SDA_REPOEVENIMENT_H
#include "../Domain/Eveniment.h"

class RepoEveniment {
protected:
    vector<Eveniment> events;
public:
    RepoEveniment();
    ~RepoEveniment();
    void addEvent(Eveniment &e);
    void delEvent(int poz);
    int getSize();
    Eveniment getPoz(int poz);
    vector<Eveniment>getAll();
    RepoEveniment& operator=(const RepoEveniment &r);

};


#endif //PROIECT_SDA_REPOEVENIMENT_H
