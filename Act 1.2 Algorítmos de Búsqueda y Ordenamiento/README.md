## Análisis de Complejidad Temporal

### busqBinaria
El algorítmo en ésta función busca ordenar de manera ascendiente la posición del vector en la que se deberia
de encontrar por lo que se situa en el medio del vector y comienza a comparar desde ahí con los números; de ser menor
pasa a buscar entre down (o bottom) y mid -1, caso opuesto para números mayores, buscando en top y sumando a mid.
La complejidad para el peor de los casos es O(log(n)), es decir, logaritmico para el peor de los casos.

### busqSecuencial
El algorítmo en ésta función busca encontrar un número en un vector haciendo uso de un ciclo _for_ que va de i = 0
hasta n, n siendo el número de elementos del vector devolviendo así la posición en el que se encuentra, en caso de 
que no se encutre se devuelve la posición -1.
Dado lo anterior la complejidad de ésta función resulta ser O(n), es decir lineal para el peor de los casos.

### ordenaMerge
El algorítmo en ésta función el algoritmo busca ordenar números en un vector de manera ascendiente haciendo uso de una
función suplementaria llamada mergesplit, la que se posiciona en mid y comienza a aplicar recursión hasta que high - low sea
menor que 1, una vez hecho esto se hace uso de otra función, esta vez mergeArray se encarga de ordenar todos los valores de los subgrupos
creados por las recursiones, después se hace uso de copyArray, quien se encarga de guardar los datos ordenados en el vector temporal.
Dado a lo anterior nos podemos dar cuenta que el algoritmo se va dividiendo entre 2 n pasos gradualmente mientras recorre n pasos para poder ordenar,
por lo que su complejidad es de O(n(log(n)))/n log(n) para el peor de los casos.

### ordenaBurbuja
El algoritmo busca ordenar los valores de un vector de manera ascendente mediante el uso de dos ciclos _for_ que se encuentran _sujetos_
entre si mismos, los que se encargan de buscar el valor más grande y haciendo uso de la función swap intercambiando con esta el valor encontrado
por el que se encuentra en la última posición (j + 1), el proceso se repite con los valores restantes omitiendo los que ya están ordenados.
Dado el número de pasos que le toma a cada ciclo _for_, su complejidad es n(n+1/2) y su complejidad temporal para el peor de los casos es O(n^2), es decir, cuadrático.

### ordenaSeleccion
El algoritmo busca ordenar los valores de un vector de manera ascendente mediante el uso de dos ciclos _for_ que se encuentran _sujetos_
entre si mismos, a diferencia del Bubble, en este se busca primero el valor más pequeño, luego se hace uso de la función swap intercambiando por
el valor que se encuentra en la primera posición (i) dentro de un cojunto ya ordenado para asi poder insertar los elementos de manera correcta y poder
moverse en el vector desde el lugar donde el elemento fue insertado.
Dada la cantidad de pasos de cada ciclo, la complejidad temporal es de O(n^2) para el peor de los casos, es decir, cuadrática.
