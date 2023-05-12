//
// Created by Oana on 22/05/2022.
//

#ifndef PROIECT_SDA_ARBORE_H
#define PROIECT_SDA_ARBORE_H
#include "NodeArbore.h"
#include "iostream"
using namespace std;
template<class T>
class Arbore {
private:
    NodeArbore<T>* root;
    void privateAdd(NodeArbore<T>*, T);
    void privatePrint(NodeArbore<T>*);
    bool privateSearch(NodeArbore<T>*, T);

public:
    Arbore();
    explicit Arbore(NodeArbore<T>*);
    ~Arbore();
    bool isEmpty();
    void add(T);
    NodeArbore<T>* getRoot();
    void delCurrent(NodeArbore<T> *currentNode);
    void print();
    bool searchElem(T);
    void setRoot(NodeArbore<T>*);
    bool remove(NodeArbore<T> *parent, NodeArbore<T> *current, T value);

};

template <class T>
Arbore<T>::Arbore() {
    this->root = nullptr;
}

template <class T>
Arbore<T>::Arbore(NodeArbore<T>* paramRoot) {
    this->root = paramRoot;
}

template <class T>
void Arbore<T>::delCurrent(NodeArbore<T> *currentNode) {
    delete currentNode;
}
template <class T>
Arbore<T>::~Arbore<T>() {
    delCurrent(this->root);
}

template <class T>
bool Arbore<T>::isEmpty() {
    if(this->root == nullptr)
        return true;
    else return false;
}

template <class T>
void Arbore<T>::privateAdd(NodeArbore<T>* currentNode, T paramValue) {
    if(paramValue < currentNode->value){
        if(currentNode->left != nullptr)
        {
            privateAdd(currentNode->left, paramValue);
        }
        else{
            currentNode->left = new NodeArbore<T>(paramValue);
        }
    }
    else{
        if(currentNode->right != nullptr)
        {
            privateAdd(currentNode->right, paramValue);
        }
        else{
            currentNode->right = new NodeArbore<T>(paramValue);
        }
    }

}

template <class T>
void Arbore<T>::privatePrint(NodeArbore<T> *currentNode) {
    if(currentNode != nullptr)
    {
        privatePrint(currentNode->left);
        std::cout << currentNode->value << std::endl;
        privatePrint(currentNode->right);
    }

}

template <class T>
void Arbore<T>::add(T paramValue) {
    if(this->root == nullptr)
        this->root = new NodeArbore<T>(paramValue);
    else privateAdd(this->root, paramValue);
}

template <class T>
NodeArbore<T>* Arbore<T>::getRoot() {
    return this->root;
}

template <class T>
void Arbore<T>::print() {
    privatePrint(this->root);
}


template<class T>
bool Arbore<T>::privateSearch(NodeArbore<T> *currentNode, T paramValue) {
    if(currentNode->getValue() == paramValue)
        return true;
    else{
        if(paramValue < currentNode->getValue())
        {
            if(currentNode->left == nullptr)
                return false;
            else{
                privateSearch(currentNode->left, paramValue);
            }
        }else{
            if(currentNode->right == nullptr)
                return false;
            else{
                privateSearch(currentNode->right, paramValue);
            }
        }
    }


}

template <class T>
bool Arbore<T>::searchElem(T paramValue) {
    if(this->root == nullptr)
        return false;
    if(this->root->getValue() == paramValue)
        return true;
    else return privateSearch(this->root, paramValue);
}
template <class T>
bool Arbore<T>::remove(NodeArbore<T> *parent, NodeArbore<T> *current, T value)
{
    if (!current)
    {
        // Did not find any node with the given value
        return false;
    }
    // Right node to remove
    if (current->value == value)
    {
        // Check if node is leaf
        if (!current->left && !current->right)
        {
            // Found node and is leaf
            // Remove and return
            if (parent->right == current)
                parent->right = NULL;
            else
                parent->left = NULL;
            delete current;
            current = NULL;
            return true;
        }
            // Check if node to delete has one child
        else if (!current->left || !current->right)
        {
            // Get the only child
            NodeArbore<T> *child = current->left;
            if (!child)
                child = current->right;


            // If deleting root node, child becomes root
            if (!parent)
            {
                this->root = child;
            }
            else
            {
                // Parent now points to current's child
                if (child->value > parent->value)
                    parent->right = child;
                else
                    parent->left = child;
            }
            delete current;
            current = NULL;
        }

            // Current has two children
        else
        {
            NodeArbore<T> *nextLargerNode = nextLarger(current);
            // Set next larger node's value into current node
            current->value = nextLargerNode->value;
            // Remove next larger node, which is a leaf
            delete nextLargerNode;
            nextLargerNode = NULL;
        }
        return true;
    }

    // Not the right node to remove
    if (value > current->value){
        return remove(current, current->right, value);
    }else {
        return remove(current, current->left, value);
    }
}
template <class T>
void Arbore<T>::setRoot(NodeArbore<T> *newRoot) {
    this->root = newRoot;

}


#endif //PROIECT_SDA_ARBORE_H
