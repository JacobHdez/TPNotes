# Programación en C


## Estructura de un programa en C

Un programa en C no es más que una colección de declaraciones de variables globales y de definiciones de constantes y macros, tipos y funciones. Una de las funciones es especial: se llama *main* y contiene el código del programa principal. La definición de la función *main* empieza con `int main(void)` o `int main()` y sigue con el cuerpo de la función encerrado entre un par de llaves. La función *main* debe devolver una valor entero al final (típicamente 0), por lo que finaliza con una sentencia `return` que devuelve el valor 0.

```C++
// Importación de funciones, variables, constantes, etc. (bibliotecas)

// Definición de constates y macros

// Definición de nuevos tipos de datos

// Declaración de variables globales

// Definición de funciones

int main()
{
    // Declaraciones de variables propias del programa principal (o sea, ocales a main)

    // Programa principal

    return 0;
}
```

**Nota**: Un fichero con extensión `.c` que *no define la función **main** no es un programa C completo*.


## Bibliotecas en C

Junto con los compiladores de `C` y `C++`, se incluyen ciertos archivos llamados bibliotecas. Las bibliotecas contiene el código objeto de muchos programas que permiten hacer cosas comunes, como leer el teclado, escribir en pantalla, manejar números, realizar funciones matemáticas, etc.

Para ocupar las bibliotecas solo basta con poner al inicio de todo programa lo siguiente:

```C++
#include <nombre de la biblioteca>
```

Estas son algunas bibliotecas básicas y necesarias para la realización de un programa básico en C.


### `stdio.h`

[`stdio.h`](https://cplusplus.com/reference/cstdio/), que significa "standard input-output header" (cabecera estándar E/S), es el archivo de cabecera que contiene definiciones de las macros, las constates, las declaraciones de funciones de la biblioteca estándar para hacer operaciones estándar de entrada y salida, así como las definición de tipos necesarios para dichas operaciones.

```C++
#include <stdio.h>
```


### `stdlib.h`

[`stdlib.h`](https://cplusplus.com/reference/cstdlib/) (std-lib: standard library o biblioteca estándar). Es el archivo de cabecera de la biblioteca estándar de propósito general. Contiene los prototipos de funciones de `C` para gestión de memoria dinámica, control de procesos y otras más.

```C++
#include <stdlib.h>
```


### `math.h`

[`math.h`](https://cplusplus.com/reference/cmath/) es un archivo de cabecera de la biblioteca estándar diseñado para operaciones matemáticas básicas. Muchas de sus funciones incluyen el uso de números en coma flotante.

```C++
#include <math.h>
```


## `C` es un lenguaje de formato libre

En `C` la identación es absolutamente superflua: indentamos los programas únicamente para hacerlos más legibles. En `C` se sabe dónde empieza y dónde acaba in bloque porque éste está encerrado entre una llave abierta (`{`) y otra cerrada (`}`).

Una norma: *las sentencias en `C` acaban con un punto y coma*. Y una excepción ala norma: no hace falta poner punto y coma trs una llave cerrada.
