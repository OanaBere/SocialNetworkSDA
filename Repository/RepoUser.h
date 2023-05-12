//
// Created by Oana on 22/05/2022.
//

#ifndef PROIECT_SDA_REPOUSER_H
#define PROIECT_SDA_REPOUSER_H

#include "vector"
#include "../Domain/User.h"
#include "../Domain/List.h"
class RepoUser {
protected:
    List<User> users;
public:
    RepoUser();
    ~RepoUser();
    void addUser(User &u);
    int getSize();
    User getPoz(int poz);
    List<User> getAll();
    void delUser(int poz);
    RepoUser& operator=(const RepoUser &r);

};


#endif //PROIECT_SDA_REPOUSER_H
