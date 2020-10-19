### Análisis de complejidad temporal

## push
El algoritmo busca añadir un nuevo elemento al árbol haciendo uso de un ciclo _while_ que sólo hace un pequeño chequeo para asegurarse que hizo bien la comparación
de tamaños, siendo así podemos decir que sigue instrucciones sin mucha complejidad pero que siempre logra encontrar los valores de manera rápida y eficiente para saber
en dónde debe insertar, por lo que podemos concluir que su complejidad temporal es O(log n), es decir, logaritmica, para el peor de los casos.

## pop
El algoritmo busca simplemente remover elementos del árbol sin hacer uso de ningún ciclo, por lo que son sólo una serie de sencillas instrucciones que llaman a la
función _heapify()_ para poder correctamente organizar

## top
Nuevamente tenemos un algoritmo que hace usos de ciclos _if_ con recursión recorriendo n pasos para en este caso encontrar todos los nodos anterior a este y la raíz del árbol,
dado a que hace uso de ciclos _if_ para hacer instrucciones lineales podemos deducir que la complejidad temporal es O(n), es decir, lineal para el peor de los casos.

## empty
El algoritmo busca encontrar el nivel en que se encuentra un valor dado como parámetro de la función, para hacer esto hace uso, nuevamente, de ciclos _if_ recorriendo n pasos, 
los cuales devuelven el nivel, devolviendo -1 en caso de no existir, al ser ciclos que sólo siguen instrucciones lineales podemos decir que 
la complejidad temporal es O(n), es decir, lineal para el peor de los caso.

## size
