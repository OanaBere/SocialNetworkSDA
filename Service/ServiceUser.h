//
// Created by Oana on 22/05/2022.
//

#ifndef PROIECT_SDA_SERVICEUSER_H
#define PROIECT_SDA_SERVICEUSER_H

#include "vector"
#include "../Domain/List.h"
#include "../Repository/RepoUser.h"
class ServiceUser {
protected:
    RepoUser repository;
public:
    ServiceUser();
    explicit ServiceUser(RepoUser &r);
    ~ServiceUser();
    ServiceUser(const ServiceUser &s);
    void add_user(int id, char* nume, char* oras, int varsta);
    void del_user(int id);
    vector<User> read();
    int get_size();
    ServiceUser& operator=(const ServiceUser &s);
};


#endif //PROIECT_SDA_SERVICEUSER_H
