### Análisis de complejidad temporal

## visit
El algoritmo busca ordenar los datos del árbol con las funciones _preorder(), postorder(), inorder()_ y _levelorder()_ metiendo sus datos a una variable
auxiliar y convirtiendolo a string, teniendo en cuenta lo anterior podemos decir que el algoritmo es O(n), es decir, lineal para el peor de los casos, porque lo que
estám haciendo las funciones es utilizar ciclos _if_ con recursion para recorrer el árbol, por lo que es un set de instrucciones lineales que simpre van a seguir ese orden.

## height
El algoritmo busca encontrar la _altura_ del arbol, midiendo sus ramas, sumando así las susodichas ramas (nodos) que tiene el arbol, tanto en su lado derecho 
como en su lado izquierdo, sumando 1 al respectivo contador, considerando lo anterior podemos decir que el algoritmo es O(n), es decir, lineal para el peor de los casos, esto
debido a que son tres ciclos _if_ implementando recursión que sólo siguen las instrucciones dadas siguiendo ese orden.

## ancestors
Nuevamente tenemos un algoritmo que hace usos de ciclos _if_ con recursión recorriendo n pasos para en este caso encontrar todos los nodos anterior a este y la raíz del árbol,
dado a que hace uso de ciclos _if_ para hacer instrucciones lineales podemos deducir que la complejidad temporal es O(n), es decir, lineal para el peor de los casos.

## whatlevelamI
El algoritmo busca encontrar el nivel en que se encuentra un valor dado como parámetro de la función, para hacer esto hace uso, nuevamente, de ciclos _if_ recorriendo n pasos, 
los cuales devuelven el nivel, devolviendo -1 en caso de no existir, al ser ciclos que sólo siguen instrucciones lineales podemos decir que 
la complejidad temporal es O(n), es decir, lineal para el peor de los caso.
