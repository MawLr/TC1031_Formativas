### Análisis de complejidad temporal

## remove
El algoritmo busca encontrar y remover lo contenido en un índice que es dado como parámetro de la función, este se busca haciendo uso de un ciclo while que recorre 
la lista hasta encontrar el índice deseado, una vez que se encuentra, su contenido es removido y la lista se ajusta para poder seguir siendo utilizada, cabe 
mencionar que se hace uso de la funcion removeFirst en caso de que se desee remover el primer elemento, en caso de estar vacia se desplegará un aviso, también si 
el head o el tail son iguales la lista se volverá vacía, dicho lo anterior, su complejidad temporal es O(n), es decir, lineal para el peor de los casos pues el 
ciclo sólo recorre n numero de veces la lista, igualmente la complejidad de la función removeFirst es O(1).

## add
El algoritmo en esta función tiene como objetivo primeramente buscar si la lista está vacía o no haciendo uso de un ciclo _if_, en caso de sí estarlo, ésta añade
el valor que se le fue dado como parámetro asignandole el head y tail, en caso de no estar vacía (condición _else_) el valor dado como parámetro se añade al final
de la lista, sin irrumpir con la estructura de ésta, dicho lo anterior su complejidad temporal es O(1), es decir, constante para el peor de los casos debido a que
siempre va a realizar la misma cantidad de pasos para añadir los valores.

## update
El algoritmo en esta función tiene como objetivo actualizar un número en un índice, ambos especificados en los parámetros de la función, para hacer esto el índice 
se busca haciendo uso de un ciclo _while_ que recorre la lista hasta encontrarlo, al encontrar dicho índice se actualiza el valor contenido, dicho lo anterior su 
complejidad temporal es O(n) para el peor de los casos, pues al igual que otras funciones, sólo recorre n número de elementos de la lista.

## find
El algoritmo busca encontrar un número en un índice especificado haciendo uso de un ciclo _while_ que recorre toda la lista hasta encontrar el que contiene la poscición del que se busca, devolviendola o en caso de no existir, devolviendo la poscición -1, dicho lo anterior, su complejidad temporal es O(n), es decir, lineal para el peor de los casos, ya que sólo recorre n número de elementos en la lista.
