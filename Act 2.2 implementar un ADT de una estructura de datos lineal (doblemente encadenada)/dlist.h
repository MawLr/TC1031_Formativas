//
//  dlist.h
//  act 2.2 tc1031
//  A01706212
//  Created by Manolo Medina on 10/1/20.
//  Copyright © 2020 Manolo Medina. All rights reserved.
//

#ifndef dlist_h
#define dlist_h

#include <string>
#include <sstream>
#include <iostream>

using namespace std;

template <class T> class DList;

template <class T>
class DLink {
private:
    DLink(T);
    DLink(T, DLink<T>*, DLink<T>*);

    T value;
    DLink<T> *previous;
    DLink<T> *next;

    friend class DList<T>;
};

template <class T>
DLink<T>::DLink(T val) : value(val), previous(0), next(0) {}

template <class T>
DLink<T>::DLink(T val, DLink *prev, DLink* nxt) : value(val), previous(prev), next(nxt) {}

template <class T>
class DList {
public:
    DList();
    void clear();
    ~DList();

    bool empty() const;
    string toStringForward() const;
    string toStringBackward() const;

    void update(int, T);

    int find(T) const;
    void add(T);

    T removeFirst();
    T remove(int);

    
private:
    DLink<T> *head;
    DLink<T> *tail;
    int size;
};

template <class T>
DList<T>::DList() : head(0), tail(0), size(0) {}

template <class T>
void DList<T>::clear() {
    DLink<T> *p, *q;

    p = head;
    while (p != 0) {
        q = p->next;
        delete p;
        p = q;
    }
    head = 0;
    tail = 0;
    size = 0;
}

template <class T>
DList<T>::~DList() {
    clear();
}

template <class T>
bool DList<T>::empty() const {
    return (head == 0 && tail == 0);
}

template <class T>
string DList<T>::toStringForward() const {
    stringstream aux;
    DLink<T> *p;
    p = head;
    aux << "[";
    while (p != 0) {
        aux << p->value;
        if (p->next != 0) {
            aux << ", ";
        }
        p = p->next;
    }
    aux << "]";
    return aux.str();
}

template <class T>
string DList<T>::toStringBackward() const {
    stringstream aux;
    DLink<T> *p;
    p = tail;
    aux << "[";
    while (p != 0) {
        aux << p->value;
        if (p->previous != 0) {
            aux << ", ";
        }
        p = p->previous;
    }
    aux << "]";
    return aux.str();
}

template <class T>
int DList<T>::find(T val) const {
  int pos;
    DLink<T> *p;

    p = head;
    pos = 0;
    while (p != 0) {
        if (p->value == val) {
            return pos;
        }
        p = p->next;
    pos++;
    }

  return -1;
}

template <class T>
void DList<T>::add(T val) {
    DLink<T> *newLink;

    newLink = new DLink<T>(val);

    if (empty()) {
        head = newLink;
        tail = newLink;
    } else {
        tail->next = newLink;
        newLink->previous = tail;
        tail = newLink;
    }
    size++;
}

template <class T>
T DList<T>::removeFirst() {
    T val;
    DLink<T> *p;

    if (empty()) {
        cout<< "Lista vacía" << endl;
    }

    p = head;
    val = p->value;

    if (head == tail) {
        head = 0;
        tail = 0;
    } else {
        head = p->next;
        p->next->previous = 0;
    }

    delete p;
    return val;
  size--;
}

template <class T>
T DList<T>::remove(int index) {
    T val;
    DLink<T> *p;
  int pos;

    if (index < 0 || index >= size) {
        cout<< "Indice invalido" << endl;
    }

    if (index == 0) {
        return removeFirst();
    }

    p = head;
    pos = 0;
    while (pos != index) {
        p = p->next;
        pos++;
    }

    val = p->value;
    p->previous->next = p->next;
    if (p->next != 0) {
        p->next->previous = p->previous;
    }

    delete p;
    return val;
  size--;
}

template <class T>
void DList<T>::update(int index, T val) {
  int pos;
  DLink<T> *p;

    if (index < 0 || index >= size) {
        cout<< "Indice invalido" << endl;
    }

  pos = 0;
    p = head;
    while (pos != index) {
        p = p->next;
        pos++;
    }

  p->value = val;
}

#endif /* dlist_h */
