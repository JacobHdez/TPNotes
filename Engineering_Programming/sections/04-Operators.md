## [Operadores](https://cplusplus.com/doc/tutorial/operators/)


### Operador de asignación (`=`)

El operador de asignación asigna un valor a una variable.

```C++
x = 5;
```

Esta sentencia asigna el valor entero 5 a la variable `x`. La operación de asignación siempre se realiza de derecha a izquierda, y nunca al revés:

```C++
x = y
```

Esta sentencia asigna a la variable `x` el valor contenido en la variable `y`. El valor de `x` en el momento en que se ejecuta esta sentencia se pierde y es sustituido por el valor de `y`.

Considera también que sólo estamos asignando el valor de `y` a `x` en el momento de la operación de asignación. Por lo tanto, si `y` cambia en un momento posterior, no afectará al valor que tome `x`.



### Operadores aritméticos (`+`, `-`, `*`, `/`, `%`)

Las cinco operaciones aritméticas soportadas por C son:

| Operador | Descripción |
| - | - |
| `+` | suma |
| `-` | resta |
| `*` | multiplicación |
| `/` | división |
| `%` | modulo |


### Asignación compuesta (`+=`, `-=`, `*=`, `/=`, `%=`, `>>=`, `<<=`, `&=`, `^=`, `|=`)

Los operadores de asignación compuestos modifican el valor actual de una variable realizando una operación sobre ella. Equivalen a asignar el resultado de una operación al primer operando:

| Expresión | Equivalencia |
| - | - |
| `y += x` | `y = y + x` |
| `x -= 5` | `x = x - 5` |
| `x /= y` | `x = x / y` |
| `x *= y + 1` | `x = x + (y + 1)` |


### Incremento y decremento (`++`, `--`)

Algunas expresiones pueden acortarse aún más: el operador de incremento (`++`) y el operador de decremento (`--`) aumentan o reducen en uno el valor almacenado en una variable. Equivalen a `+=1` y a `-=1`, respectivamente. Así:
```C++
++x;
x += 1;
x = x + 1;
```
son todas equivalentes en su funcionalidad; las tres aumentan en uno el valor de x.

Una peculiaridad de este operador es que puede utilizarse como prefijo y como sufijo. Esto significa que puede escribirse antes del nombre de la variable (`++x`) o después (`x++`). Aunque en expresiones sencillas como `x++` o `++x`, ambos tienen exactamente el mismo significado, en otras expresiones en las que se evalúa el resultado de la operación de incremento o decremento, pueden tener una diferencia importante en su significado: En el caso de que el operador de incremento se utilice como prefijo (`++x`) del valor, la expresión se evalúa al valor final de `x`, una vez que ya está incrementado. En cambio, en el caso de que se utilice como sufijo (`x++`), el valor también se incrementa, pero la expresión se evalúa al valor que tenía `x` antes de ser incrementado. Fíjate en la diferencia:

#### Ejemplo 1

```C++
x = 3;
y = ++x;
// x vale 4, y vale 4
```

#### Ejemplo 2

```C++
x = 3;
y = x++;
// x vale 4, y vale 3
```


### Operadores relacionales y de comparación (`==`, `!=`, `>`, `<`, `>=`, `<=`)

Dos expresiones pueden compararse utilizando operadores relacionales y de igualdad. Por ejemplo, para saber si dos valores son iguales o si uno es mayor que otro.

El resultado de la operación proporciona un valor entero: 0 si el resultado es falso y cualquier otro si el resultado es cierto (aunque normalmente el valor para cierto es 1).

| Operador | Descripción |
| - | - |
| `==` | igual a |
| `!=` | distinto a |
| `>` | mayor que |
| `<` | menor que |
| `>=` | mayor o igual a |
| `<=` | menor o igual a |


### Operadores lógicos (`!`, `%%`, ``||``)

El operador `!` es el operador de negación (NOT). Sólo tiene un operando, a su derecha, y la invierte.

Los operadores `&&` y `||` se utilizan cuando se evalúan dos expresiones para obtener un único resultado relacional.

El operador `&&` corresponde al operador AND, mientras que el operador `||` corresponde al operador OR.


### Operadores bit a bit

Los operadores bitwise modifican las variables teniendo en cuenta los patrones de bits que representan los valores que almacenan.

| Operador | Equivalente asm | Descripción |
| - | - | - |
| `&` | AND | AND bit a bit |
| `\|` | OR | OR inclusivo bit a bit |
| `^` | XOR | OR exclusivo bit a bit |
| `~` | NOT | Complemento unario (inversión de bits) |
| `<<` | SHL | Desplazar bits a la izquierda |
| `>>` | SHR | Desplazar bits a la derecha |
