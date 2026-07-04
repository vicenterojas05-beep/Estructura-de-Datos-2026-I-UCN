# Estructura de Datos - UCN

![C++](https://img.shields.io/badge/C%2B%2B-Curso-00599C?logo=cplusplus&logoColor=white)
![CLion](https://img.shields.io/badge/IDE-CLion-000000?logo=clion&logoColor=white)
![VS Code](https://img.shields.io/badge/IDE-VS%20Code-007ACC?logo=visualstudiocode&logoColor=white)
![GDB Online](https://img.shields.io/badge/Online-GDB%20Online-2E8B57)
![Dev C++](https://img.shields.io/badge/Examen-Embarcadero%20Dev--C%2B%2B-B22222)
![Nivel](https://img.shields.io/badge/Nivel-2%20Estructuras%20de%20datos-success)

Repositorio de apoyo para el curso **Estructura de Datos** de la Universidad Católica del Norte.

El material reúne ayudantías, apuntes, intensivas y compendios de ejercicios orientados a comprender cómo se organizan los datos en memoria, cómo se recorren, cómo se modifican y qué costo tienen las operaciones principales sobre cada estructura.

**Profesor de cátedra:** Bastián Ruiz  
**Ayudante:** Pablo Guzmán  
**Periodo base:** 2026-I

## Entorno del curso

El curso se desarrolla principalmente en **C++**. A diferencia de otros ramos, no hay un IDE único que defina el curso: se puede trabajar en CLion, VS Code, GDB Online u otro entorno equivalente.

Las evaluaciones también pueden variar. Algunas pueden ser a papel, usando pseudocódigo cercano a C++; otras pueden ser en computador, usando entornos como **Embarcadero Dev-C++** o **GDB Online**. Lo importante no es el editor, sino comprender punteros, memoria, estructuras dinámicas, recorridos y costos algorítmicos.

## Organización del repositorio

```text
Estructura-de-Datos-UCN/
├── Ayudantías/
│   ├── 2026-S1/
│   └── 2026-S2/
├── Compendio/
└── README.md
```

- [Ayudantías 2026-S1](<Ayudantías/2026-S1/README.md>): índice de ayudantías, intensivas y apuntes del semestre.
- `Ayudantías/2026-S2/`: carpeta reservada para el material del siguiente periodo.
- [Compendio](Compendio/README.md): banco de ejercicios por tema para PP1 y PP2, con enunciados y soluciones.

## Drive complementario

- [Drive Estructura de Datos UCN](https://drive.google.com/drive/u/1/folders/1FYQ9pW4oi6wDTOiPmnqvGxrakmT2eb6Y)

## Introducción

Estructura de Datos es un curso central en la formación de cualquier programador, porque conecta la teoría algorítmica con la implementación concreta. Aquí no basta con saber escribir instrucciones: también hay que decidir **cómo representar la información** para que las operaciones sean correctas, eficientes y razonables según el problema.

Una estructura de datos no es solamente una colección de valores. Es una forma de organizar memoria, relaciones y operaciones. Elegir entre un arreglo, una lista enlazada, una pila, una cola, un árbol, una tabla hash o un grafo cambia la manera en que el programa inserta, elimina, busca, recorre y transforma datos.

## ¿Qué son las estructuras de datos y los algoritmos?

Una **estructura de datos** es una forma de organizar información en memoria para que pueda ser accedida y modificada de manera eficiente. Un **algoritmo** es un procedimiento paso a paso para resolver un problema.

Ambos conceptos se estudian juntos porque la eficiencia de una solución depende de la relación entre:

- La forma en que los datos están almacenados.
- Las operaciones que se quieren realizar.
- La frecuencia con que se ejecutan esas operaciones.
- El costo temporal y espacial de cada decisión.

Por ejemplo, una lista enlazada puede ser cómoda para insertar nodos en ciertas posiciones, pero no ofrece acceso directo por índice como un vector. Un árbol puede ordenar datos de forma jerárquica, pero su rendimiento depende de su forma. Una tabla hash puede ofrecer búsqueda promedio muy rápida, pero exige entender colisiones y función hash.

## Desafíos del curso

- **Pensamiento abstracto:** visualizar cómo los datos se conectan en memoria no siempre es inmediato.
- **Análisis de complejidad:** cada estructura debe estudiarse junto con el costo de buscar, insertar, eliminar y recorrer.
- **Compromisos de diseño:** no existe una estructura universalmente mejor; cada una responde a necesidades distintas.
- **Transición desde Java:** quienes vienen de POO en Java deben adaptarse a C++, punteros, referencias, destructores y control explícito de memoria.

## C++ y su importancia

C++ es un lenguaje robusto, eficiente y ampliamente usado en sistemas de alto rendimiento, videojuegos, motores gráficos, bases de datos y software donde el control de recursos es importante.

Su acceso directo a memoria mediante punteros, su compilación a código nativo y su control fino de recursos lo convierten en un buen lenguaje para estudiar estructuras de datos. Java oculta muchos detalles mediante referencias administradas y recolección de basura; C++, en cambio, obliga a entender qué ocurre con los objetos, las direcciones de memoria y el ciclo de vida de los datos.

## Temario del curso

### Conceptos fundamentales

#### 1. Programación en C++

Sintaxis básica, tipos de datos, funciones, entrada y salida, compilación, separación de archivos y estructura general de un programa en C++.

#### 2. Punteros y memoria

Los punteros permiten almacenar direcciones de memoria y son esenciales para construir estructuras dinámicas. En este curso se estudian junto con `new`, `delete`, referencias, paso de parámetros y errores típicos de memoria.

#### 3. POO en C++

Clases, encapsulamiento, herencia y polimorfismo aplicados en C++. También se revisa la diferencia con Java: constructores, destructores, constructores de copia, operador de asignación, puntero `this` y manejo explícito de recursos.

#### 4. Librería estándar de C++

La STL entrega implementaciones eficientes de estructuras de uso común. No reemplaza la necesidad de entender cómo funcionan, pero sirve como referencia práctica y profesional.

- `vector<T>`: arreglo dinámico. Operaciones comunes: `push_back`, `pop_back`, `size`, `operator[]`, `at`, `front`, `back`, `begin`, `end`. Documentación: <https://en.cppreference.com/w/cpp/container/vector>
- `pair<T1,T2>`: par de valores. Operaciones comunes: `first`, `second`, `make_pair`. Documentación: <https://en.cppreference.com/w/cpp/utility/pair>
- `list<T>`: lista doblemente enlazada. Operaciones comunes: `push_back`, `push_front`, `pop_back`, `pop_front`, `insert`, `erase`, `front`, `back`. Documentación: <https://en.cppreference.com/w/cpp/container/list>
- `stack<T>`: pila LIFO. Operaciones comunes: `push`, `pop`, `top`, `empty`, `size`. Documentación: <https://en.cppreference.com/w/cpp/container/stack>
- `queue<T>`: cola FIFO. Operaciones comunes: `push`, `pop`, `front`, `back`, `empty`, `size`. Documentación: <https://en.cppreference.com/w/cpp/container/queue>
- `map<K,V>`: diccionario ordenado por clave, usualmente implementado sobre árbol balanceado. Documentación: <https://en.cppreference.com/w/cpp/container/map>
- `unordered_map<K,V>`: tabla hash. Operaciones comunes: `insert`, `erase`, `find`, `count`, `operator[]`, `at`, `bucket_count`, `load_factor`. Documentación: <https://en.cppreference.com/w/cpp/container/unordered_map>
- `set<T>`: conjunto ordenado de claves únicas. Operaciones comunes: `insert`, `erase`, `find`, `count`, `contains`. Documentación: <https://en.cppreference.com/w/cpp/container/set>
- Algoritmos de la STL: `sort`, `find`, `reverse` y otras operaciones sobre rangos.

### Estructuras de datos

#### 1. Vectores

Arreglos dinámicos que crecen bajo demanda. Permiten acceso por índice en `O(1)` porque sus elementos se almacenan de forma contigua. Son eficientes para lectura y recorrido secuencial, pero insertar o eliminar en posiciones intermedias puede ser costoso.

#### 2. Listas enlazadas

Estructuras formadas por nodos conectados mediante punteros. Cada nodo almacena un dato y una o más referencias hacia otros nodos. Son útiles para insertar o eliminar sin desplazar grandes bloques de memoria, aunque no permiten acceso directo por índice.

#### 3. Pilas y colas

- **Pila:** estructura LIFO, donde el último elemento en entrar es el primero en salir. Ayuda a entender llamadas recursivas, deshacer operaciones y evaluación de expresiones.
- **Cola:** estructura FIFO, donde el primer elemento en entrar es el primero en salir. Se usa en simulaciones, planificación de tareas y recorridos por niveles.

#### 4. Matriz poco poblada

Representación eficiente de matrices con muchos ceros. En lugar de almacenar todas las posiciones, se guardan solo los elementos relevantes, reduciendo memoria y enfocando las operaciones en datos no nulos.

#### 5. Tablas hash

Estructuras que usan una función hash para asociar claves con posiciones internas. Permiten búsquedas promedio rápidas, pero requieren estudiar colisiones, encadenamiento, sondeo y factor de carga. En términos prácticos, se parecen al concepto de diccionario en Python.

#### 6. Árboles

Estructuras jerárquicas con raíz, nodos, hijos, hojas, altura y profundidad. Incluyen árboles binarios, árboles binarios de búsqueda, heaps y árboles balanceados como AVL.

#### 7. Árboles B*

Árboles de búsqueda multi-ramificados optimizados para acceso a disco. Son importantes en bases de datos e indexación, porque reducen accesos costosos agrupando múltiples claves por nodo.

#### 8. Grafos

Estructuras generales formadas por vértices y aristas. Permiten modelar redes, rutas, dependencias, conexiones y relaciones arbitrarias. Dos recorridos centrales son:

- **DFS:** exploración en profundidad, normalmente apoyada por pila o recursión.
- **BFS:** exploración en amplitud, normalmente apoyada por cola.

## Compendio de ejercicios

El [Compendio](Compendio/README.md) queda en la raíz porque funciona como banco general de estudio del curso, no como material de una ayudantía específica.

- **PP1:** punteros, arreglos, herencia, polimorfismo, listas, pilas, colas, complejidad, verdadero/falso, selección múltiple y ejercicios integradores.
- **PP2:** recorridos de árboles, AVL, HeapSort, algoritmos con árboles, BFS, DFS, algoritmos de grafos, verdadero/falso, selección múltiple y ejercicios integradores.

## Nota importante: transición desde Java

Muchos estudiantes llegan a este curso con experiencia en POO en Java. Esa base ayuda, pero C++ exige cambiar algunas ideas:

- **No hay recolección automática de basura:** la memoria dinámica debe gestionarse explícitamente.
- **Punteros y referencias no son lo mismo:** Java trabaja con referencias administradas; C++ permite manipular direcciones y referencias con reglas distintas.
- **La compilación es distinta:** C++ compila a código nativo, no a bytecode.
- **Hay más control y más responsabilidad:** el lenguaje permite optimizar y acercarse a la memoria, pero también facilita errores si no se administra bien.

### Memoria local, global y heap

En C++ no toda memoria tiene el mismo ciclo de vida:

- **Memoria local o automática:** variables declaradas dentro de funciones o bloques. Se crean al entrar al bloque y se destruyen al salir. No usan `new` ni requieren `delete`.
- **Memoria global o estática:** variables globales o `static`. Existen durante toda la ejecución del programa.
- **Memoria dinámica o heap:** memoria reservada manualmente con `new` o `new[]`. Debe liberarse con `delete` o `delete[]`.

Regla práctica:

- Si usaste `new`, debes usar `delete`.
- Si usaste `new[]`, debes usar `delete[]`.

Errores típicos:

- Liberar dos veces el mismo puntero.
- Usar un puntero después de liberar su memoria.
- Perder la referencia a memoria dinámica sin liberarla.
- No considerar retornos tempranos o excepciones al liberar recursos.

Buenas prácticas:

- Preferir contenedores de la STL cuando resuelvan bien el problema.
- Entender primero la estructura manualmente antes de depender de una implementación ya hecha.
- En código moderno, considerar punteros inteligentes como `unique_ptr` y `shared_ptr` cuando corresponda.

## Nota sobre niveles de abstracción

Estructura de Datos se ubica en un nivel posterior a la programación básica, POO y técnicas iniciales de modelado. Aquí la abstracción principal ya no es una línea de código ni una clase aislada, sino el **contenedor**: una organización de datos y operaciones que se puede aplicar a muchos problemas distintos.

En Programación se piensa cerca de la secuencia:

```text
input -> proceso 1 -> proceso 2 -> proceso 3 -> output
```

En POO y Técnicas se empieza a pensar en dominios, clases, relaciones y componentes básicos. En Estructura de Datos ese componente se estudia con mayor profundidad: una lista enlazada, un árbol, una tabla hash o un grafo no son solamente clases; son formas de organizar información, definir invariantes y razonar sobre costos.

Este curso corresponde al **nivel 2** de la progresión:

| Nivel | Curso o enfoque | Forma principal de pensar |
| --- | --- | --- |
| 0 | [Programación](https://github.com/NicoCG32/Programacion-UCN) | Líneas de código, instrucciones, pasos directos y algoritmos básicos. |
| 1 | [Programación Orientada a Objetos](https://github.com/NicoCG32/Programacion-Orientada-a-Objetos-UCN) y [Técnicas y Metodologías](https://github.com/NicoCG32/Tecnicas-y-Metodologias-de-Programacion-Avanzada-UCN) | Dominio, clases, objetos, relaciones y componentes básicos. |
| 2 | [Estructura de Datos](https://github.com/NicoCG32/Estructura-de-Datos-UCN) | Contenedores, organización de datos, invariantes y algoritmos sobre estructuras. |
| 3 | [Patrones de Software y Programación](https://github.com/NicoCG32/Patrones-de-Software-y-Programacion-UCN) | Componentes, composición de clases, dependencias y arquitectura de software. |

La idea importante es que cada estructura representa una decisión de diseño. No se estudia una lista, un árbol o un grafo para memorizar código, sino para entender cuándo esa forma de organización hace que un problema sea más simple, más eficiente o más expresivo.

**Bienvenido al estudio de las estructuras de datos: el punto donde los datos dejan de ser valores sueltos y empiezan a formar sistemas de organización.**
