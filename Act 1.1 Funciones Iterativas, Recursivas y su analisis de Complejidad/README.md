## Análisis de Complejidad Temporal

### sumaRecursiva
El algorítmo en ésta función se llama a si mismo n cantidad de veces hasta que n < 1,
ya que 1 es la base, o estado base; teniendo esto en mente podemos llegar a la conclusión
de que la complejidad temporal es: O(n), ya que se comporta de manera lineal considerando
el peor de los casos.

### sumaIterativa
El algorítmo en ésta función recorre n número de pasos al estar en un ciclo _for_ que corre desde
i = 1 hasta n, i se sumará a la acomulacion de si mismo mientras corre el ciclo; tomando lo anterior
en consideración, podemos concluir que la complejidad temporal es: O(n), ya que, al igual que la sumaRecursiva,
se comporta de manera lineal considerando el peor de los casos.


### sumaDirecta
El algorítmo en ésta función lo único que está haciendo es añadir un numero n a una fórmula matemática directa
para determinar la sumatoria de 1 hasta n; con la información previamente mencionada podemos decir que la
complejidad temporal es: O(1), es decir, constante para el peor de los casos, ya que si lo analizamos nos damos
cuenta que al algorítmo sólo le lleva un paso para dar solución al problema.
