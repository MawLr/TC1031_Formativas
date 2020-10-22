### Análisis de complejidad temporal

## add
El algoritmo busca añadir un nuevo elemento al árbol haciendo uso de un ciclo _while_ que sólo hace un pequeño chequeo para asegurarse que hizo bien la comparación
de tamaños, siendo así podemos decir que sigue instrucciones sin mucha complejidad pero que siempre logra encontrar los valores de manera rápida y eficiente para saber
en dónde debe insertar, por lo que podemos concluir que su complejidad temporal es O(log n), es decir, logaritmica, para el peor de los casos.

## remove
El algoritmo busca simplemente remover elementos del árbol sin hacer uso de ningún ciclo, igual que _push_, el algoritmo logra encontrar los valores que se desean eliminar y
ordenar de nuevo con el uso de _heapify()_ de manera rápida y eficiente por lo que podemos concluir que su complejidad temporal es O(log n), es decir, logaritmica para el peor
de los casos.

## find
El algoritmo únicamente busca obtener la raíz del árbol siguiendo un set de instrucciones que nunca cambia, dicho esto podemos cocnluir que su complejidad temporal es O(1), es
decir, constante para el peor de los casos.

## inorder
El algoritmo busca hacer un pequeño chequeo en caso de que el arbol esté vacío, siguiende un set de instrucciones que nunca cambia, dicho lo anterior podemos decir que su
complejidad temporal es O(1), es decir, constante para el peor de los casos.

## size
Al igual que las últimas dos funciones, esta tiene solo un set de instrucciones que nunca cambian, esta vez dirigidas a devolver el tamaño del árbol, por esto podemos decir que
su cpomplejidad temporal es O(1), es decir, constante para el peor de los casos.
