//
// Created by Oana on 22/05/2022.
//

#ifndef PROIECT_SDA_EVENIMENT_H
#define PROIECT_SDA_EVENIMENT_H

#include "User.h"
#include "vector"
class Eveniment {
private:
    int id_e;
    char* tip;
    char* locatie;
    int data;

public:
    Eveniment();
    Eveniment(int id_e,char* tip, char* locatie, int data);
    Eveniment(const Eveniment& e);
    ~Eveniment();

    int getIdE() const;

    char *getTip() const;

    char *getLocatie() const;

    int getData() const;



    void setIdE(int idE);

    void setTip(char *tip);

    void setLocatie(char *locatie);

    void setData(int data);

    //void setUsers(const vector<User> &users);

    Eveniment& operator=(const Eveniment &rhs);

    //bool operator!=(const Eveniment &rhs) const;
    friend ostream& operator<<(ostream& os, const Eveniment& eveniment);

};


#endif //PROIECT_SDA_EVENIMENT_H
