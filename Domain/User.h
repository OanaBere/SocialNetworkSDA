//
// Created by Oana on 10/05/2022.
//

#ifndef PROIECT_SDA_USER_H
#define PROIECT_SDA_USER_H
#include "ostream"
#include "cstring"
using namespace std;
class User {
private:
    int id;
    char* nume;
    char* oras;
    int varsta;
public:
    User();
    User(int, const char*, const char*, int);
    User(const User& rhs);

    virtual ~User();

    int getId() const;

    char *getNume() const;

    char *getOras() const;

    int getVarsta() const;

    void setId(int id);

    void setNume(char *nume);

    void setOras(char *oras);

    void setVarsta(int varsta);

    bool operator==(const User &rhs) ;

    User& operator=(const User& rhs);

    bool operator<(const User &rhs) const;

    bool operator>(const User &rhs) const;

    //bool operator<=(const User &rhs) const;

    //bool operator>=(const User &rhs) const;

    friend ostream &operator<<(ostream &os, const User &user);
};


#endif //PROIECT_SDA_USER_H
