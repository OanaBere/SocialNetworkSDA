//
// Created by Oana on 22/05/2022.
//

#ifndef PROIECT_SDA_NODEARBORE_H
#define PROIECT_SDA_NODEARBORE_H
#include "iostream"
using namespace std;
template<typename T>
class Arbore;

template<class T>
class NodeArbore{
private:
    T info;
    NodeArbore<T>* left;
    NodeArbore<T>* right;
public:
    NodeArbore(T info) : info(info) {this->left = nullptr, this->right = nullptr;}

    NodeArbore(T info, NodeArbore<T> *left, NodeArbore<T> *right) : info(info), left(left), right(right) {}

    friend class Arbore<T>;
};
#endif //PROIECT_SDA_NODEARBORE_H
