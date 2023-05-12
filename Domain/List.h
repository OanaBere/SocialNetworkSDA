//
// Created by Oana on 09/05/2022.
//

#ifndef PROIECT_SDA_LIST_H
#define PROIECT_SDA_LIST_H
#include "vector"

template<class T>
class List{

private:
    T* list;
    int capacity{};
    int numberOfElements{};
public:
    List();
    List(T*, int, int);
    List(List<T>&);
    ~List();
    List<T>& operator=(const List<T>&);
    bool operator==(const List<T>&);
    void pushBack(T);
    int size() const;
    int getCapacity() const;
    bool empty();
    void insert(int, T);
    T getElem(int);
    void deleteElem(int);

};

template<class T>
List<T>::List()
{
    this->list = new T[1];
    this->capacity = 1;
    this->numberOfElements = 0;
}

template<class T>
List<T>::List(T *paramList, int paramCapacity, int paramNumberOfElements)

//Constructor cu parametrii
//@param paramList = pointer la array;
//@param paramCapacity = capacitate array;
//@param paramNumberOfElements = nnumarul elementelor din lista

{
    this->list = new T[paramCapacity];
    for(int  i = 0; i < paramNumberOfElements; i++)
        this->list[i] = paramList[i];

    this->capacity = paramCapacity;

    this->numberOfElements = paramNumberOfElements;

}

template<class T>
List<T>::List(List<T> &paramList)

// Copy Constructor
// @tparam T :tip lista
// @param paramList :lista

{

    if(this->list != nullptr)
    {
        delete[] this->list;
        this->list = nullptr;
    }

    this->list = new T[paramList.capacity];
    for(int i = 0; i < paramList.capacity; i++)
        this->list[i] = paramList.list[i];

    this->capacity = paramList.capacity;
    this->numberOfElements = paramList.numberOfElements;

}



template<class T>
List<T>::~List<T>()

 //Destructor lista
{
    delete[] this->list;
    this->capacity = 0;
    this->numberOfElements = 0;
}

template<class T>
List<T>& List<T>::operator=(const List<T> &paramList)

//  Operator de atribuire
//  @tparam T : tip lista
//  @param paramList :list care va fi copiata
//  @return lista, dupa ce modificarile au fost efectuate

{

    if(this == &paramList)
        return *this;
    if(this->numberOfElements >= this->capacity)
    {
        this->capacity *= 2;
        T* aux = new T[capacity];

        for(int i = 0; i < this->numberOfElements; i++)
            aux[i] = this->list[i];

        delete[] this->list;
        this->list = aux;
    }
    //paramList.numberOfElements
    this->list = new T[paramList.capacity];
    for(int i = 0; i < paramList.numberOfElements; i++)
        this->list[i] = paramList.list[i];

    this->capacity = paramList.capacity;
    this->numberOfElements = paramList.numberOfElements;

    return *this;

}

template<class T>
bool List<T>::operator==(const List<T>& paramList)

//  Operator ==, compara doua liste
//  @tparam T : tip lista
//  @param paramList : lista care va fi comparata
//  @return true/false


{

    if(this->capacity != paramList.capacity)
        return false;

    if(this->numberOfElements!= paramList.numberOfElements)
        return false;

    for(int i = 0; i < this->numberOfElements; i++)
        if(this->list[i] != paramList.list[i])
            return false;

    return true;

}

template<class T>
void List<T>::pushBack(T elem)

//  adauga un element in lista.
//  @tparam T :tip elem
//  @param elem :element


{

    if(this->numberOfElements >= this->capacity)
    {
        this->capacity *= 2;
        T* aux = new T[capacity];

        for(int i = 0; i < this->numberOfElements; i++)
            aux[i] = this->list[i];

        delete[] this->list;
        this->list = aux;
    }

    this->list[this->numberOfElements] = elem;
    this->numberOfElements++;

}

template<class T>
int List<T>::size() const

// getter size lista
// @tparam T :tip lista
// @return numarul elementelor din lista

{
    return this->numberOfElements;
}

template<class T>
int List<T>::getCapacity() const

// getter capacitate lista
// @tparam T :tip lista
// @return capacitatea listei

{
    return this->capacity;
}

template<class T>
bool List<T>::empty()

// verifica daca lista e goala
// @tparam T :tip lista
// @return true/false
{

    if(this->numberOfElements == 0)
        return true;
    else return false;

}

template<class T>
void List<T>::insert(int iterator, T elem)

//  Insereaza un element in pozitia din iterator
//  @param iterator: iterator
//  @param elem: element
//  @tparam T

{

    this->numberOfElements++;
    for(int i = this->numberOfElements; i > iterator; i--)
        this->list[i] = this->list[i - 1];
    this->list[iterator] = elem;

}

template<class T>
T List<T>::getElem(int iterator)

//  ia elementul de pe o pozitie
//  @tparam T :tip elem
//  @param iterator :pozitie
//  @return

{

    return this->list[iterator];

}

template<class T>
void List<T>::deleteElem(int iterator)

//  sterge un element de pe o pozitie
//  @tparam T : tipul listei
//  @param iterator :pozitia

{

    for(int i = iterator; i < this->numberOfElements - 1; i++)
        this->list[i] = this->list[i + 1];
    this->numberOfElements--;

}

#endif //PROIECT_SDA_LIST_H
