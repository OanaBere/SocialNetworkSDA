//
// Created by Oana on 23/05/2022.
//

#ifndef PROIECT_SDA_SERVICEEVENIMENT_H
#define PROIECT_SDA_SERVICEEVENIMENT_H
#include "../Repository/RepoEveniment.h"

class ServiceEveniment {
protected:
    RepoEveniment repository;
public:
    ServiceEveniment();
    explicit ServiceEveniment(RepoEveniment &r);
    ServiceEveniment(const ServiceEveniment &s);
    ServiceEveniment& operator=(const ServiceEveniment &s);
    void add_event(int id_e, char* tip, char* locatie, int data);
    void del_event(int id_e);
    int get_size();
    vector<Eveniment>read();
    vector<Eveniment> listeazaEvenimentTip(const char* tip);
    ~ServiceEveniment();
};



#endif //PROIECT_SDA_SERVICEEVENIMENT_H
