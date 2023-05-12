//
// Created by Oana on 22/05/2022.
//

#ifndef PROIECT_SDA_UI_H
#define PROIECT_SDA_UI_H

#include "../Service/ServiceUser.h"
#include "../Service/ServiceMesaj.h"
#include "../Service/ServiceEveniment.h"
#include "../Service/ServiceFriendship.h"
class UI {
private:
    ServiceUser &su;
    ServiceMesaj &sm;
    ServiceFriendship &sf;
    ServiceEveniment &se;
public:
    //UI();

    UI(ServiceUser &su, ServiceMesaj &sm, ServiceFriendship &sf, ServiceEveniment &se);
    ~UI();
    void showMenu();
    void runMenu();
    void showMenuUser();
    void showMenuMesaj();
    void showMenuEveniment();
    void showMenuFriendship();

    void runMenuUser();
    void runMenuMesaj();
    void runMenuEveniment();
    void runMenuFriendship();

    void adaugareUser();
    void deleteUser();
    void adaugareMesaj();
    void deleteMesaj();
    void deleteFriendship();

    void adaugareEveniment();
    void stergereEveniment();
    void adaugareFriendship();
    void mesaje_2_useri();
    void friendsForUser();
    void listeazaEvenimenteTip();
    void showAllUsers();
    void showAllEvenimente();
    void showAllMesaje();
    void showAllFriendships();


};


#endif //PROIECT_SDA_UI_H
