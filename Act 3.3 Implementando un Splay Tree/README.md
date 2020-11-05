### Análisis de complejidad temporal

## add
El algoritmo busca insertar un elementos al arbol mediante el uso de dos funciones, la primera busva conectar el valor obtenido como parametro de la func. principal
y lo posciciona en donde debe de ir y la segunda _splay()_ ordena el arbol haciendo el nuevo valor la raiz, siendo así podemos decir que sigue instrucciones sin 
mucha complejidad pero que siempre logra encontrar los valores de manera rápida y eficiente para saber
en dónde debe insertar, por lo que podemos concluir que su complejidad temporal es O(log n), es decir, logaritmica, para el peor de los casos.

## remove
El algoritmo busca simplemente remover elementos del árbol splay sin hacer uso de ningún ciclo, mediante el uso de varios _if_ se logra este objetivo, colocando el
valor que se desea eliminar en la raiz para que el sucesor lo reemplaze por lo que podemos concluir que su complejidad temporal es O(log n), es decir, logaritmica 
para el peor de los casos.

## find
El algoritmo unicamente busca encontrar el valor ingresado como parametro arrojando un valor booleano en caso de encontrarlo o no implementando recursividad, por lo
que podemos decir que su complejidad temporal es O(n), es decir, lineal para el peor de los casos.

## inorder
El algoritmo busca desplegar en inorder los contenidos del arbol splay en un string, dado a que utiliza varios _if_ con recursividad podemos decir que su
complejidad temporal es O(n), es decir, lineal para el peor de los casos.

## size
Al igual que las últimas dos funciones, esta tiene solo un set de instrucciones que nunca cambian, esta vez dirigidas a devolver el tamaño del árbol, por esto podemos decir que su cpomplejidad temporal es O(1), es decir, constante para el peor de los casos.
