//
// Created by Oana on 23/05/2022.
//

#include "ServiceEveniment.h"
#include "vector"
#include "iostream"
ServiceEveniment::ServiceEveniment()   = default;
ServiceEveniment::ServiceEveniment(RepoEveniment &r) {
    repository = r;
}
ServiceEveniment::ServiceEveniment(const ServiceEveniment &s) {
    repository = s.repository;
}
ServiceEveniment &ServiceEveniment::operator=(const ServiceEveniment &s) {
    repository = s.repository;
    return *this;
}
int ServiceEveniment::get_size() {
    return repository.getSize();
}
void ServiceEveniment::add_event(int id_e, char *tip, char *locatie, int data) {
    Eveniment E(id_e, tip, locatie, data);
    repository.addEvent(E);
}
void ServiceEveniment::del_event(int id_e) {
    for(int i=0;i<repository.getSize();i++)
        if(repository.getPoz(i).getIdE()==id_e)
            repository.delEvent(i);
}
vector<Eveniment>ServiceEveniment::read() {
    vector<Eveniment> e;

    for(int i=0;i< repository.getSize();i++)
        e.push_back(repository.getPoz(i));
    return e;
}
vector<Eveniment> ServiceEveniment::listeazaEvenimentTip(const char* tip){
    vector<Eveniment> e;
    for(int i=0;i<repository.getSize();i++)
        if(strcmp(repository.getPoz(i).getTip(), tip)==0)
            e.push_back(repository.getPoz(i));
    return e;
}
ServiceEveniment::~ServiceEveniment()  = default;

