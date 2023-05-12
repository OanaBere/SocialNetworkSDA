//
// Created by Oana on 22/05/2022.
//

#include "ServiceMesaj.h"
ServiceMesaj::ServiceMesaj() = default;
ServiceMesaj::ServiceMesaj(RepoMesaj &r) {
    repository = r;
}
ServiceMesaj::ServiceMesaj(const ServiceMesaj &s) {
    repository = s.repository;
}
ServiceMesaj &ServiceMesaj::operator=(const ServiceMesaj &s) {
    repository = s.repository;
    return *this;
}
int ServiceMesaj::get_size() {
    return repository.getSize();
}
void ServiceMesaj::add_mesaj(int id_m, int id1, int id2, char *mesaj) {
    Mesaj M(id_m, id1, id2, mesaj);
    repository.addMesaj(M);
}
void ServiceMesaj::del_mesaj(int id_m) {
    for(int i=0;i<repository.getSize();i++)
        if(repository.getPoz(i).get_id_mesaj()==id_m)
            repository.delMesaj(i);
}
vector<Mesaj>ServiceMesaj::read() {
    vector<Mesaj> m;

    for(int i=0;i< repository.getSize();i++)
        m.push_back(repository.getPoz(i));
    return m;
}
vector<Mesaj>ServiceMesaj::mesaje_2_useri(int id1, int id2){
    vector<Mesaj> m;
    for(int i=0;i<repository.getSize();i++)
        if(repository.getPoz(i).get_id1() == id1 && repository.getPoz(i).get_id2() == id2 ||
        repository.getPoz(i).get_id1() == id2 && repository.getPoz(i).get_id2()==id1)
            m.push_back(repository.getPoz(i));
    return m;
}
ServiceMesaj::~ServiceMesaj() = default;
