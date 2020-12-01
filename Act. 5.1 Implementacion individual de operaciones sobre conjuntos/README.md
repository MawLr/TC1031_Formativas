### Análisis de Complejidad

## Chain

# put

Por medio de la función indexOf() es posible conocer el índice de la llave, con esto lo que hace es agregar la llave y el valor que fueron ingresados como parámetros de la 
función, en este caso al ser chain no importa si el espacio está ocupado, pues va a encadenar los datos gracias al uso de vectores, dicho esto podemos decir que su complejidad 
temporal es O(1), es decir, constante pues sólo se están agregando valores y llaves a los vectores, a menos de que la tabla hash se encuentre atareada, en ese caso sería O(n), es 
decir, lineal para el peor de los casos

## Quadratic

# put

Por medio de la función indexOf() es posible conocer el índice de la llave, con esto lo que hace es agregar la llave y el valor que fueron ingresados como parámetros de la 
función, en este caso al ser quadratic no importa si el espacio está ocupado, pues va a moverse cuadráticamente a la siguiente posición disponible, dicho esto podemos decir que su
complejidad temporal es O(1), es decir, constante pues sólo se están agregando valores y llaves a los vectores, a menos de que la tabla hash se encuentre atareada, en ese caso 
sería O(n), es decir, lineal para el peor de los casos
