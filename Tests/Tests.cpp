//
// Created by Oana on 09/05/2022.
//

#include "Tests.h"
#include "../Domain/List.h"
#include "../Domain/User.h"
#include "../Repository/RepoUser.h"
#include "../Service/ServiceUser.h"
#include "../Service/ServiceMesaj.h"
#include "cassert"
#include "iostream"

using namespace std;
void testImplicitConstructor(){

    List<int> list;

}

void testConstructorList(){

    int* array = new int[2];
    array[0] = 1;

    List<int> list(array, 2, 1);

    delete[] array;
}

void testEqualOperatorList(){

    int* array = new int[2];
    array[0] = 1;

    List<int> list(array, 2, 1);

    int* newArray = new int[3];
    newArray[0] = 1;
    newArray[1] = 2;

    List<int> newList(array, 3, 2);

    list = newList;

    assert(list == newList);

    delete[] array;
    delete[] newArray;

}

void testGetCapacity(){

    List<int> list;

    assert(list.getCapacity() == 1);

}

void testPushBack(){

    List<int> list;

    list.pushBack(1);
    list.pushBack(7);

    assert(list.size() == 2);

}

void testEmpty(){


    List<int> list;

    assert(list.empty());

    list.pushBack(1);

    assert(list.empty() == false);

}

void testInsert(){


    List<int> list;

    list.pushBack(1);
    list.pushBack(3);

    list.insert(1, 2);

    assert(list.size() == 3);
}

void testGetElem(){

    List<int> list;

    list.pushBack(1);
    list.pushBack(12);
    list.pushBack(3);

    assert(list.getElem(1) == 12);

}

void testDeleteElem()
{
    List<int> list;

    list.pushBack(1);
    list.pushBack(12);
    list.pushBack(3);

    list.deleteElem(1);
    assert(list.size() == 2);
}
void testAddUser() {
    User u1(1, "Oana", "Cluj", 20);
    User u2(1, "Ioana", "Brasov", 24);
    User u3(1, "Rares", "Bucuresti", 19);
    RepoUser r;
    r.addUser(u1);
    r.addUser(u2);
    r.addUser(u3);
    assert(r.getSize() == 3);
}
void testServiceUser(){
    //RepoUser r;
    // cout<<1;
    ServiceUser s;

    s.add_user(1,"Daria", "Cluj", 22);
    s.add_user(2,"Andrei", "Alba", 29);
    s.add_user(3,"Darius", "Cluj", 17);
    assert(s.get_size()==3);
    s.del_user(1);
    assert(s.get_size()==2);
}
void testServiceMesaj(){
    ServiceMesaj sm;
    sm.add_mesaj(1,1,2,"Hey");
    sm.add_mesaj(2,2,1,"Hey cf");
    sm.add_mesaj(3,1,2,"Bine tu?");
    assert(sm.get_size()==3);
    sm.del_mesaj(3);
    assert(sm.get_size()==2);
}
void testDeleteUser(){
    User u1(1, "Oana", "Cluj", 20);
    User u2(1, "Ioana", "Brasov", 24);
    User u3(1, "Rares", "Bucuresti", 19);
    RepoUser r;
    r.addUser(u1);
    r.addUser(u2);
    r.addUser(u3);
    assert(r.getSize()==3);
    r.delUser(1);
    r.delUser(2);
    assert(r.getSize()==1);
    r.delUser(1);
    assert(r.getSize()==0);
}



void testAllList(){

    testImplicitConstructor();
    testConstructorList();
    testEqualOperatorList();
    testGetCapacity();
    testPushBack();
    testEmpty();
    testInsert();
    testGetElem();
    testDeleteElem();
    testAddUser();
    testDeleteUser();
    testServiceUser();
    testServiceMesaj();


}
