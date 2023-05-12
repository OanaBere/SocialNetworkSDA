//
// Created by Oana on 23/05/2022.
//

#ifndef PROIECT_SDA_REPOFRIENDSHIP_H
#define PROIECT_SDA_REPOFRIENDSHIP_H
#include "../Domain/Friendship.h"
#include "vector"

class RepoFriendship {
protected:
    vector<Friendship> friends;
public:
    RepoFriendship();
    ~RepoFriendship();
    void addFriendship(Friendship &f);
    int getSize();
    Friendship getPoz(int poz);
    vector<Friendship> getAll();
    void delFriendship(int poz);
    RepoFriendship& operator=(const RepoFriendship &r);

};


#endif //PROIECT_SDA_REPOFRIENDSHIP_H
