//
// Created by Oana on 22/05/2022.
//

#include "RepoUser.h"
#include "../Domain/List.h"
RepoUser::RepoUser() = default;

int RepoUser::getSize() {
    return users.size();
}
List<User> RepoUser::getAll() {
    return users;
}
void RepoUser::addUser(User &u) {
    users.pushBack(u);
}
User RepoUser::getPoz(int poz) {
    return users.getElem(poz);
}
void RepoUser::delUser(int poz) {
    users.deleteElem(poz);
}
RepoUser &RepoUser::operator=(const RepoUser &r) {
    users = r.users;
}
RepoUser::~RepoUser() = default;