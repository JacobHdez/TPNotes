## Variables

Los tipos de datos fundamentales son tipos básicos implementados directamente por el lenguaje que representan las unidades de almacenamiento básicas. Se pueden clasificar principalmente en:

- Tipos de caracteres: Pueden representar un único carácter, como `'A'` o `'$'`. El tipo más básico es `char`, que es un carácter de un byte.
- Tipos numéricos enteros: Pueden almacenar un valor numérico entero, como 7 o 1024. Existen en varios tamaños y pueden ser con signo o sin signo, dependiendo de si admiten valores negativos o no.
- Tipos de coma flotante: Pueden representar valores reales, como 3,14 o 0,01, con distintos niveles de precisión, dependiendo de cuál de los tres tipos de coma flotante se utilice.

La siguiente tabla muestra los tipos básicos:
| Tipo | Tamaño (bytes) | Especificador de formato |
| - | - | - |
| int | al menos 2, usualmente 4 | `%d`, `%i` |
| char | 1 | `%c` (como carácter), `%hhd` (como entero) |
| float | 4 | `%f` |
| double | 8 | `%lf` |


### Declaración de variables

C es un lenguaje fuertemente tipado, y requiere que cada variable sea declarada con su tipo antes de su primer uso. Esto informa al compilador del tamaño que debe reservar en memoria para la variable y de cómo interpretar su valor. La sintaxis para declarar una nueva variable en C es sencilla: simplemente escribimos el tipo seguido del nombre de la variable (es decir, su identificador). Por ejemplo:

```C++
int a;
float my_number;
```
Se pueden declarar uns seria de variables del mismo tipo en una sola sentencia separando sus identificadores con comas. Por ejemplo

```C++
int a, b, c;
```

Esto declara tres variables (`a`, `b` y `c`), todas ellas de tipo `int`, y tiene exactamente el mismo significado que:

```C++
int a;
int b;
int c;
```


Debes tener presente que el valor inicial de una variable declarada está indefinido. Jamás debes acceder al contenido de una variable que no haya sido previamente inicializada. Si lo haces, el compilador no detectará error alguno, pero tu programa presentará un comportamiento indeterminado: a veces funcionará bien, y a veces mal, lo cual es peor que un funcionamiento siempre incorrecto, pues podrías llegar a dar por bueno un programa mal escrito.

Puedes inicializar las variables en el momento de su declaración. Para ello, basta con añadir el operador de asignación y un valor a continuación de la variable en cuestión. Por ejemplo:

```C++
int a = 2;
float b = 2.0, c, d = 1.0, e;
```

En él, las variables `a`, `b` y `d` se inicializan en la declaración y las variables `c` y `e` no tienen valor definido al ser declaradas.