//
//  heap.h
//  act 3.2
//
//  Created by Manolo Medina on 10/18/20.
//  Copyright © 2020 Manolo Medina. All rights reserved.
//

#ifndef heap_h
#define heap_h
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

template <class T>
class Heap {
private:
    T *data; // Lugar donde seran almacenados los datos
    int tam; // Cantidad maxima
    int count; // Cantidad actual
    int parent(int) const; // Padre
    int left(int) const; // Hijo
    int right(int) const; // Hijo
    void heapify(int); // Lo que hace la magia de ordenar
    void swap(int, int);
    
public:
    Heap(int);
    void push(T); // Se encarga de añadir valores
    void pop(); // Borra la raiz
    T top() const; // Obtiene la raiz
    bool empty() const; // Chequeo para ver si hay datos
    int size() const; // Checa el tamaño del arbol (datos guardados)
    string toString() const;
};

template <class T>
Heap<T>::Heap(int sze) { //Constructor
    tam = sze;
    data = new T[tam];
    count = 0;
}

template <class T>
int Heap<T>::parent(int pos) const {
    return (pos - 1) / 2;
}

template <class T>
int Heap<T>::left(int pos) const {
    return ((2 * pos) + 1);
}

template <class T>
int Heap<T>::right(int pos) const {
    return ((2 * pos) + 2);
}

template <class T>
void Heap<T>::heapify(int pos) {
    int le = left(pos);
    int ri = right(pos);
    int min = pos;
    
    if (le <= count && data[le] < data[min]) {
        min = le;
    }
    
    if (ri <= count && data[ri] < data[min]) {
        min = ri;
    }
    
    if (min != pos) {
        swap(pos, min);
        heapify(min);
    }
}

template <class T>
void Heap<T>::swap(int i, int j) {
    T aux = data[i];
    data[i] = data[j];
    data[j] = aux;
}

template <class T>
void Heap<T>::push(T val){
    int pos;
    pos = count;
    count++;

    while (pos > 0 && val < data[parent(pos)]) {
        data[pos] = data[parent(pos)];
        pos = parent(pos);
    }
    data[pos] = val;
}

template <class T>
void Heap<T>::pop(){
    T aux = data[0];

    data[0] = data[--count];
    heapify(0);
}

template <class T>
    T Heap<T>::top() const{
    T aux = data[0];
    return aux;
}

template <class T>
    bool Heap<T>::empty() const {
    return (count == 0);
}

template <class T>
    int Heap<T>::size() const{
    return count;
}

template <class T>
    string Heap<T>::toString() const {
    stringstream aux;
    aux << "[";    for (int i = 0; i < count; i++) {
        if (i != 0) {
            aux << " ";
        } aux << data[i];
    } aux << "]";
    return aux.str();
}


#endif /* heap_h */
