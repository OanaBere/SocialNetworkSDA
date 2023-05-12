//
// Created by Oana on 22/05/2022.
//

#include "RepoMesaj.h"
#include "../Domain/List.h"
#include "vector"
RepoMesaj::RepoMesaj() = default;

int RepoMesaj::getSize() {
    return mesaje.size();
}
vector<Mesaj> RepoMesaj::getAll() {
    return mesaje;
}
void RepoMesaj::addMesaj(Mesaj &m) {
    mesaje.push_back(m);
}
Mesaj RepoMesaj::getPoz(int poz) {
    return mesaje[poz];
}
void RepoMesaj::delMesaj(int poz) {
    mesaje.erase(mesaje.begin()+poz);
}
RepoMesaj &RepoMesaj::operator=(const RepoMesaj &r) {
    mesaje = r.mesaje;
}
RepoMesaj::~RepoMesaj() = default;