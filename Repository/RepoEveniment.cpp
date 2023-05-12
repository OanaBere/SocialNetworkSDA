//
// Created by Oana on 23/05/2022.
//

#include "RepoEveniment.h"
#include "vector"
RepoEveniment::RepoEveniment() = default;
int RepoEveniment::getSize() {
    return events.size();
}
vector<Eveniment> RepoEveniment::getAll() {
    return events;
}
void RepoEveniment::addEvent(Eveniment &e) {
    events.push_back(e);
}
Eveniment RepoEveniment::getPoz(int poz) {
    return events[poz];
}
void RepoEveniment::delEvent(int poz) {
    events.erase(events.begin()+poz);
}
RepoEveniment &RepoEveniment::operator=(const RepoEveniment &r) {
    events = r.events;
}
RepoEveniment::~RepoEveniment() = default;
