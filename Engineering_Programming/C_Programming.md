# Programación en C


## Estructura de un programa en C

Un programa en `C` no es más que una colección de declaraciones de variables globales y de definiciones de constantes y macros, tipos y funciones. Una de las funciones es especial: se llama *main* y contiene el código del programa principal. La definición de lña función *main* empieza con `int main(void)` o `int main()` y sigue con el cuerpo de la función encerrado entre un par de llaves. La función *main* debe devolver una valor entero al final (típicamente 0), por lo que finaliza con una sentencia `return` que devuelve el valor 0.

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

**Nota**: Un fichero con extensión `.c` que *no define la función **main** no es un programa `C` completo*.
