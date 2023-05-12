//
// Created by Oana on 23/05/2022.
//

#ifndef PROIECT_SDA_SERVICEFRIENDSHIP_H
#define PROIECT_SDA_SERVICEFRIENDSHIP_H

#include "../Repository/RepoFriendship.h"
class ServiceFriendship {
protected:
    RepoFriendship repository;
public:
    ServiceFriendship();
    explicit ServiceFriendship(RepoFriendship &r);
    ServiceFriendship(const ServiceFriendship &s);
    ServiceFriendship& operator=(const ServiceFriendship &s);
    void add_friend(int id_f, int u1, int u2);
    void del_friend(int id_f);
    int get_size();
    vector<Friendship>read();
    vector<Friendship>friedships_for_user(int cod);
    ~ServiceFriendship();
};



#endif //PROIECT_SDA_SERVICEFRIENDSHIP_H
