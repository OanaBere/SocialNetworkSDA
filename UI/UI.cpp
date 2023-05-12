//
// Created by Oana on 22/05/2022.
//

#include "UI.h"
#include "iostream"
using namespace std;

UI::UI(ServiceUser &su, ServiceMesaj &sm, ServiceFriendship &sf, ServiceEveniment &se) : su(su), sm(sm), sf(sf), se(se) {
   //this->su = su;
//    this->sm = sm;
}

void UI::showMenu() {
    cout<<"1. Meniu Useri."<<endl;
    cout<<"2. Meniu Mesaje."<<endl;
    cout<<"3. Meniu Prietenii."<<endl;
    cout<<"4. Meniu Evenimente."<<endl;
    cout<<"0. Iesire."<<endl;

}
void UI::showMenuUser() {
    cout<<"1. Adauga user."<<endl;
    cout<<"2. Sterge user."<<endl;
    cout<<"3. Show all users."<<endl;
    cout<<"0. Iesire."<<endl;
}
void UI::showMenuMesaj() {
    cout<<"1. Adauga mesaj."<<endl;
    cout<<"2. Sterge mesaj."<<endl;
    cout<<"3. Show all mesaje."<<endl;
    cout<<"4. Mesaje intre 2 useri."<<endl;
    cout<<"0. Iesire."<<endl;
}
void UI::showMenuFriendship() {
    cout<<"1. Adauga prieten. "<<endl;
    cout<<"2. Sterge prieten. "<<endl;
    cout<<"3. Show all friendships. "<<endl;
    cout<<"4. Prietenii unui user. "<<endl;
    cout<<"0. Iesire. "<<endl;
}
void UI::showMenuEveniment() {
    cout<<"1. Adauga eveniment."<<endl;
    cout<<"2. Sterge eveniment."<<endl;
    cout<<"3. Show all evenimente."<<endl;
    //cout<<"4. Listeaza evenimentele de un anumit tip"<<endl;
    cout<<"0. Iesire."<<endl;
}
void UI::runMenuUser() {
    int opt;
    while(true){
        showMenuUser();
        cout<<"Alegeti optiunea: "<<endl;
        cin>>opt;
        if(opt == 1)
            adaugareUser();
        else if(opt == 2)
            deleteUser();
        else if(opt == 3)
            showAllUsers();
        else if(opt == 0)
            break;
        else
            cout<<"Optiune invalida!";
    }
}
void UI::adaugareUser() {
    int id, varsta;
    char *nume = new char[20];
    char *oras = new char[20];
    cout<<"Introduceti id user: ";
    cin>>id;
    cout<<"Introduceti nume user: ";
    cin>>nume;
    cout<<"Introduceti oras user: ";
    cin>>oras;
    cout<<"Introduceti varsta user: ";
    cin>>varsta;
    this->su.add_user(id,nume,oras,varsta);

}
void UI::deleteUser() {
    int id;
    cout<<"Dati id-ul userului pe care doriti sa il stergeti: ";
    cin>>id;
    this->su.del_user(id);
}
void UI::showAllUsers() {

    vector<User> us = su.read();
    for(int i=0;i<us.size();i++)
        cout<<us[i]<<endl;
}

void UI::runMenuMesaj() {
    int opt;
    cout<<"Alegeti optiunea: ";
    while (true){
        showMenuMesaj();
        cout<<"Alegeti optiunea: ";
        cin>>opt;
        if(opt == 1)
            adaugareMesaj();
        else if(opt == 2)
            deleteMesaj();
        else if(opt == 3)
            showAllMesaje();
        else if(opt == 4)
            mesaje_2_useri();

        else if(opt == 0)
            break;
        else
            cout<<"Optiune invalida";

    }
}
void UI::adaugareMesaj() {
    int id_m, id1, id2;
    char *mesaj = new char[50];
    cout<<"Introduceti id mesaj: ";
    cin>>id_m;
    cout<<"Introduceti id-ul user-ului care trimite mesajul: ""\n";
    cin>>id1;
    cout<<"Introduceti id-ul user-ului care primeste mesajul: ""\n";
    cin>>id2;
    cout<<"Introduceti mesajul: ";
    cin>>mesaj;
    this->sm.add_mesaj(id_m, id1, id2, mesaj);
}
void UI::deleteMesaj() {
    int id;
    cout<<"Introduceti id-ul mesajului pe care doriti sa il stergeti: ";
    cin>>id;
    this->sm.del_mesaj(id);
}
void UI::runMenuEveniment() {
    int opt;
    while(true){
        showMenuEveniment();
        cout<<"Alegeti optiunea: ";
        cin>>opt;
        if(opt == 1)
            adaugareEveniment();
        else if(opt == 2)
            stergereEveniment();
        else if(opt == 3)
            showAllEvenimente();
//        else if(opt == 4)
//            listeazaEvenimenteTip();
        else if(opt == 0)
            break;
        else
            cout<<"Optiune invalida!";
    }

}
void UI::showAllMesaje(){
     vector<Mesaj> m = sm.read();
     for(int i=0;i<m.size();i++)
         cout<<m[i]<<endl;
}
void UI::mesaje_2_useri(){
    int id1, id2;
    cout<<"Dati id-ul unui user: ";
    cin>>id1;
    cout<<"Dati id-ul celuilalt user: ";
    cin>>id2;
    vector<Mesaj>mesaje = this->sm.mesaje_2_useri(id1,id2);
    for(auto & i : mesaje)
        cout<<i<<endl;
}
void UI::runMenuFriendship() {
    int opt;
    while(true){
        showMenuFriendship();
        cout<<"Alegeti optiunea"<<endl;
        cin>>opt;
        if(opt == 1)
            adaugareFriendship();
        else if(opt == 2)
            deleteFriendship();
        else if(opt == 3)
            showAllFriendships();
        else if(opt == 4)
            friendsForUser();
        else if(opt == 0)
            break;
        else
            cout<<"Optiune invalida!";
    }
}
void UI::adaugareEveniment() {
    int id, data;
    char* tip = new char[20];
    char* locatie = new char[20];
    cout<<"Introduceti id-ul: ";
    cin>>id;
    cout<<"Introduceti tipul: ";
    cin>>tip;
    cout<<"Introduceti locatia: ";
    cin>>locatie;
    cout<<"Introduceti data: ";
    cin>>data;
    this->se.add_event(id, tip, locatie, data);

}
void UI::stergereEveniment() {
    int id;
    cout<<"Dati id-ul evenimentului pe care doriti sa il stergeti: ";
    cin>>id;
    this->se.del_event(id);
}
void UI::showAllEvenimente() {

    vector<Eveniment> e = se.read();
        for(int i=0;i<e.size();i++)
            cout<<e[i]<<endl;
}
//void UI::listeazaEvenimenteTip() {
//    char* tip;
//    cout<<"Dati tipul dupa care doriti afisarea: (concert/festival/party/etc) "<<endl;
//    cin>>tip;
//    //cout<<1;
//    vector<Eveniment> e = this->se.listeazaEvenimentTip(tip);
//        for(auto & i : e)
//            cout<<i<<endl;
//    }

void UI::adaugareFriendship() {
    int id, u1, u2;
    cout<<"Dati id-ul prieteniei: ";
    cin>>id;
    cout<<"Dati id-ul primului user";
    cin>>u1;
    cout<<"Dati id-ul celui de-al doilea user";
    cin>>u2;
    this->sf.add_friend(id, u1, u2);

}
void UI::deleteFriendship() {
    int id;
    cout<<"Dati id-ul prieteniei pe care doriti sa o stergeti: ";
    cin>>id;
    this->sf.del_friend(id);
}
void UI::showAllFriendships() {
    vector<Friendship> friends = sf.read();
    for(int i=0;i<friends.size();i++)
        cout<<friends[i]<<endl;
}

void UI::friendsForUser(){
    int id;
    cout<<"Dati id-ul userului caruia doriti sa ii vedeti prietenii: ";
    cin>>id;
    vector<Friendship>friendships = this->sf.friedships_for_user(id);
    for(auto & i : friendships)
        cout<<i<<endl;
}
void UI::runMenu() {
    int opt;
    while(true){
        showMenu();
        cout<<"Alege optiunea: ";
        cin>>opt;
        if(opt == 1)
            runMenuUser();
        else if(opt == 2)
            runMenuMesaj();
        else if(opt == 3)
            runMenuFriendship();
        else if(opt == 4)
            runMenuEveniment();

        else if(opt == 0)
            break;
        else
            cout<<"Optiune invalida!";
    }
}
UI::~UI() = default;






