//
// Created by Oana on 24/05/2022.
//
#include "ServiceUser.h"
ServiceUser::ServiceUser() = default;
ServiceUser::ServiceUser(RepoUser &r) {
    repository = r;
}
ServiceUser::ServiceUser(const ServiceUser &s) {
    repository = s.repository;
}
ServiceUser &ServiceUser::operator=(const ServiceUser &s) {
    repository = s.repository;
    return *this;
}
int ServiceUser::get_size() {
    return repository.getSize();
}
void ServiceUser::add_user(int id, char *nume, char *oras, int varsta) {
    User U(id, nume, oras, varsta);
    repository.addUser(U);
}
void ServiceUser::del_user(int id) {
    for(int i=0;i<repository.getSize();i++)
        if(repository.getPoz(i).getId()==id)
            repository.delUser(i);
}
vector<User>ServiceUser::read() {
    vector<User> u;

    for(int i=0;i< repository.getSize();i++)
        u.push_back(repository.getPoz(i));
    return u;
}

ServiceUser::~ServiceUser() = default;