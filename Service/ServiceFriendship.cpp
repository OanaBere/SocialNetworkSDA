//
// Created by Oana on 23/05/2022.
//

#include "ServiceFriendship.h"
ServiceFriendship::ServiceFriendship()  = default;
ServiceFriendship::ServiceFriendship(RepoFriendship &r) {
    repository = r;
}
ServiceFriendship::ServiceFriendship(const ServiceFriendship &s) {
    repository = s.repository;
}
ServiceFriendship &ServiceFriendship::operator=(const ServiceFriendship &s) {
    repository = s.repository;
    return *this;
}
int ServiceFriendship::get_size() {
    return repository.getSize();
}
void ServiceFriendship::add_friend(int id_f, int u1, int u2) {
    Friendship F(id_f, u1, u2);
    repository.addFriendship(F);
}
void ServiceFriendship::del_friend(int id_f) {
    for(int i=0;i<repository.getSize()-1;i++)
        if(repository.getPoz(i).get_id_f()==id_f)
            repository.delFriendship(i);
}
vector<Friendship>ServiceFriendship::read() {
    vector<Friendship> m;

    for(int i=0;i< repository.getSize();i++)
        m.push_back(repository.getPoz(i));
    return m;
}
vector<Friendship>ServiceFriendship::friedships_for_user(int cod){
    vector<Friendship> friendships;
    for(int i=0;i<repository.getSize();i++)
        if(repository.getPoz(i).get_u1() == cod || repository.getPoz(i).get_u2() == cod)
            friendships.push_back(repository.getPoz(i));
    return friendships;
}
ServiceFriendship::~ServiceFriendship()  = default;
