# Intensiva I: Ruta Intensiva I

Este archivo contiene solo los ejercicios de la Intensiva I, en orden.

## Ejercicios seleccionados

### Ejercicio I.3

```cpp
#include <iostream>
using namespace std;

void proceso(int* p, int& x) {
    *p = *p + 5;
    x = x + *p;
}

int main() {
    int a = 4;
    int b = 7;

    proceso(&a, b);
    proceso(&b, a);

    cout << a << " " << b << endl;
    return 0;
}
```

### Ejercicio I.5

```cpp
#include <iostream>
using namespace std;

void mover(int* p) {
    *(p + 2) = *(p + 1) + *p;
}

int main() {
    int v[4] = {1, 3, 5, 7};
    mover(v);
    mover(v + 1);

    cout << v[0] << " " << v[1] << " " << v[2] << " " << v[3] << endl;
    return 0;
}
```

### Ejercicio I.7

```cpp
#include <iostream>
using namespace std;

void cambio(int** pp, int* r) {
    **pp = **pp + 1;
    *pp = r;
    **pp = **pp + 4;
}

int main() {
    int a = 2;
    int b = 10;
    int* p = &a;

    cambio(&p, &b);
    *p = *p * 2;

    cout << a << " " << b << endl;
    return 0;
}
```

### Ejercicio II.10

```cpp
#include <iostream>
using namespace std;

class Base {
public:
    Base() { cout << "Base()" << endl; }
    virtual void f() { cout << "Base::f" << endl; }
    virtual ~Base() { cout << "~Base()" << endl; }
};

class Derivada : public Base {
public:
    Derivada() { cout << "Derivada()" << endl; }
    void f() override { cout << "Derivada::f" << endl; }
    ~Derivada() override { cout << "~Derivada()" << endl; }
};

int main() {
    Base* p = new Derivada();
    p->f();
    delete p;
    return 0;
}
```

### Ejercicio IV.5

Analice la complejidad del siguiente algoritmo:

```cpp
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j = j * 2) {
        cout << i * j << endl;
    }
}
```

### Ejercicio IV.10

Se tiene un problema donde:

- leer un elemento cuesta `O(1)`,
- insertar al inicio es frecuente,
- insertar al final casi no se usa,
- no se requiere acceso por índice.

Responda cuál estructura conviene más entre:

- arreglo/vector;
- lista enlazada simple;
- pila;
- cola.

Justifique en términos de operaciones y complejidad.

### Ejercicio VI.5

Implemente una función que decodifique cadenas con el formato:
```text
K[text]
```
Donde `K` es un entero positivo y `text` se repite `K` veces.  
La cadena puede contener **anidamiento**
```text
Ej: K1[text1K2[text2K3...[...]]].
```

Firma:
```cpp
string decodeString(string s);
```

Ejemplos de ejecución:

| Entrada | Salida |
|--------|--------|
| `5[abcd]` | `abcdabcdabcdabcdabcd` |
| `3[ab2[cd]]` | `abcdcdabcdcdabcdcd` |

Consideraciones:

- Solución **iterativa (sin recursión)**
- `text` contiene solo letras (`a-z`, `A-Z`)
- Si aparece un número, siempre precede a `[`
- Puedes usar `isdigit(c)` para detectar números

### Ejercicio X.6

Considere una estructura de tres niveles:

- `L1`: lista circular de alumnos;
- `L3`: por cada alumno, lista simple de ramos;
- `L2`: por cada ramo, lista simple de notas con su ponderación.

Se pide diseñar en pseudocódigo C/C++:

```cpp
double calcularPromedio(AlumnoNode* head, string nombreAlumno, string ramo);
```

La función debe retornar el promedio ponderado de un alumno en un ramo específico.

Luego diseñe:

```cpp
void ordenarRamosPorPromedio(RamoNode*& headRamos);
```

que ordene los ramos de un alumno desde mayor a menor promedio.

Este ejercicio apunta a entrenar problemas donde una lista enlazada no almacena solo enteros, sino también **punteros a otras listas**.

# Pendientes... 

### Ejercicio X.10

Considere un laberinto representado por una matriz de caracteres de tamaño máximo `MAX x MAX`, donde:

- `#` representa muro;
- `.` representa celda libre;
- `E` representa salida.

Use además:

```cpp
const int MAX = 50;

struct Pos {
    int f;
    int c;
    Pos(int f, int c) : f(f), c(c) {}
};
```

Implemente:

```cpp
bool hayCaminoSalidaQueue(char lab[][MAX], int filas, int cols, int fIni, int cIni);
bool hayCaminoSalidaStack(char lab[][MAX], int filas, int cols, int fIni, int cIni);
```

Cada función debe retornar `true` si existe algun camino desde `(fIni, cIni)` hasta una salida `E`, y `false` en caso contrario.

Restricciones y requisitos:

- implemente una version con `queue<Pos>` y otra con `stack<Pos>`;
- no use recursión;
- use una matriz de visitados para no repetir celdas.

Explique además:

1. qué estado guardan la pila y la cola;
2. por qué ambas estructuras sirven para responder existencia de camino;
3. complejidad temporal y espacial.

### Ejercicio X.9

Considere el problema clásico de **misioneros y caníbales**:

- en la orilla izquierda hay `3` misioneros y `3` caníbales;
- el bote puede transportar como máximo `2` personas;
- en cualquier orilla donde haya misioneros, estos no pueden quedar en minoría frente a los caníbales.

Use la siguiente estructura:

```cpp
struct Estado {
    int mIzq;
    int cIzq;
    bool boteIzq;
    int pasos;

    Estado(int mIzq, int cIzq, bool boteIzq, int pasos)
        : mIzq(mIzq), cIzq(cIzq), boteIzq(boteIzq), pasos(pasos) {}
};
```

Implemente:

```cpp
int minCrucesMisionerosCanibales();
```

La función debe retornar la **cantidad mínima de cruces** necesarios para llevar a todos a la orilla derecha.

Si por alguna variante del problema no existiera solución, debe retornar `-1`.

Restricciones y requisitos:

- use explícitamente una `queue<Estado>`;
- modele los estados visitados para no repetir configuraciones;
- no use recursión.

Explique además:

1. qué representa un estado;
2. por qué una cola es adecuada para buscar la solución de menor cantidad de cruces;
3. cómo se valida que un estado sea seguro.