//
// Created by Oana on 23/05/2022.
//

#include "RepoFriendship.h"
#include "vector"
RepoFriendship::RepoFriendship()  = default;

int RepoFriendship::getSize() {
    return friends.size();
}
vector<Friendship> RepoFriendship::getAll() {
    return friends;
}
void RepoFriendship::addFriendship(Friendship &f) {
    friends.push_back(f);
}
Friendship RepoFriendship::getPoz(int poz) {
    return friends[poz];
}
void RepoFriendship::delFriendship(int poz) {
    friends.erase(friends.begin()+poz);
}
RepoFriendship &RepoFriendship::operator=(const RepoFriendship &r) {
    friends = r.friends;
}
RepoFriendship::~RepoFriendship() = default;