//
//  funciones.h
//  tc1031
//
//  Actividad 1.1
//
//  Matrícula: A01706212
//  Created by Manolo Medina on 8/26/20.
//  Copyright © 2020 Manolo Medina. All rights reserved.
//

#ifndef funciones_h
#define funciones_h
using namespace std;


class Funciones{
public:
    long int sumaRecursiva(long int n);
    long int sumaIterativa(long int n);
    long int sumaDirecta(long int n);
};

long int Funciones::sumaRecursiva(long int n){
    if (n == 0){
        return n;
    } else {
       return n + sumaRecursiva(n - 1);
    }
}

long int Funciones::sumaIterativa(long int n){
    long int sum = 0;
    for(long int i = 1; i <= n; i++){
        sum = sum + i;
    }
    return sum;
}

long int Funciones::sumaDirecta(long int n){
    long int sum = 0;
    sum = (n * (n + 1))/2;
    return sum;
}


#endif /* funciones_h */
