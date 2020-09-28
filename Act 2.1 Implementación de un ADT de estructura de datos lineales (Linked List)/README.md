### Análisis de Cmplejidad

## Find
El algoritmo busca encontrar un número en un índice especificado haciendo uso de un ciclo _while_ que recorre toda la lista hasta encontrar el que contiene
la poscición del que se busca, devolviendola o en caso de no existir, devolviendo la poscición -1, dicho lo anterior, su complejidad temporal es O(n), es decir,
lineal para el peor de los casos, ya que sólo recorre n número de elementos en la lista.

## Update
El algoritmo en esta función tiene como objetivo actualizar un número en un índice, amobos especificados en los parámetros de la función, para hacer esto el indice
se busca haciendo uso de un ciclo _while_ que recorre la lista hasta encontrar el índice al encontrarlo se actualiza el valor contenido, dicho lo anterior
su complejidad temporal es O(n) para el por de los casos, pues al igual que otras funciones, sólo recorre n número de elementos de la lista.

## Remove
El algoritmo busca encontrar y remover lo contenido en un índice que es dado como parámetro de la función, este se busca haciendo uso de un ciclo _while_ que
recorre la lista hasta encontrar el índice deseado, una vez de encuentra, su contenido es removido y la lista se ajusta para poder seguir siendo utilizada,
cabe mencionar que se hace uso de la funcion _removeFirst_ en caso de que se desee remover el primer elemento, esto es para que se ajuste el _head_ de la lista
y pueda leerse sin problemas, dicho lo anterior, su complejidad temporal es O(n), es decir, lineal para el peor de los casos pues el ciclo sólo recorre n numero
de veces la lista, igualmente la complejidad de la función _removeFirst_ es O(1).

## Add
El algoritmo busca añadir elementos nuevos a la lista, para hacer esto se hace uso de un ciclo _while_ que recorren toda la lista hasta llegar a la última poscicion
para añadir el nuevo elemento, el cual se da como parámetro de la función, cabe mencionar que en caso de que se esté añadiendo el primer elemento, cabe mencionar
que en caso de ser el primer elemento se llama a la función _addFirst_, para de esta forma asegurarse de la asignación del head, dicho lo anterior podemos decir que
la complejidad temporal es de O(n), es decir, lineal para el peor de los casos pues el ciclo sólo está recorriendo la lista, mientras que la complejidad de _addFirst_ es de O(1).
