# Curso de Videojuegos con C++ desde Cero

## Introducción

Crearemos un videojuego desde cero utilizando C++. Este videojuego será un juego de terminal.

¡Bienvenida o bienvenido al curso!

En esta ocasión nos acompaña Eri Dorado, programador de videojuegos para diferentes plataformas en HyperBeard Games.

En este curso vamos a aprender los conceptos básicos de C++ y el paradigma de la programación orientada a objetos para crear un Videojuego en ASCII; un videojuego que podemos jugar desde la terminal de comandos (así como los hackers de las películas).

### Programación en C++: Fundamentos y Aplicaciones Prácticas

Programar es el proceso de crear algoritmos, sistemas y programas usando lenguajes de programación para comunicarnos con las computadoras.

C++ es un lenguaje veloz porque puede hacer un muy buen manejo de la memoria sin máquinas virtuales ni recolectores de basura (a diferencia de otros lenguajes de programación como Java o C#). Además, C++ es un lenguaje complejo, tiene una gran cantidad de librerías e implementaciones y es constantemente actualizado.

C++ es usado por aplicaciones que requieren una optimización de recursos y un manejo de memoria como prioridad sin dejar de ser escalable, modular y distribuido en varias plataformas. Muchos motores de Videojuegos como Unreal Engine, Creation Engine, CryEngine, Source o incluso Unity 3D utilizan C++.

## Conceptos Generales de C++

Bjarne Stroustrup es un científico de sistemas que creo C++ transformando el lenguaje C con programación orientada a objetos. C++ es igual que C pero con soporte para clases y objetos (POO).

Los compiladores son traductores que convierten nuestros programas escritos con lenguajes de programación a código que pueden entender las máquinas. Cfront fue uno de los primeros compiladores de C++ pero nosotros vamos a usar GCC (GNU Compiler Collection) porque es público, gratuito y open source.

Por otra parte, los IDEs (Entornos de Desarrollo Integrados) son programas que nos ayudan a escribir nuestro código para desarrollar más fácilmente. Nosotros vamos a usar Code::Blocks. Es un IDE gratuito, open source y multiplataforma que soporta varios lenguajes de programación incluyendo C++. Code::Blocks es fácil de usar, tiene una interfaz intuitiva y es compatible con varios compiladores como GCC.

## Preparando el Entorno de Trabajo

### Instalación de Code::Blocks en Windows

Debemos seguir los siguientes pasos para instalar CodeBlocks:

- Entra a la siguiente URL: [CodeBlocks](http://www.codeblocks.org)
- Busca la sección de ""Downloads""
- Puedes descargar la herramienta de forma binaria, con el código fuente o con SVN. Nosotros vamos a usar la opción binaria eligiendo el sistema operativo que tenemos instalado.
- Recuerda descargar la versión que _incluye_ la instalación del _compilador_ de C++ (la que termina con mingw-setup.exe).

### Instalación de Code::Blocks en MacOS

Las instrucciones para instalar Code::Blocks en MacOS son similares a las de Windows, solo seguir los pasos indicados en la página de descargas de Code::Blocks para MacOS.

### Instalación de Code::Blocks en Linux

En Linux, puedes instalar Code::Blocks usando el gestor de paquetes de tu distribución. Por ejemplo, en Ubuntu puedes usar el siguiente comando en la terminal:

```bash
sudo apt update
sudo apt install codeblocks
sudo apt install build-essential
```

Build-essential es un paquete que incluye el compilador de C++ y otras herramientas necesarias para compilar programas en C++.

### Creación de un Proyecto de Consola en C++ Paso a Paso

- La primera vez que abrimos Code::Blocks podemos aceptar la opción de asociar nuestros archivos de C y C++ para que siempre que los abramos abran por defecto en este editor.
- Vamos a crear un nuevo proyecto en File > New > Project > Console application. Recuerda marcar la opción de usar el lenguaje C++ en vez de C y GNU GCC Compiler como compilador.
- Corremos nuestro primer programa de C++ con el botón Build and run.

```cpp
#include <iostream>

int main(){
    std::cout << "Hola Mundo" << std::endl;
    return 0;
}
```

Las instrucciones para VSCode son similares, solo debemos instalar la extensión de C++ y configurar el compilador para que podamos compilar y ejecutar nuestros programas.

### Uso de Librerías en C++

Las librerías son pedazos de código que alguien más escribió y lo compartió con nosotros para que también podamos usarlo y proponer mejoras. Algunas librerías incluso pueden volverse estándares y venir instaladas por defecto con el lenguaje.

Por ejemplo, en nuestro primer ejemplo estamos usando la librería iostream que nos ayuda a imprimir texto en la consola.

### ASCII Art y Videojuegos en la Terminal

El arte ASCII es una forma de crear imágenes usando caracteres de texto. En los videojuegos de terminal, el arte ASCII se utiliza para representar gráficos y elementos visuales utilizando caracteres en lugar de imágenes tradicionales. Esto permite crear juegos que se pueden jugar directamente en la terminal sin necesidad de gráficos avanzados. El arte ASCII es una forma creativa de representar personajes, objetos y escenarios utilizando caracteres como letras, números y símbolos. En los videojuegos de terminal, el arte ASCII se utiliza para crear una experiencia visual única y nostálgica, recordando los primeros días de los videojuegos en la era de las computadoras de texto.

Podemos buscar en internet arte ASCII para usarlo en nuestros videojuegos de terminal o incluso crear nuestro propio arte ASCII utilizando herramientas en línea o programas de edición de texto.

Enlaces útiles para crear arte ASCII:

- [ASCII Art Generator](https://www.ascii-art-generator.org/)
- [ASCII Art Archive](https://www.asciiart.eu/)

## Manejo de Memoria

### Memoria y Tipo de Datos en Computadoras y Programación

Las computadoras pueden guardar todo tipo de información pero solo entienden el código binario (ceros y unos). Lo que pasa es que gracias a los tipos de datos podemos clasificar la información para que los compiladores sepan cómo deben escribir o interpretar estos códigos de forma que los podamos entender en forma de números (no solo 1 y 0), imágenes, textos, documentos y muchas otras cosas.

La memoria de las computadoras, la forma de almacenar información, funciona muy parecido a la memoria de los seres humanos. El proceso consiste en codificar (recibir e interpretar datos, por ejemplo, cuando vemos algo), almacenar (los humanos en el cerebro y las computadoras en el disco duro o la memoria RAM) y recuperar (cuando recordamos el vídeo que vimos y tomamos decisiones a partir de esta información).

El Disco Duro es un lugar donde podemos almacenar nuestros datos a una velocidad media pero de forma que perduran; en cualquier momento podemos volver para leer o sobrescribir los datos.

Por otra parte, la memoria RAM también nos ayuda a guardar información a una velocidad casi inmejorable pero solo por un tiempo; si la máquina pierde poder, nosotros también perdemos la información para siempre.

Tipos de datos

- INT (Enteros)
- Floats (decimales)
- Bool (booleanos: true o false, verdadero o falso, encendido o apagado, negativo o positivo)
- Chars (caracteres)
- Entre otros.

### Variables y tipos de datos en programación básica

Las variables son espacios reservados en memoria, definidos por un nombre y un tipo de dato, en los cuales podemos guardar un valor que también podemos modificar.

Por ejemplo:

```cpp
int Month = 12;
```

Donde int es el tipo de dato, Month el nombre de la variable y 12 el valor.

### Operadores aritméticos y lógicos en Programación

Los operadores son símbolos que nos ayudan a manipular nuestros datos con operaciones lógicas (por ejemplo, operaciones aritméticas).

Operadores aritméticos:

- Suma (+)
- Resta (-)
- Multiplicación (\*)
- División (/)
- Módulo (%: el residuo de una división, por ejemplo, 100 % 2 = 0 o 13 % 5 = 3)
- Aisgnación (=: por ejemplo, Nombre = valor)

Operadores lógicos:

- AND (&&: devuelve true si ambos operandos son verdaderos)
- OR (||: devuelve true si al menos uno de los operandos es verdadero)
- NOT (!: devuelve true si el operando es falso)

### Uso de punteros para Manipulación de Memoria en Programación

Los punteros son variables que almacenan la dirección de memoria de otra variable. Nos permiten manipular directamente la memoria, lo que puede ser útil para optimizar el rendimiento y gestionar recursos de manera eficiente.

Esto significa que podemos modificar la posición donde se guardan nuestras variables y también que tenemos mucho más control sobre ellas.

### Cálculo del Área de Círculo y Esfera con Variables

Hola! Bienvenidos a su primer reto, lo que tienen que hacer es bastante similar a lo que vimos en el video de operadores, pero, ahora tienen que juntarlo con las variables para calcular el área de 3 figuras geométricas diferentes:

#### Figuras

- Nuestra primera figura es el círculo, para calcular su área solo tienen que hacer una variable de radio y multiplicarla por sí misma para llevarla al cuadrado y después por PI(3.1416). Recuerden imprimir su solución usando cout y cualquier pregunta no duden en avisarme.

- La segunda figura que vamos a calcular es la esfera, muy parecida al círculo: (4Pi \* R2), si se figan la única diferencia es multiplicar PI(3.141) por 4 antes de hacer los demás cálculos.

- La tercera figura es el cilindro, para calcular su área necesitamos una variable de radio y otra de altura, después multiplicamos el radio por sí mismo para llevarlo al cuadrado, después por PI(3.1416) y por la altura.

## Entrada de datos y funciones

### Entrada y manejor de datos en programas C++

Las entradas de datos son la interacción de los usuarios o jugadores con nuestro programa. Por ejemplo, cuando presionamos los botones de un control o cuando escribimos texto para buscar una página web.

Vamos usar la librería iostream, la misma que usamos para imprimir texto en la consola, pero esta vez para que los usuarios también puedan escribir en nuestro programa.

Comandos para usar iostream:

- Cout: Comando de flujo de salida de datos (generalmente en la consola).
- Cin: Comando de flujo de entrada de datos, el programa debe esperar a que el usuario introduzca los datos para continuar con su ejecución.

Por ejemplo:

```cpp
int Edad = 0;

// Salida de datos:
cout << "Introduce tu edad: " << endl;

// Entrada de datos. El texto que escriba el jugador
// se guardará en la variable Edad
cin >> Edad;

// Salida de datos con los datos que el usuario
// escribió en el paso anterior
cout << ""¡Qué joven! Solo tienes: "" << Edad << endl;
```

### Operadores Relacionales y Condicionales en Programación

Los condicionales son estructuras de control que nos permiten manipular el flujo de nuestro programa dependiendo de ciertas condiciones establecidas por el programador.

Dicho de otra forma, los condicionales nos ayudan a identificar si una operación o condición de nuestro programa es correcta o falsa y dependiendo de este resultado podemos tomar decisiones: ejecutar una parte del código u otra, volver a comenzar, terminar la ejecución o todo lo que necesitemos.

Operadores condicionales:

- Menor que (<, por ejemplo, `cpp 1 < 10 es verdadero`)
- Mayor que (>, por ejemplo, `cpp 1 > 10 es falso`)
- Igual que (==, por ejemplo, `cpp 100 == 100 es verdadero`, recuerda no confundirlo con el operador de asignación, `cpp =`, que se usa para asignar un valor a una variable)
- Menor o igual que (<=, por ejemplo, `cpp 10 <= 10 es verdadero`)
- Mayor o igual que (>=, por ejemplo, `cpp 10 >= 10 es verdadero`)
- Diferente que (!=, por ejemplo, `cpp 10 != 10 es falso`)

Tipos de condicionales:

- if: Nos permite ejecutar un bloque de código siempre y cuando el resultado de sus condiciones sea verdadero.
- else: Nos permite ejecutar un bloque de código siempre y cuando las condiciones del condicional if NO se cumplan.
- switch: Nos permite programar varios casos dependiendo de los posibles valores de una misma variable para ejecutar diferentes bloques de código dependiendo del caso o condición que se cumpla.

### Condicionales y estructuras de control en Programación

En el camino del aprendizaje en programación, nos encontramos con estructuras que hacen que nuestras aplicaciones tengan la capacidad de tomar decisiones basadas en condiciones. Hoy exploraremos cómo funcionan los condicionales en la programación, específicamente el uso de if, else y switch como herramientas fundamentales para controlar el flujo de un programa. Adentrémonos en la lógica y la sintaxis que hacen posible esta magia de la codificación, aprendiendo a través de ejemplos prácticos cómo implementar estas estructuras y entender mejor sus diferencias y usos apropiados.

#### ¿Qué es un condicional y cómo se utiliza el if?

Los condicionales son instrucciones que permiten a un programa ejecutar diferentes acciones dependiendo de si una o más condiciones se cumplen. El if es la estructura condicional más básica y se usa para establecer una condición que, si resulta ser verdadera, ejecuta un bloque específico de código.

- Si la condición es verdadera, se ejecuta el bloque de código asociado al if.
- Si la condición es falsa, ese bloque de código se omite.

#### ¿Cómo se emplea el else y en qué casos?

El else siempre se usa en combinación con el if. Este bloque de código se ejecuta solamente cuando la condición establecida en el if no se cumple (es decir, es falsa).

- Se utiliza después de un bloque if y contiene código que se ejecuta como alternativa.
- Es útil para manejar el flujo de ejecución cuando queremos que algo suceda si la condición if falla.

#### ¿Qué hace que el else if sea diferente y cuál es su propósito?

El else if permite enlazar múltiples verificaciones de condiciones después de un if. Se utiliza para probar diversas condiciones en secuencia.

- Sirve para verificar múltiples condiciones, una tras otra.
- Solo cuando la condición del if es falsa, se continúa con las siguientes- verificaciones de else if.

#### ¿Cuál es la función del switch y cómo se diferencia del if?

El switch es una estructura condicional que selecciona un bloque de código para ejecutar basándose en el valor de una variable. A diferencia del if, que evalúa condiciones, el switch actúa más como un mapa de rutas basándose en valores exactos.

- Se utiliza para maneja una gran cantidad de casos basados en el valor de una variable.
- Incluye casos (utilizando la palabra clave case) que determinan el bloque de código a ejecutar.
- Es importante no olvidar la declaración de break para evitar la ejecución secuencial de múltiples casos.
- La palabra clave default sirve para definir un bloque de código que se ejecuta cuando ninguno de los casos se cumple.

Ejecución y orden en el flujo de los condicionales

El orden en el que se escriben los condicionales tiene un impacto directo en cómo se ejecutan las instrucciones dentro de un programa. Asegurarse de que las condiciones estén correctamente ordenadas y las sentencias sean exclusivas entre sí para evitar lógicas contradictorias es crucial para un flujo de ejecución correcto.

- Si una condición en un if se cumple, los else if y else subsiguientes no se ejecutan.
- Cambiar el orden de los if y else if puede alterar completamente el resultado de la ejecución.
- Es esencial probar todos los posibles resultados para asegurar que el código se comporte como se desea.

El dominio de los condicionales es un paso esencial en tu camino como programador. Cada estructura tiene sus propias características y situaciones donde brilla, y conocerlas es vital para un código efectivo y limpio. Te animo a practicar, experimentar y no tener miedo de equivocarte; cada error es una oportunidad de aprendizaje que te acerca a la maestría en el arte de la programación. Mantén la curiosidad viva y disfruta de cada desafío que se presente en tu desarrollo como programador.

### Funciones y Encapsulamiento en Programación

Las funciones son bloques de código reutilizables que realizan una tarea específica. Nos permiten organizar nuestro código de manera más eficiente, mejorar la legibilidad y facilitar el mantenimiento. El encapsulamiento es un principio de la programación orientada a objetos que consiste en ocultar los detalles internos de una clase y exponer solo lo necesario a través de métodos públicos. Esto ayuda a proteger los datos y a mantener la integridad de los objetos, permitiendo que el código sea más modular y fácil de entender.

### Funciones en Programación: Creación y Uso eficiente

#### ¿Cómo crear funciones personalizadas en programación?

Crear funciones personalizadas es clave en la programación para encapsular código y evitar repeticiones innecesarias. Al establecer funciones, no solo mejoramos la legibilidad del código, sino que también facilitamos su mantenimiento y expansión en el futuro. ¡Vamos juntos a entender cómo lograrlo!

¿Qué es encapsular en funciones?

Encapsular en funciones implica agrupar varias líneas de comando en un bloque que se puede llamar múltiples veces. Esto se hace para optimizar el código y hacerlo más limpio.

- Ejemplo práctico: Imagina que tienes un conjunto de operaciones que se repiten en tu código. Puedes crear una función que ejecute esas operaciones y luego simplemente llamarla cuando la necesites.

```cpp
void miFuncion() {
    // Lógica de la función
}
```

En el caso de funciones como main(), esta se ejecuta automáticamente porque el compilador la convierte en binario.

#### ¿Cómo crear una función que retorne un valor?

En ocasiones, queremos que nuestras funciones no solo ejecuten comandos, sino que también devuelvan un resultado al programa principal.

- Ejemplo práctico: Supongamos que estás creando un juego y necesitas verificar si un jugador sigue vivo. Crearías una función que verifique los puntos de vida y devuelva un valor booleano.

```cpp
bool estaMuerto(int HP) {
    if (HP <= 0) return true;
    else return false;
}
```

Al llamarla, solo necesitas proporcionar los puntos actuales del jugador. Si se le pasa un valor de 0 o menos, esta función devolverá verdadero.

#### ¿Cómo pasar parámetros a una función?

Las funciones no solo se limitan a ejecutar comandos sin contexto; a menudo requieren recibir datos externos para funcionar correctamente.

- Ejemplo práctico: Puedes pasar una variable con los puntos de vida actual del jugador a la función estaMuerto().

```cpp
int totalHP = 3;
bool estaMuerto(totalHP);
```

Aquí, totalHP determina el comportamiento de la función, permitiendo evaluar dinámicamente la salud del jugador.

#### ¿Cómo manejar múltiples parámetros?

Las funciones pueden aceptar múltiples parámetros, lo que les permite procesar y retornar resultados más complejos.

- Ejemplo práctico: Una función que imprime un mensaje se puede enriquecer al aceptar múltiples cadenas de texto.

```cpp
void imprimirMensaje(String mensaje1, String mensaje2) {
    cout << mensaje1 << ' ' << mensaje2;
}
```

Al invocarla, podrías pasar dos mensajes: imprimirMensaje("Hola", "mundo").

#### ¿Para qué sirve encapsular código en funciones?

Encapsular código tiene varias ventajas significativas:

- Simplificación del código: No repites bloques enteros de código varias veces.
- Facilidad de mantenimiento: Cambiar la lógica dentro de una función automática afecta cada punto en el que se utiliza.
- Legibilidad: Mejora la lectura y comprensión del código, sobre todo para terceros o para cuando revises tu código después de un tiempo.

### Creación de aventuras interactivas con C++ y decisiones de usuario

En este proyecto, vamos a crear una aventura interactiva utilizando C++. La idea es que el jugador pueda tomar decisiones que afecten el desarrollo de la historia. Para lograr esto, utilizaremos funciones para manejar las diferentes partes de la historia y condicionales para permitir que el jugador tome decisiones.

Ejemplo de lo que se vería en la consola:

```bash

¡Bienvenido a la aventura interactiva!

¡Oh no!. Te despiertas con un fuerte dolor de cabeza, no recuerdas nada de tu pasado y estás en un lugar desconocido. Un cuarto desconocido, lo único que alcanzas a ver, son, una ventana, un escusado, un pato de hule y una puerta. ¿Qué quieres hacer?
1. Mirar por la ventana (ventana)
2. Usar el escusado (escusado)
3. Jugar con el pato de hule (pato)
4. Salir por la puerta (puerta)

Respuesta: pato
¡El pato de hule es tu amigo! Te ayuda a recordar tu nombre, tu pasado y te dice que eres un gran programador de videojuegos. ¡Qué alivio! Ahora que sabes quién eres, puedes salir por la puerta y comenzar tu aventura como programador de videojuegos. ¡Buena suerte!

```

## Loops y Arrays

### Arrays: Conceptos Básicos y Manipulación en Programación

Los Arrays son estructuras de datos que nos permiten almacenar múltiples valores del mismo tipo en una sola variable. Son útiles para organizar y manejar grandes cantidades de datos de manera eficiente. En C++, los arrays se declaran especificando el tipo de dato, el nombre del array y su tamaño.

```cpp
int miArray[5]; // Declara un array de enteros con 5 elementos
```

Los arrays pueden ser unidimensionales (como el ejemplo anterior) o multidimensionales (como matrices). Para acceder a los elementos de un array, se utiliza el índice, que comienza en 0.

```cpp
miArray[0] = 10; // Asigna el valor 10 al primer elemento
```

También podemos definir los valores de nuestros arreglos en el momento en que los creamos. Solo debemos añadir llaves ({}) y los datos de cada posición de nuestro arreglo separados por comas.

Por ejemplo:

```cpp
string Names[4] = { ""Eri Dorado"", ""Mariandrea Cruz"", ""JuanDC"", ""Demian"" };
```

### Estructuras de control: Bucles en Programación

Los bucles son estructuras de control que nos permiten repetir un bloque de código varias veces. En C++, existen tres tipos principales de bucles: while, do-while y for.

- El bucle while ejecuta un bloque de código mientras una condición sea verdadera.
- El bucle do-while ejecuta un bloque de código al menos una vez y luego continúa ejecutándolo mientras la condición sea verdadera.
- El bucle for es una estructura más compacta que se utiliza para iterar un número específico de veces, con una sintaxis que incluye la inicialización, la condición y el incremento.

### Contadores y Bucles de Programación: While, Do-While y For

#### ¿Cómo crear un contador usando bucles en programación?

Los bucles son una herramienta esencial en programación, permitiéndonos ejecutar un bloque de código repetidamente bajo ciertas condiciones. Vamos a explorar cómo crear un contador utilizando tres tipos de bucles: while, do while, y for. Entender esto no solo te dará una base sólida en programación, sino que también potenciará tus habilidades para resolver problemas complejos de manera eficiente.

#### ¿Cómo funciona un bucle while?

Comenzamos definiendo nuestro escenario utilizando un bucle while. Este tipo de bucle evalúa una condición al principio de cada iteración. Si la condición se cumple, el bloque de código interno se ejecuta. Aquí te mostramos un ejemplo de un contador sencillo que incrementa hasta 99:

```cpp
int Contador = 0;
while (Contador < 100) {
    printf("%d\n", Contador);
    Contador = Contador + 1;
}
```

- Inicialización: int Contador = 0; se establece para iniciar desde cero.
- Condición del bucle: (Contador < 100) asegura que el bucle se ejecute hasta que Contador alcance 100.
- Incremento: Contador = Contador + 1; aumenta el valor de Contador para avanzar en el bucle.

#### ¿Qué es un bucle do while?

A diferencia del while, un bucle do while garantiza que el bloque de código se ejecute al menos una vez, porque evalúa la condición al final de la ejecución. Es útil cuando queremos ejecutar una acción antes de verificar la condición:

```cpp
bool estoyFeliz = true;
do {
    printf("Estoy feliz\n");
    // Simula la operación para cambiar el estado de felicidad
    estoyFeliz = false; // Como ejemplo, se cambia el valor para salir del bucle
} while (estoyFeliz);
```

- Ejecución inicial: El bloque se ejecuta al menos una vez antes de verificar si estoyFeliz sigue siendo verdad.
- Condición: La condición se evalúa después de ejecutar el bloque, decidiendo si repetir el proceso.

#### ¿Cómo usar un bucle for?

El bucle for es ideal para iteraciones en las que conocemos cuántas veces queremos que el bucle se ejecute, gracias a su estructura concisa compuesta por inicialización, condición y incremento:

```cpp
for (int i = 0; i < 100; i++) {
printf("%d\n", i);
}
```

- Inicialización: int i = 0; establece dónde empieza el bucle.
- Condición: i < 100 determina cuándo debe finalizar la ejecución del bucle.
- Incremento: i++ es el paso que se realiza después de cada iteración.

#### ¿Cómo manipular datos dentro de un bucle?

Además de contar, los bucles facilitan manipular datos complejos. Un ejemplo común es clasificar números en pares e impares:

```cpp
for (int i = 0; i < 10; i++) {
if (i % 2 == 0) {
printf("%d es par\n", i);
} else {
printf("%d es impar\n", i);
}
}
```

- Operador módulo: i % 2 verifica si i es par (residuo cero) o impar.

Los bucles no solo permiten repetición de código, sino que abren la puerta a operaciones más complejas y eficaces. Practica con estos ejemplos para dominar sus aplicaciones. ¡No dudes en experimentar y plantear preguntas en los comentarios si algo no te queda claro!

### Arrays Unidimensionales y Bidimensionales en Programación

Los arrays unidimensionales son estructuras de datos que almacenan una secuencia de elementos del mismo tipo en una sola dimensión. Por ejemplo, un array de enteros que almacena las edades de un grupo de personas:

```cpp
    int edades[5] = {25, 30, 22, 28, 35};
```

Los arrays bidimensionales, por otro lado, son estructuras de datos que almacenan elementos en dos dimensiones, como una tabla o matriz. Por ejemplo, un array bidimensional que representa una matriz de 3x3:

```cpp
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
```

En programación, los arrays bidimensionales son útiles para representar datos tabulares, como mapas en videojuegos, donde cada elemento puede representar un terreno o un objeto. Por ejemplo, en un juego de laberinto, podríamos usar un array bidimensional para representar el mapa del laberinto, donde cada valor indica si es una pared, un camino o una puerta.

### Dibujar Mapas y Personajes en Juegos con Arrays en C++

Vamos a crear una variable con la posición de nuestro personaje y otra con un arreglo de sus posibles posiciones. El objetivo de esto es que podamos crear un ciclo for y dibujar nuestro mundo e indicar en dónde se encuentra nuestro personaje.

Por ahora solo podemos movernos hacia la izquierda y hacia la derecha pero más adelante vamos a programar un mapa un poco más complicado.

### Movimiento de Personajes en Juegos con C++

Vamos a crear la lógica para mover a nuestro personaje hacia la izquierda y hacia la derecha. Para esto, vamos a usar condicionales para verificar si el jugador quiere moverse a la izquierda o a la derecha y luego actualizar la posición del personaje en consecuencia.

¿Cómo manejar el movimiento de nuestro personaje en un juego?

En la creación de videojuegos, el movimiento de personajes es un componente crucial para garantizar una experiencia fluida y atractiva para el jugador. Aquí exploraremos cómo implementar dicho movimiento utilizando un ciclo de comandos básicos que permite al personaje desplazarse a la derecha e izquierda.

¿Cómo se utiliza el comando de entrada?

Para mover un personaje dentro del juego, es esencial permitir la interacción del usuario mediante la entrada de datos. Usamos el comando input() para capturar la entrada desde la consola. Este comando solicita al jugador que ingrese una opción que definirá el movimiento del personaje. Así se almacena:

```cpp
string movimiento;
cout << "¿Hacia dónde quieres moverte? (izquierda/derecha): ";
cin >> movimiento;
```

¿Cómo se implementa el movimiento hacia la derecha e izquierda?
Una vez que tenemos la entrada del usuario, podemos usar condicionales para determinar la dirección del movimiento. Por ejemplo:

```cpp
int posicion = 0; // Posición inicial del personaje
if (movimiento == "derecha") {
    posicion += 1; // Mueve el personaje a la derecha
} else if (movimiento == "izquierda") {
    posicion -= 1; // Mueve el personaje a la izquierda
}
```

En este código, si el jugador ingresa "derecha", la posición del personaje se incrementa en 1, moviéndolo hacia la derecha. Si ingresa "izquierda", la posición se decrementa en 1, moviéndolo hacia la izquierda.

¿Cómo mantener activo el juego con un ciclo?
Para que el juego continúe activo y permita múltiples movimientos, podemos envolver la lógica de movimiento dentro de un bucle while. Esto permitirá que el jugador siga interactuando con el juego hasta que decida salir.

```cpp
while (true) {
    cout << "¿Hacia dónde quieres moverte? (izquierda/derecha/salir): ";
    cin >> movimiento;
    if (movimiento == "salir") {
        break;
    }
}
```

En este caso, el juego seguirá solicitando al jugador que ingrese una dirección de movimiento hasta que escriba "salir", momento en el cual el bucle se romperá y el juego terminará.

Consejos prácticos:

- Manejo de colisiones: Considera incorporar lógica para manejar colisiones con objetos del juego que puedan dañar al personaje.
- Feedback visual: Asegúrate de actualizar de forma continua el display del juego para dar feedback visual inmediato al jugador.
- Pruebas y ajustes: Realiza pruebas para ajustar la sensibilidad y la velocidad del movimiento según las entradas del jugador.

Con una estructura de código clara y lógica sencilla, facilitarás una dinámica de juego interactiva y entretenida. ¡No subestimes la importancia de un movimiento fluido, y sigue explorando maneras innovadoras de enriquecer tus creaciones de juego!

### Programación de Mapas Bidimensionales en Videojuegos

Vamos a crear un mapa bidimensional para nuestro videojuego utilizando arrays. Este mapa representará el mundo en el que se moverá nuestro personaje. Cada elemento del array puede representar diferentes tipos de terreno, como paredes, caminos o puertas. Por ejemplo, podríamos usar el número 0 para representar un camino, el número 1 para una pared y el número 2 para una puerta. Luego, podemos usar condicionales para verificar la posición del personaje en el mapa y permitirle moverse solo por los caminos, evitando las paredes.

En esta clase debemos crear un mapa (un arreglo bidimensional) con todas las posibles posiciones de nuestro héroe. Esto significa que, además de nuestro ciclo for para imprimir cada posición de nuestra columnas, debemos crear otro ciclo para imprimir las columnas (o al revés).

Además, debemos verificar la posición de nuestro héroe en ambas partes, filas y columnas. La forma más rápida de hacerlo es creando dos nuevas variables, heroPosX y heroPosY, para validar sus posiciones en sus respectivos ciclos.

En reto de esta clase es programar la funcionalidad de que nuestro jugador pueda moverse por todo el mapa, incluyendo hacia arriba y abajo, no solo a la izquierda y a la derecha.

Puntos extra si puedes evitar que el jugador salga del mapa, es decir, que la posición de nuestro héroe no pueda ser menor ni mayor que las posiciones de nuestro arreglo bidimensional.

```cpp
void DrawMap(int HeroPosX, int HeroPosY, char GameMap[5][5]) {
  for(int i = 0; i < 5; i++) {
     for(int p = 0; p < 5; p++) {
      if (i != HeroPosY)
      {
        cout << GameMap[p][i];
      }
      else
      {
        if (i != HeroPosY)
        {
          cout << GameMap[p][i];
        }
        else
        {
          cout << 'H';
        }
      }
    }

    // Necesitamos un salto de línea para diferenciar
    // las filas de las columnas:
    cout << endl;
  }
}

int main()
{
  // ...

  int HeroPosX = 1;
  int HeroPosy = 1;
  char GameMap[5][5] =
  {
    {'1','1','1','1','1'},
    {'1','1','1','1','1'},
    {'1','1','1','1','1'},
    {'1','1','1','1','1'},
    {'1','1','1','1','1'},
  }

  // ...
}
```

### Movimiento de Personajes en Cuatro Direcciones con cin

Bienvenidos, en este tercer reto tienen que lograr que su personaje se mueva en las direcciones izquierda, derecha, arriba y abajo. En la clase anterior ya vimos como leer la entrada de datos usando CIN e interpretarla con condicionales para mover a mi personaje en dos direcciones (izquierda y derecha), tienen que hacer lo mismo para moverlo arriba y abajo. Tip: Al igual que sumamos y restamos una variable que representa el movimiento lateral, tenemos que crear otra que represente el movimiento vertical, manipularla y pasársela como parámetro al dibujado del mapa.

Vamos a crear la lógica para mover a nuestro personaje en cuatro direcciones: izquierda, derecha, arriba y abajo. Para esto, vamos a usar condicionales para verificar si el jugador quiere moverse en alguna de estas direcciones y luego actualizar la posición del personaje en consecuencia.

Para mover al personaje hacia arriba, debemos disminuir su posición en el eje Y (HeroPosY - 1). Para moverlo hacia abajo, debemos aumentar su posición en el eje Y (HeroPosY + 1). Para moverlo hacia la izquierda, debemos disminuir su posición en el eje X (HeroPosX - 1). Para moverlo hacia la derecha, debemos aumentar su posición en el eje X (HeroPosX + 1).

Además, debemos asegurarnos de que el personaje no pueda salir del mapa, es decir, que su posición no sea menor que 0 ni mayor que el tamaño del mapa menos 1. Para esto, podemos usar condicionales para validar la nueva posición antes de actualizarla.

## Lectura de Archivos

### Lectura y escritura de archivos con fstream en C++

En C++, la biblioteca fstream nos permite trabajar con archivos para leer y escribir datos. Para leer un archivo, podemos usar la clase ifstream, que se encarga de manejar la entrada de datos desde un archivo. Para escribir en un archivo, podemos usar la clase ofstream, que se encarga de manejar la salida de datos hacia un archivo.

Para leer un archivo, primero debemos incluir la biblioteca fstream y luego crear un objeto de tipo ifstream. Luego, podemos usar el método open() para abrir el archivo y el operador de extracción (>>) para leer los datos. Finalmente, debemos cerrar el archivo con el método close().

```cpp
#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ifstream archivo("datos.txt");
    std::string linea;

    if (archivo.is_open()) {
        while (std::getline(archivo, linea)) {
            std::cout << linea << std::endl;
        }
        archivo.close();
    } else {
        std::cout << "No se pudo abrir el archivo." << std::endl;
    }

    return 0;
}
```

Para escribir en un archivo, podemos usar la clase ofstream de manera similar. Primero, creamos un objeto de tipo ofstream y luego usamos el método open() para abrir el archivo en modo de escritura. Podemos usar el operador de inserción (<<) para escribir datos en el archivo. Finalmente, cerramos el archivo con el método close().

```cpp
#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ofstream archivo("datos.txt");

    if (archivo.is_open()) {
        archivo << "Hola, este es un archivo de texto." << std::endl;
        archivo << "Estamos aprendiendo a escribir en archivos con C++." << std::endl;
        archivo.close();
    } else {
        std::cout << "No se pudo abrir el archivo." << std::endl;
    }

    return 0;
}
```

### Lectura y Escritura de Archivos en Programación

#### ¿Cómo leer archivos en un programa?

Leer archivos en un programa es fundamental para utilizar información previamente almacenada. Este proceso te permite acceder a datos guardados en un almacenamiento secundario, como es el caso de datos de inventarios en juegos o configuraciones de software. Para leer archivos de forma eficaz, recurrimos a una estructura específica dentro del lenguaje de programación.

#### ¿Qué tipo de datos se utilizan para leer archivos?

Para leer archivos, utilizamos el tipo de dato ifstream. Este tipo de dato es similar a ofstream, pero está específicamente diseñado para la entrada de datos (input), a diferencia de ofstream que se utiliza para la salida de datos (output). Al leer un archivo, creamos una instancia ifstream para ingresar el contenido del archivo al sistema.

```cpp
std::ifstream miArchivo;
miArchivo.open("data.txt");
```

#### ¿Cómo asegurarse de que el archivo está abierto correctamente?

Es esencial comprobar si nuestro archivo se ha abierto correctamente para evitar errores durante la ejecución del programa. Esto se puede hacer utilizando métodos de verificación que permiten asegurarse de que no hubo problemas de acceso causados por antivirus u otros procesos del sistema.

```cpp
if (!miArchivo.is_open()) {
    std::cout << "No se logró abrir el archivo. Verifique si hay un antivirus interfiriendo." << std::endl;
}
```

#### ¿Cómo leer líneas de un archivo?

Una vez que el archivo está abierto, procedemos a leer su contenido línea por línea. Esto se realiza utilizando la función getline, que extrae caracteres hasta encontrar un punto y seguido.

```cpp
std::string linea;
while (std::getline(miArchivo, linea)) {
    std::cout << linea << std::endl;
}
```

#### ¿Cómo puedo utilizar lo leído del archivo?

Al leer un archivo, podemos implementar funcionalidades que mejoren la interactividad con el usuario o que mantengan su progreso en el juego. Por ejemplo, podríamos solicitar al usuario el nombre de un personaje, guardarlo en el archivo y después recuperarlo.

- Solicitar y guardar una entrada del usuario

Podemos solicitar al usuario que ingrese su nombre o el de un personaje, y guardarlo en nuestro archivo para usos futuros.

```cpp
std::string nombreDelJugador;
std::cout << "Por favor, introduce el nombre de tu personaje: ";
std::cin >> nombreDelJugador;
miArchivo << nombreDelJugador << std::endl;
```

- Recuperar un dato específico del archivo

Para recuperar información específica, leemos el archivo línea por línea hasta encontrar la línea deseada. Así, podemos extraer el nombre del personaje o cualquier otro dato particular que se haya guardado.

```cpp
int lineaActual = 0;
std::string nombreDelHeroe;
while (std::getline(miArchivo, linea)) {
if (lineaActual == 2) { // Suponiendo que el nombre del héroe está en la línea 3.
nombreDelHeroe = linea;
break;
}
lineaActual++;
}
std::cout << "El nombre de tu héroe es: " << nombreDelHeroe << std::endl;
```

Trabajar con archivos te permite extender las posibilidades de tus programas, guardar progreso de manera duradera y realizar ajustes personalizables. Dominar estas técnicas enriquecerá tus habilidades de programación y te permitirá crear aplicaciones más completas y funcionales. ¡Sigue explorando y aprendiendo para llevar tus conocimientos al siguiente nivel!

### Posicionamiento del Jugador en el Mapa de Juego

En este reto, vamos a aprender cómo posicionar a nuestro jugador en el mapa de juego utilizando la información que hemos leído de un archivo. Para esto, primero debemos asegurarnos de que el archivo contenga la información necesaria sobre la posición del jugador, como sus coordenadas X e Y. Luego, podemos usar esta información para actualizar la posición del jugador en el mapa y dibujar el mapa con el jugador en su ubicación correcta.

Nuestro siguiente reto es marcar en el mapa la posición del jugador, la manera de hacer esto es poniendo un número que represente donde va a aparecer al inicio, interpretarlo en la lectura del archivo y asignarlo a la posición del jugador para que funcione correctamente. (Spoilers abajo)

Tips:

- Modificar el archivo del mapa asignando un símbolo único que represente donde va a aparecer el personaje (con un ‘3’ por ejemplo).
- Cargar las líneas del archivo usando fstream e iterar con un for carácter por carácter.
- Cuando se encuentra con el símbolo único ‘3’ guardar la posición de la fila y la columna ( la línea y el índice del for).
- Pasarle esos datos al jugador ya sea directamente con una referencia o leyendo los valores en variables de la clase.
- Dibujar el mapa.

## Programación Orientada a Objetos

### Programación Orientada a Objetos: Conceptos y Beneficios

La Programación Orientada a Objetos es un paradigma de programación, un estilo, una lógica, una organización, una forma de pensar para resolver problemas. Con este paradigma nuestras aplicaciones están basadas en objetos en lugar de comandos y en datos en lugar de lógica.

Así como los carros están construidos a partir de objetos independientes (como llantas, motor, piezas del motor, entre otras), nuestras aplicaciones van a estar construidas a partir de objetos que pueden tener múltiples instancias pero todas ""heredan"" del mismo objeto (así como las llantas de los carros, cada carro tiene 4 llantas y cada llanta fue construida de la misma manera que las otras).

Pensar en nuestra aplicación como objetos independientes que componen la información y sus comportamientos nos aporta muchos beneficios. Por ejemplo: podemos agregar o quitar objetos de nuestra aplicación sin necesidad de cambiar todo el código del programa.

Además, por trabajar con objetos separados, cada objeto debe funcionar de forma independiente y debe revisar su lista de dependencias; nos aseguramos de no tener ninguna dependencia de sobra o haciendo falta (por ejemplo: las llantas pueden seguir rodando sin un motor y las puertas pueden abrirse aunque las sillas no puedan inclinarse, todos los objetos son independientes).

### Programación Orientada a Objetos: Clases e Instancias en C++

En la Programación Orientada a Objetos, una clase es una plantilla o un molde que define las características y comportamientos de un tipo de objeto. Una instancia, por otro lado, es un objeto específico creado a partir de una clase. En C++, podemos definir una clase utilizando la palabra clave "class", seguida del nombre de la clase y un bloque de código que contiene sus atributos (variables) y métodos (funciones). Por ejemplo:

```cpp
class Jugador {
private:
    int x, y;
public:
    Jugador(int posX, int posY);
    void mover(int dx, int dy);
    void dibujar();
};
```

En este ejemplo, hemos definido una clase llamada "Jugador" con atributos privados "x" e "y" que representan la posición del jugador en el mapa. La clase también tiene un constructor para inicializar estos atributos, un método "mover" para actualizar la posición del jugador y un método "dibujar" para representar al jugador en el mapa.

### Encapsulación de Datos en Programación Orientada a Objetos

La encapsulación de datos es un principio fundamental de la Programación Orientada a Objetos que consiste en ocultar los detalles internos de una clase y exponer solo lo necesario a través de métodos públicos. Esto se logra utilizando modificadores de acceso como "private", "protected" y "public". Al encapsular los datos, protegemos la integridad de los objetos y evitamos que el código externo acceda directamente a los atributos, lo que puede prevenir errores y mejorar la seguridad del programa. Por ejemplo:

```cpp

class Jugador {
    private:
        int x, y; // Atributos privados
    public:
        Jugador(int posX, int posY) : x(posX), y(posY) {} // Constructor
        void mover(int dx, int dy) { // Método público para mover al jugador
            x += dx;
            y += dy;
        }
        void dibujar() { // Método público para dibujar al jugador
            // Código para representar al jugador en el mapa
        }
    };
```

En este ejemplo, los atributos "x" e "y" están encapsulados como privados, lo que significa que solo pueden ser accedidos y modificados a través de los métodos públicos "mover" y "dibujar". Esto garantiza que la posición del jugador solo se pueda cambiar de manera controlada, manteniendo la integridad del objeto.

### Abstracción en Programación Orientada a Objetos

La abstracción es otro principio clave de la Programación Orientada a Objetos que se refiere a la capacidad de representar conceptos complejos de manera simplificada. La abstracción nos permite enfocarnos en los aspectos esenciales de un objeto mientras ocultamos los detalles innecesarios. Esto se logra mediante la creación de clases que representan entidades del mundo real y la definición de métodos que permiten interactuar con esas entidades sin necesidad de conocer su implementación interna. Por ejemplo, en un juego, podríamos tener una clase "Enemigo" que abstrae las características y comportamientos comunes de todos los enemigos, permitiendo que el jugador interactúe con ellos sin preocuparse por cómo están implementados internamente.

```cpp
class Enemigo {
    private:
        int salud;
    public:
        Enemigo(int saludInicial) : salud(saludInicial) {} // Constructor
        void recibirDaño(int daño) { // Método para recibir daño
            salud -= daño;
            if (salud <= 0) {
                // Código para manejar la muerte del enemigo
            }
        }
        void atacar() { // Método para atacar al jugador
            // Código para realizar un ataque
        }
};
```

En este ejemplo, la clase "Enemigo" abstrae las características comunes de los enemigos, como su salud y sus métodos para recibir daño y atacar. El jugador puede interactuar con los enemigos utilizando estos métodos sin necesidad de conocer cómo se implementan internamente, lo que facilita la gestión de la complejidad del juego.

### Herencia en Programación Orientada a Objetos: Clases y Constructores

La herencia es un principio fundamental de la Programación Orientada a Objetos que permite crear nuevas clases basadas en clases existentes. La clase que hereda se llama clase derivada o subclase, mientras que la clase de la que se hereda se llama clase base o superclase. La herencia permite reutilizar código y establecer una relación jerárquica entre las clases. En C++, podemos usar la sintaxis de dos puntos (:) para indicar que una clase deriva de otra. Por ejemplo:

```cpp
class Personaje {
    protected:
        int salud;
    public:
        Personaje(int saludInicial) : salud(saludInicial) {} // Constructor
        void recibirDaño(int daño) {
            salud -= daño;
            if (salud <= 0) {
                // Código para manejar la muerte del personaje
            }
        }
};

class Enemigo : public Personaje { // Enemigo hereda de Personaje
    public:
        Enemigo(int saludInicial) : Personaje(saludInicial) {} // Constructor que llama al constructor de la clase base
        void atacar() {
            // Código para realizar un ataque
        }
};
```

En este ejemplo, la clase "Enemigo" hereda de la clase "Personaje", lo que significa que "Enemigo" tiene acceso a los atributos y métodos de "Personaje". El constructor de "Enemigo" llama al constructor de "Personaje" para inicializar el atributo "salud". Esto permite que "Enemigo" reutilice la lógica de manejo de salud definida en "Personaje", evitando la duplicación de código y facilitando la extensión de funcionalidades específicas para los enemigos.

### Tipos de acceso en la herencia de clases en programación orientada a objetos

En la herencia de clases en programación orientada a objetos, existen tres tipos principales de acceso que determinan cómo los miembros de la clase base son accesibles desde la clase derivada: público (public), protegido (protected) y privado (private). El acceso público permite que los miembros de la clase base sean accesibles desde cualquier parte del programa, incluyendo la clase derivada. El acceso protegido permite que los miembros de la clase base sean accesibles solo dentro de la clase base y sus clases derivadas, pero no desde fuera de estas clases. El acceso privado hace que los miembros de la clase base sean accesibles solo dentro de la propia clase base, lo que significa que no pueden ser accedidos ni por la clase derivada ni por ningún otro código externo.

```cpp
class Personaje {
    protected:
        int salud; // Acceso protegido
    public:
        Personaje(int saludInicial) : salud(saludInicial) {} // Constructor
        void recibirDaño(int daño) {
            salud -= daño;
            if (salud <= 0) {
                // Código para manejar la muerte del personaje
            }
        }
};

class Enemigo : public Personaje { // Enemigo hereda de Personaje
    public:
        Enemigo(int saludInicial) : Personaje(saludInicial) {} // Constructor que llama al constructor de la clase base
        void atacar() {
            // Código para realizar un ataque
        }
};


```

En este ejemplo, el atributo "salud" tiene acceso protegido, lo que significa que puede ser accedido por la clase "Personaje" y cualquier clase que herede de ella, como "Enemigo". Sin embargo, no puede ser accedido directamente desde fuera de estas clases, lo que ayuda a proteger la integridad del objeto y a controlar cómo se manipula su estado interno.

### Polimorfismo en C++: Teoría y Práctica

El polimorfismo es un concepto fundamental en la programación orientada a objetos que permite que objetos de diferentes clases sean tratados como objetos de una clase común. En C++, el polimorfismo se logra principalmente a través del uso de funciones virtuales y herencia. Las funciones virtuales permiten que una función definida en una clase base sea sobrescrita por una función con la misma firma en una clase derivada, lo que permite que el programa determine en tiempo de ejecución qué función ejecutar según el tipo del objeto al que se está accediendo.

```cpp
class Personaje {
    public:
        virtual void atacar() { // Función virtual
            std::cout << "El personaje ataca de manera genérica." << std::endl;
        }
};

class Enemigo : public Personaje {
    public:
        void atacar() override { // Sobrescribe la función virtual
            std::cout << "El enemigo ataca con ferocidad." << std::endl;
        }
};

int main() {
    Personaje* personaje = new Personaje();
    Personaje* enemigo = new Enemigo();

    personaje->atacar(); // Llama a la función de Personaje
    enemigo->atacar(); // Llama a la función sobrescrita de Enemigo

    delete personaje;
    delete enemigo;

    return 0;
}
```

En este ejemplo, la clase "Personaje" tiene una función virtual "atacar", que es sobrescrita por la clase "Enemigo". Cuando se llama a la función "atacar" a través de un puntero de tipo "Personaje", el programa determina en tiempo de ejecución qué versión de la función ejecutar según el tipo del objeto al que apunta el puntero. Esto permite que el mismo código pueda trabajar con objetos de diferentes clases de manera flexible y extensible, lo que es una de las principales ventajas del polimorfismo en la programación orientada a objetos.

## Finalizando nuestro proyecto

En esta sección se recopilan los temas relacionados con la creación de un juego de laberinto en C++, incluyendo la programación de mapas, el movimiento de personajes, la lectura de archivos y la aplicación de conceptos de programación orientada a objetos.

Usa esta sección para revisar y consolidar los conocimientos adquiridos a lo largo del curso, aplicándolos en la construcción de un juego de laberinto donde los personajes deben moverse, explorar y encontrar un tesoro para ganar el juego. Asegúrate de integrar correctamente los conceptos de clases, herencia, polimorfismo y manejo de archivos para crear una experiencia de juego completa y funcional.

A medida que avances en la construcción de tu juego, no dudes en experimentar con diferentes diseños de mapas, mecánicas de movimiento y desafíos para hacer tu juego único y entretenido. ¡Diviértete programando y creando tu propio mundo de laberinto!

Nota: Al final del documento hay unas notas extras sobre como compilar el proyecto utilizando CMake y Makefiles, así como compilarlo desde la terminal de forma manual con g++. Estas notas pueden ser útiles para asegurarte de que tu proyecto se compila correctamente y para entender mejor el proceso de construcción de un programa en C++.

### Programación de un Juego de Laberinto en C++

Vamos a construir nuestro proyecto: un laberinto por donde los personajes deben moverse (con las teclas) y explorar hasta encontrar el tesoro para ganar el juego.

Los archivos de encabezado y de código fuente son archivos diferentes a nuestro archivo principal (main.cpp) donde podemos guardar partes de nuestro código para usarlo desde nuestro archivo principal sin necesidad de escribir todo el código en un solo lugar.

Solo debemos añadir el siguiente código para importar (o incluir) estos nuevos archivos:

```cpp

#include "NombreDeNuestroArchivo.hpp" //si está en otra carpeta, debemos añadir la ruta relativa a nuestro proyecto

```

Los destructores son como los constructores de nuestras clases pero, en vez de llamarse cuando creamos la clase, se ejecutan cuando se destruyen. Podemos definirlos de la siguiente manera:

```cpp

class Player
{
        public:
                Player(); // Constructor
                virtual ~Player(); // Destructor
};

```

El destructor se llama automáticamente cuando un objeto de la clase es destruido, lo que puede ocurrir cuando el programa termina o cuando el objeto sale del alcance. El destructor se utiliza para liberar recursos que el objeto pueda haber adquirido durante su vida útil, como memoria dinámica o archivos abiertos.

En resumen, tenemos que crear una estructura de archivos organizada para nuestro proyecto, utilizando archivos de encabezado para declarar nuestras clases y archivos de código fuente para definir su comportamiento. Además, debemos implementar constructores y destructores en nuestras clases para gestionar adecuadamente la creación y destrucción de objetos, asegurando que los recursos se manejen de manera eficiente a lo largo del ciclo de vida de nuestros objetos en el juego.

La estructura de archivos para nuestro proyecto de juego de laberinto podría verse así:

```txt

- include/
  - Player.hpp
  - Map.hpp
  - Enemy.hpp
- src/
  - Player.cpp
  - Map.cpp
  - Enemy.cpp
- output/
- CMakeLists.txt
- main.cpp

```

Estos archivos y carpetas nos ayudarán a organizar nuestro código de manera eficiente, permitiéndonos desarrollar nuestro juego de laberinto de forma estructurada y mantenible.

archivo de encabezado (Player.hpp):

```cpp
    #pragma once //Evita que la cabecera sea llamada más de una vez en la misma sesión de ejecución.

    #ifndef PLAYER_HPP
    #define PLAYER_HPP

    class Player
    {
        private:

        protected:

        public:
            Player(); //Constructor
            //virtual ~Player(); //Destructor, lo comentamos temporalmente.

            void callInput();
    };

    #endif //PLAYER_HPP
```

archivo de código fuente (Player.cpp):

```cpp
    #include <iostream>
    #include "../include/Player.hpp"

    Player::Player(/* args */) //Definición del constructor
    {
    }

    /*Player::~Player() //Definición del destructor
    {
    }*/

    void Player::callInput(){
        std::cout << "LLamada a la función callInput()"<< std::endl;
    }
```

archivo principal (main.cpp):

```cpp
    #include <iostream>
    #include "include/Player.hpp" //Incluimos la librería de cabecera donde definimos
    //nuestras propias clases. Hay que indicar la ruta completa del archivo si no está
    //en el mismo nivel que main.cpp

    int main(){
        Player hero;

        hero.callInput();
        return 0;
    }
```

### Controles básicos de movimiento en videojuegos con programación en C++

Creamos un juego de laberinto en C++ donde el jugador puede moverse utilizando las teclas de dirección. Para esto, implementamos una función que captura la entrada del usuario y actualiza la posición del jugador en el mapa. Utilizamos un ciclo para mantener el juego activo y permitir múltiples movimientos hasta que el jugador decida salir.

En el archivo Player.hpp declaramos las variables x e y para representar la posición del jugador en el mapa, así como un método callInput() para manejar la entrada del usuario. En el archivo Player.cpp, definimos el constructor para inicializar la posición del jugador y el método callInput() para capturar la entrada del usuario y actualizar la posición en consecuencia. En el archivo main.cpp, creamos una instancia de la clase Player y llamamos al método callInput() para iniciar el proceso de movimiento del jugador.

Para esto usamos un ciclo while que se ejecuta continuamente, solicitando al usuario que ingrese una dirección de movimiento (izquierda, derecha, arriba o abajo) o la opción de salir. Según la entrada del usuario, actualizamos las coordenadas del jugador y dibujamos el mapa con la nueva posición del jugador. El juego continuará activo hasta que el usuario decida salir (aún no implementado).

Archivo Player.hpp:

```cpp
#pragma once //Evita que la cabecera sea llamada más de una vez en la misma sesión de ejecución.

#ifndef PLAYER_HPP
#define PLAYER_HPP

class Player
{
    private:

    protected:
        //Movimiento del juegador
        int x, y;

    public:
        Player(); //Constructor
        //virtual ~Player(); //Destructor, lo comentamos temporalmente.

        void callInput();
};

#endif //PLAYER_HPP
```

Archivo Player.cpp:

```cpp
#include <iostream>
#include "../include/Player.hpp"

Player::Player(/* args */){//Definición del constructor
    x = 1;
    y = 1;
}

/*Player::~Player() //Definición del destructor
{
}*/

void Player::callInput(){
    /* Comentamos esta línea ya que era por motivos de pruebas.
    std::cout << "LLamada a la función callInput()"<< std::endl;
    */
   /* Vamos a crear el movimiento del jugador */
   char userInput = ' ';

   std::cin >> userInput;

   switch (userInput){

    case 'w':
        y++;
        std::cout << "El jugador se mueve arriba." << std::endl;
        break;
    case 's':
        y--;
        std::cout << "El jugador se mueve abajo." << std::endl;
        break;
    case 'a':
        x--;
        std::cout << "El jugador se mueve izquierda." << std::endl;
        break;
    case 'd':
        x++;
        std::cout << "El jugador se mueve derecha." << std::endl;
        break;
    default:

        break;
    }
    /* Fin control entrada teclado movimiento */
    /* Visualizamos las coordenadas del jugador */
    std::cout << "El jugador está en las coordenadas: " << x << ", " << y << std::endl;
}
```

Archivo main.cpp:

```cpp
#include <iostream>
#include "include/Player.hpp" //Incluimos la librería de cabecera donde definimos
//nuestras propias clases. Hay que indicar la ruta completa del archivo si no está
//en el mismo nivel que main.cpp

int main(){
    bool isGameOver = false;
    Player hero;

    std::cout << "¡Comienza el juego!" << std::endl;
    /* Creamos el game loop */
    while(!isGameOver){
        //Aquí va todo el bucle del juego
        hero.callInput();
    }

    return 0;
}
```

### Creación de Clases para mapas en Juegos de programación

En este reto, vamos a crear una clase para representar el mapa de nuestro juego de laberinto. Esta clase se encargará de almacenar la información del mapa, como las paredes, los caminos y la posición del jugador. Además, implementaremos métodos para dibujar el mapa en la consola y para verificar las colisiones entre el jugador y las paredes.

Creamos los archivos de encabezado y código fuente para la clase Map, donde definimos los atributos necesarios para representar el mapa, como un arreglo bidimensional que almacena la estructura del laberinto. También implementamos métodos para cargar el mapa desde un archivo, dibujar el mapa en la consola y verificar las colisiones. En el archivo main.cpp, creamos una instancia de la clase Map y utilizamos sus métodos para mostrar el mapa y manejar las interacciones del jugador con el entorno.

Los archivos creados son los siguientes:

- include/MapCell.hpp: Define la clase MapCell, que representa cada celda del mapa, con atributos para indicar si es una pared o un camino, y métodos para acceder a esta información.
- include/GameMap.hpp: Define la clase GameMap, que representa el mapa completo del juego, con métodos para cargar el mapa desde un archivo, dibujarlo en la consola y verificar colisiones.
- src/MapCell.cpp: Implementa los métodos de la clase MapCell.
- src/GameMap.cpp: Implementa los métodos de la clase GameMap.

Contenido de MapCell.hpp:

```cpp
/* para manejar cada una de las celdas del mapa */
#pragma once //Evita que la cabecera sea llamada más de una vez en la misma sesión de ejecución.

#ifndef MAPCELL_HPP
#define MAPCELL_HPP

/*Cada celda va a tener 3 posibles valores
    H --> Jugador
    0 --> Vacia
    1 --> Pared
*/
class MapCell
{
    private:

    protected:

    public:
    MapCell();

    int id;

};

#endif
```

Contenido de GameMap.hpp:

```cpp
/* para manejar cada una de las celdas del mapa */
#pragma once //Evita que la cabecera sea llamada más de una vez en la misma sesión de ejecución.

#ifndef GAMEMAP_HPP
#define GAMEMAP_HPP

#include "MapCell.hpp" /*Nos servirá para crear un array de celdas de mapa con su come-
tido cada una */

class GameMap
{
    private:

    protected:

    public:
    GameMap();
    MapCell cells[15][10]; //Creamos la matriz de celdas previamente definidas

    /*Función que dibjará el map */
    void DrawMap();

};

#endif //GAMEMAP_HPP
```

Contenido de MapCell.cpp:

```cpp
#include "../include/MapCell.hpp"

/*Cada celda va a tener 3 posibles valores
    H --> Jugador
    0 --> Vacia
    1 --> Pared
*/

MapCell::MapCell(){ //Constructor

    id = 0; //Indica que inicialmente todas las celdas estarán vacías.

}

/*mapCell::~MapCell(){

}*/
```

Contenido de GameMap.cpp:

```cpp
#include "../include/GameMap.hpp"
#include <iostream>


GameMap::GameMap(){ //Constructor

}

/*mapCell::~MapCell(){
    //Destructor
}*/

void GameMap::DrawMap(){
    for(int i=0; i < 15; i++){

        for(int p=0; p < 10; p++){
            std::cout << 0;
        }
        std::cout << std::endl;
    }
}
```

Con esta estructura de clases, podemos representar el mapa de nuestro juego de laberinto y manejar la lógica relacionada con la posición del jugador, las paredes y los caminos. A medida que avanzamos en el desarrollo del juego, podemos expandir estas clases para incluir más funcionalidades, como enemigos, tesoros y otros elementos interactivos.

En el main.cpp podemos crear una instancia de GameMap y llamar al método DrawMap para visualizar el mapa en la consola:

```cpp
#include <iostream>
#include "include/GameMap.hpp"
int main(){
    GameMap myMap;
    myMap.DrawMap();

    return 0;
}
```

### Conexión de Jugador y Coordenadas en Mapas de Videojuegos

Ahora que tenemos la clase GameMap para representar el mapa de nuestro juego, el siguiente paso es conectar la posición del jugador con las coordenadas del mapa. Pero antes de esto, debemos conectar las celdas de nuestro mapa para el dibujado de este.

En el archivo GameMap.cpp, dentro del método DrawMap, podemos modificar el código para que en lugar de imprimir un 0 para cada celda, verifique el valor de cada celda y dibuje el mapa en consecuencia. Por ejemplo, si la celda tiene un valor de 1, podemos imprimir un símbolo que represente una pared, y si la celda tiene un valor de 0, podemos imprimir un espacio en blanco. Además, si la celda tiene un valor que representa al jugador (por ejemplo, 'H'), podemos imprimir un símbolo que represente al jugador en esa posición.

```cpp
void GameMap::DrawMap(){
    for(int i=0; i < 15; i++){

        for(int p=0; p < 10; p++){
            if(cells[i][p].id == 1){
                std::cout << "#"; // Representa una pared
            } else if(cells[i][p].id == 0){
                std::cout << " "; // Representa un espacio vacío
            } else if(cells[i][p].id == 'H'){
                std::cout << "H"; // Representa al jugador
            }
        }
        std::cout << std::endl;
    }
}
```

Con esta implementación, el método DrawMap dibujará el mapa en la consola utilizando diferentes símbolos para representar las paredes, los espacios vacíos y la posición del jugador. A medida que el jugador se mueva por el mapa, podemos actualizar las celdas correspondientes para reflejar su nueva posición y volver a llamar al método DrawMap para mostrar el mapa actualizado. Esto permitirá que el jugador vea su movimiento en el mapa y cómo interactúa con el entorno del juego.

Añadimos un método para actualizar la posición del jugador en el mapa. Este método tomará las coordenadas del jugador y actualizará la celda correspondiente en el mapa para reflejar su nueva posición. Por ejemplo:

En el archivo GameMap.hpp, podemos agregar el siguiente método:

```cpp
void UpdatePlayerPosition(int x, int y);
```

En el archivo GameMap.cpp, implementamos este método de la siguiente manera:

```cpp
void GameMap::UpdatePlayerPosition(int x, int y){
    // Primero, limpiamos la posición anterior del jugador
    for(int i=0; i < 15; i++){
        for(int p=0; p < 10; p++){
            if(cells[i][p].id == 'H'){
                cells[i][p].id = 0; // Limpiamos la posición anterior del jugador
            }
        }
    }
    // Luego, actualizamos la nueva posición del jugador
    cells[y][x].id = 'H'; // Actualizamos la nueva posición del jugador
}
```

En este método, primero recorremos todas las celdas del mapa para encontrar la posición actual del jugador (representada por 'H') y la limpiamos estableciendo su valor a 0. Luego, actualizamos la nueva posición del jugador utilizando las coordenadas proporcionadas (x e y) y establecemos el valor de esa celda a 'H' para indicar la nueva ubicación del jugador en el mapa.

Probamos el método UpdatePlayerPosition en el main.cpp para asegurarnos de que el jugador se mueve correctamente en el mapa:

```cpp
#include <iostream>
#include "include/GameMap.hpp"
#include "include/Player.hpp"
int main(){
    GameMap myMap;
    Player hero;

    // Actualizamos la posición del jugador en el mapa
    myMap.UpdatePlayerPosition(hero.x, hero.y);

    // Dibujamos el mapa con la posición actualizada del jugador
    myMap.DrawMap();

    return 0;
}
```

#### Otra forma de actualizar la posición del jugador en el mapa con punteros

En el archivo GameMap.hpp, podemos agregar un puntero a MapCell para representar la celda actual del jugador, de esta manera no es necesario recorrer toda la matriz/mapa para saber el contenido de una celda:

```cpp
    MapCell* PlayerCell; // Puntero a la celda actual del jugador
```

En el archivo GameMap.cpp, implementamos el método SetPlayerCell() para actualizar la posición del jugador utilizando este puntero:

```cpp
/*Definición del método SetPlayerCell() para el control de posición del jugador en el mapa y su dibujado */
void GameMap::SetPlayerCell(int playerX, int playerY){
    //std::cout << "Las coordenadas del jugador son: " << playerX << ", " << playerY << std::endl;
    //Comprobamos si la celda está vacía o no para resetearla y repintar el mapa
    if (PlayerCell != NULL){
        PlayerCell->id = 0;
    }
    PlayerCell = &cells[playerX][playerY]; //Vamos a la dirección de memoria de la posición de la celda para tomar su valor.
    PlayerCell->id = 'H';
}
```

Cómo x e y son atributos de la clase Player que al ser protected, no pueden ser accedidos directamente desde el main.cpp, debemos agregar un método público en la clase Player para obtener las coordenadas del jugador. Por ejemplo:

En el archivo Player.hpp, agregamos el siguiente método:

```cpp
int getX();
int getY();
```

En el archivo Player.cpp, implementamos estos métodos de la siguiente manera:

```cpp
int Player::getX(){
    return x; // Devuelve la coordenada X del jugador
}

int Player::getY(){
    return y; // Devuelve la coordenada Y del jugador
}
```

Con estos métodos, podemos obtener las coordenadas del jugador desde el main.cpp y actualizar su posición en el mapa de la siguiente manera:

```cpp
#include <iostream>
#include "include/GameMap.hpp"
#include "include/Player.hpp"
int main(){
    GameMap myMap;
    Player hero;
    // Actualizamos la posición del jugador en el mapa utilizando los métodos getX() y getY()
    myMap.UpdatePlayerPosition(hero.getX(), hero.getY());
    // Dibujamos el mapa con la posición actualizada del jugador
    myMap.DrawMap();
    return 0;
}
```

Compilando y ejecutando el juego en este punto, podemos observar que los controles no van bien, están cambiados, cuando pulsamos 'w' y 's' se mueve de izquierda a derecha y si pulsamos 'a' o 'd' se mueve arriba - abajo.

Para arreglarlo nos vamos al archivo _GameMap.cpp_ y en la matriz de celdas tenemos que indicar primeramente las filas y después las columnas.

```cpp
    //PlayerCell = &cells[playerX][playerY];
    PlayerCell = &cells[playerY][playerX];
```

Además tenemos que hacer otro cambio en el movimiento del personaje (arriba - abajo), ya que la posición (0,0) empiezar en la esquina superior izquierda con lo cuál cuando bajamos y toma valores positivos, hay que sumar.

### Carga y Lectura de Archivos para Mapas en Videojuegos con C++

En esta parte vamos a crear un archivo de mapa para introducir la información en nuestro juego y tener siempre un mapa creado. En esta ocasión tenemos que hacer uso de las librerías que nos permiten leer y grabar información en archivos. (Librería \<fstream>)

En la clase GameMap (.hpp y .cpp) crearemos una función que nos sirva para cargar el mapa desde el archivo a memoria para su uso en el juego.

En el archivo GameMap.hpp

```cpp
    //....
    protected:
        void LoadMapFromFile();
    //....
```

En el archivo GameMap.cpp

```cpp

    //....
    #include <fstream>
    //....

    //....
    void GameMap::LoadMapFromFile(){
        std::string line; //Guardaremos cada línea del archivo leído.
        std::ifstream myMap("map.txt"); //Creamos el objeto myMap que guardará el contenido del archivo en memoria (input flow stream - Entrada flujo de datos.).

        /*Comprobamos si el el archio del mapa está abierto. Nota: la primera vez que ejecutamos el juego
        cómo el map.txt no existe nos dará error, así que sería conveniente crearlo a mano o crearlo desde el código. Inicialmente lo voy a generar a mano, pero lo ideal es crear un generador de laberintos y crear el archivo con este.
        */
        if (myMap.is_open()){
            std::cout << "Mapa cargado correctamente..." << std::endl;
        } else {
            std::cout << "ERROR FATAL: ARCHIVO DE MAPA NO HA PODIDO SER CARGADO. ¿EXISTE?" << std::endl;
        }
    }
    //....

```

Inicialmente creamos el fichero map.txt manualmente y dibujando el mapa en el de tal forma que los '1' serán los muros, los '0' camino libre y resto de símbolos que elijamos otras propiedades o eventos del mapa.

Ejemplo del map.txt:

```txt
1111111111
1000000001
1000000001
1000000001
1000000001
1000000001
1000000001
1000000001
1000000001
1000000001
1000000001
1000000001
1000000001
1000000001
1111111111
```

### Colisiones y Movimientos en Juegos 2D con Programación en C++

Ahora lo que vamos a hacer es, una vez cargado el mapa, leer cada una de las celdas que hemos puesto y comprobar si es '1' genera colisión con un muro, no dejando pasar al jugador y si es '0' puede caminar libremente el jugador.

Antes de empezar con esta lógica de colisiones, en el archivo MapCell.hpp cambiamos el tipo de dato del id de entero a char.

```cpp
    //int id;
    char id;
```

Ahora realizaremos una prueba de carga y dibujado del mapa, la carga del archivo ya la tenemos, entonces en el apartado donde comprobamos que existe el archivo _map.txt_ lo leemos y dibujamos el mapa.

Archivo GameMap.cpp

```cpp
    if (myMap.is_open()){
        std::cout << "Mapa cargado correctamente..." << std::endl;
        std::cout << "Inicio dibujado mapa desde archivo..." << std::endl;

        while (getline(myMap, line)){
            std::cout << line << std::endl; //Dibuja el mapa tal cuál lo tenemos en el archivo.
        }

        std::cout << "Fin dibujado mapa desde archivo..." << std::endl;

    } else {
        std::cout << "ERROR FATAL: ARCHIVO DE MAPA NO HA PODIDO SER CARGADO. ¿EXISTE?" << std::endl;
    }
```

Una vez comprobado que se lee correctamente el mapa y se pinta en pantalla, ahora hay que incluirlo dentro del juego para que el personaje se mueva dentro de el. Por que ahora mismo si pulsamos las teclas de movimiento del personaje, elimina el mapa dibujado y pinta el que tenemos por defecto.

Seguimos en el archivo GameMap.cpp donde vamos a incluir el mapa en el juego.

Nota a borrar: He realizado los cambios necesarios en el archivo GameMap.cpp pero el mapa sale vacío, el personaje se mueve y lo que hace mientras se mueve es repintar y dejar la huella con '0', al profe en el curso le sale al revés, pinta el mapa correctamente, pero cuando se mueve el personaje va borrando o eliminando la celda.

Nota a borrar 2: Arreglado el bug, el problema estaba en la función drawMap(), comprobaba enteros en vez de carácteres, se hizo el cambio y ya pinta el mapa entero y el personaje se mueve sin problema.

Archivo GameMap.cpp

```cpp
#include "../include/GameMap.hpp"
#include <iostream>
#include <fstream> //Para leer y grabar archivos


GameMap::GameMap(){ //Constructor
    //Nos aseguramos al iniciar el programa que el puntero esté vacio para que no se rompa el programa
    PlayerCell = NULL;
    //cargamos el mapa desde el archivo map.txt llamando a la función correspondiente en el constructor
    LoadMapFromFile();
}

/*mapCell::~MapCell(){

}*/

/*Definición del método DrawMap para dibujar el mapa */
void GameMap::DrawMap(){
    for(int i=0; i < 15; i++){

        for(int p=0; p < 10; p++){
            /*Aquí vamos a dibujar el mapa según el contenido de la celda. Y también refrescarlo
            con el movimiento del jugador para que quede representado donde corresponde. */
            if(cells[i][p].id == '1'){
                std::cout << '#'; // Representa una pared
            } else if(cells[i][p].id == '0'){
                std::cout << '0'; // Representa un espacio vacío
            } else if(cells[i][p].id == 'H'){
                std::cout << 'H'; // Representa al jugador
            }
        }
        std::cout << std::endl;
    }
}

/*Definición del método SetPlayerCell() para el control de posición del jugador en el mapa y su dibujado */
void GameMap::SetPlayerCell(int playerX, int playerY){
    //std::cout << "Las coordenadas del jugador son: " << playerX << ", " << playerY << std::endl;
    //Comprobamos si la celda está vacía o no para resetearla y repintar el mapa
    if (PlayerCell != NULL){
        PlayerCell->id = '0';
    }
    PlayerCell = &cells[playerY][playerX]; //Vamos a la dirección de memoria de la posición de la celda para tomar su valor.
    PlayerCell->id = 'H';
}

void GameMap::LoadMapFromFile(){
    std::string line; //Guardaremos cada línea del archivo leído.
    int row = 0; //Variable para saber en que fila del mapa estamos.
    std::ifstream myMap("mapas/map.txt"); //Creamos el objeto myMap que guardará el contenido del archivo en memoria (input flow stream - Entrada flujo de datos.).

    /*Comprobamos si el el archio del mapa está abierto. Nota: la primera vez que ejecutamos el juego
    cómo el map.txt no existe nos dará error, así que sería conveniente crearlo a mano o crearlo desde el código. Inicialmente lo voy a generar a mano, pero lo ideal es crear un generador de laberintos y crear el archivo con este.
    */
    if (myMap.is_open()){
        std::cout << "Mapa cargado correctamente..." << std::endl;
        //std::cout << "Inicio dibujado mapa desde archivo..." << std::endl;

        while (getline(myMap, line)){
            // std::cout << line << std::endl; //Sirvió para comprobar la lectura y dibujado del mapa.
            // Incluimos el mapa en el juego.

            for (int col = 0; col < line.length(); col++){
                cells[row][col].id = line[col];
            }

            row++;
        }

        //std::cout << "Fin dibujado mapa desde archivo..." << std::endl;

    } else {
        std::cout << "ERROR FATAL: ARCHIVO DE MAPA NO HA PODIDO SER CARGADO. ¿EXISTE?" << std::endl;
    }
}
```

Ya funcionando, vamos a poner el mapa más bonito, en vez de que dibuje los '0' en el espacio vacío, vamos a dejarlo en blanco (vacío), de este modo es más visible y jugable. Lo que hacemos es en la función drawMap(), en la comprobación de si encontramos un '0' en la celda, la pinte como espacio vacío o carácter vacío ' '.

```cpp
void GameMap::DrawMap(){
    for(int i=0; i < 15; i++){

        for(int p=0; p < 10; p++){
            /*Aquí vamos a dibujar el mapa según el contenido de la celda. Y también refrescarlo
            con el movimiento del jugador para que quede representado donde corresponde. */
            if(cells[i][p].id == '1'){
                std::cout << '#'; // Representa una pared
            } else if(cells[i][p].id == '0'){
                std::cout << ' '; // Representa un espacio vacío
            } else if(cells[i][p].id == 'H'){
                std::cout << 'H'; // Representa al jugador
            }
        }
        std::cout << std::endl;
    }
}
```

### Colisiones y restricciones de movimientos en mapas de juegos

### Colisiones y portadas en Videojuegos: Implementación en C++

### Creación de Juegos de Aventuras en C++: Laberintos y Cofres del Tesoro

### Programación Orientada a Objetos en Videojuegos Básicos

### Creación de Enemigos y Laberintos en C++ avanzado

## Otras notas

### Archivos de encabezado y código fuente en C++

En C++, es común organizar el código en archivos de encabezado (.h o .hpp (versiones modernas)) y archivos de código fuente (.cpp). Los archivos de encabezado contienen las declaraciones de clases, funciones y variables, mientras que los archivos de código fuente contienen las definiciones e implementaciones de esas clases, funciones y variables. Esta separación permite una mejor organización del código y facilita la reutilización de componentes en diferentes partes del programa.

Una forma de compilar el proyecto enteramente es utilizando un Makefile, que es un archivo de texto que contiene reglas para compilar y enlazar el programa. El Makefile especifica cómo se deben compilar los archivos de código fuente y cómo se deben enlazar para crear el ejecutable final. Esto simplifica el proceso de compilación, ya que solo necesitas ejecutar el comando "make" en la terminal, y el Makefile se encargará de compilar los archivos necesarios en el orden correcto.

### CMake, CmakeLists.txt y Makefiles en proyectos de programación con vscode

CMake es una herramienta de automatización de compilación que facilita la construcción de proyectos de software. CMakeLists.txt es el archivo de configuración utilizado por CMake para definir cómo se debe construir el proyecto, especificando las fuentes, los encabezados, las bibliotecas y otras dependencias. Makefiles son archivos utilizados por la herramienta Make para automatizar la compilación del proyecto, definiendo reglas y dependencias entre los archivos fuente y los ejecutables. En Visual Studio Code (VSCode), puedes configurar tu proyecto para usar CMake y Makefiles para compilar y ejecutar tu código de manera eficiente.

La estructura básica de un CMakeLists.txt para un proyecto de C++ podría verse así:

```cmakecmake_minimum_required(VERSION 3.10)
project(MiProyecto)
set(CMAKE_CXX_STANDARD 17)
add_executable(MiProyecto main.cpp)
```

En este ejemplo, se establece la versión mínima de CMake requerida, se define el nombre del proyecto, se especifica el estándar de C++ a utilizar y se indica que el ejecutable se construirá a partir del archivo main.cpp. Puedes agregar más archivos fuente y configuraciones según las necesidades de tu proyecto.

Podemos encontrar toda la documentación oficial de CMake en su sitio web: ![Web de CMake](https://cmake.org/documentation/) y también hay muchos tutoriales en línea que pueden ayudarte a entender cómo usar CMake y Makefiles en tus proyectos de programación.

### Compilación de proyectos en C++ con CMake y Makefiles

Para compilar un proyecto en C++ utilizando CMake y Makefiles, primero debes crear un archivo CMakeLists.txt en la raíz de tu proyecto con la configuración adecuada. Luego, puedes seguir estos pasos:

1. Abre una terminal y navega hasta la raíz de tu proyecto.

2. Crea un directorio de construcción (build) y navega dentro de él:

   ```bash
    mkdir output
    cd output
   ```

3. Ejecuta CMake para generar los archivos de construcción:

   ```bash
    cmake ..
   ```

4. Finalmente, ejecuta Make para compilar el proyecto:

   ```bash
    make
   ```

Esto generará el ejecutable de tu proyecto en el directorio de construcción. Asegúrate de tener CMake y Make instalados en tu sistema para poder seguir estos pasos correctamente. Si estás utilizando Visual Studio Code, también puedes configurar tareas de compilación para automatizar este proceso desde el editor.

### Compilación de proyectos de C++ con Visual Studio Code

Visual Studio Code (VSCode) es un editor de código fuente que ofrece soporte para la compilación de proyectos en C++. Para compilar un proyecto de C++ en VSCode, puedes seguir estos pasos:

1. Asegúrate de tener instalado el compilador de C++ (como g++) y la extensión de C++ para VSCode.

2. Abre tu proyecto en VSCode y crea un archivo de configuración de tareas (tasks.json) para definir cómo se debe compilar tu proyecto. Puedes hacerlo desde el menú "Terminal" > "Configure Tasks" > "Create tasks.json file from template" > "Others".

3. En el archivo tasks.json, define una tarea que ejecute el comando de compilación para tu proyecto. Por ejemplo:

   ```json
   {
     "version": "2.0.0",
     "tasks": [
       {
         "label": "Compilar C++",
         "type": "shell",
         "command": "g++ -o nombre_del_ejecutable archivo1.cpp archivo2.cpp",
         "group": {
           "kind": "output",
           "isDefault": true
         }
       }
     ]

     // Reemplaza "nombre_del_ejecutable" con el nombre que deseas para tu programa y "archivo1.cpp", "archivo2.cpp", etc., con los nombres de tus archivos fuente.
     // Puedes agregar más tareas aquí si es necesario.
   }
   ```

4. Guarda el archivo tasks.json y luego puedes ejecutar la tarea de compilación desde el menú "Terminal" > "Run Build Task" o usando el atajo de teclado Ctrl+Shift+B. Esto ejecutará el comando de compilación que definiste en el archivo tasks.json y generará el ejecutable de tu proyecto. Asegúrate de ajustar el comando de compilación según los archivos fuente y el nombre del ejecutable que deseas generar. Si tu proyecto es más complejo y tiene dependencias o requiere una estructura de directorios específica, considera utilizar herramientas como CMake para gestionar la compilación de manera más eficiente.

### Compilación de proyectos de C++ con Visual Studio Code y CMake

Si estás utilizando Visual Studio Code (VSCode) y CMake para compilar tu proyecto de C++, puedes seguir estos pasos:

1. Asegúrate de tener instalado CMake y la extensión de CMake para VSCode.

2. Abre tu proyecto en VSCode y asegúrate de que tu archivo CMakeLists.txt esté correctamente configurado para tu proyecto.

3. En VSCode, puedes usar la extensión de CMake para configurar y compilar tu proyecto. Abre la paleta de comandos (Ctrl+Shift+P) y busca "CMake: Configure" para configurar tu proyecto. Esto generará los archivos de construcción necesarios.

4. Después de configurar el proyecto, puedes ejecutar la tarea de compilación desde el menú "Terminal" > "Run Build Task" o usando el atajo de teclado Ctrl+Shift+B. Esto ejecutará el comando de compilación definido en tu archivo CMakeLists.txt y generará el ejecutable de tu proyecto. Asegúrate de que tu archivo CMakeLists.txt esté correctamente configurado para incluir todos los archivos fuente necesarios y para generar el ejecutable con el nombre deseado. Si tu proyecto es más complejo y tiene dependencias o requiere una estructura de directorios específica, asegúrate de reflejarlo adecuadamente en tu archivo CMakeLists.txt para que la compilación se realice correctamente.

### Compilación de un proyecto de C++ con g++ en la terminal

Para compilar un proyecto de C++ utilizando g++ en la terminal, sigue estos pasos:

1. Abre una terminal y navega hasta el directorio donde se encuentran tus archivos fuente (.cpp).

2. Utiliza el siguiente comando para compilar tus archivos fuente y generar un ejecutable:

   ```bash
       g++ -o nombre_del_ejecutable archivo1.cpp archivo2.cpp
   ```

   Reemplaza "nombre_del_ejecutable" con el nombre que deseas para tu programa y "archivo1.cpp", "archivo2.cpp", etc., con los nombres de tus archivos fuente.

3. Si tu proyecto tiene múltiples archivos fuente, asegúrate de incluir todos los archivos necesarios en el comando de compilación.

4. Después de ejecutar el comando, se generará un archivo ejecutable con el nombre que especificaste. Puedes ejecutar tu programa con el siguiente comando:

   ```bash
       ./nombre_del_ejecutable
   ```

Asegúrate de tener g++ instalado en tu sistema para poder compilar tus proyectos de C++. Si estás utilizando Visual Studio Code, también puedes configurar tareas de compilación para automatizar este proceso desde el editor.

Si tu proyecto es más complejo y tiene dependencias o requiere una estructura de directorios específica, considera utilizar herramientas como CMake para gestionar la compilación de manera más eficiente.

Nota: Si tenemos los archivos fuente en diferentes directorios, debemos especificar la ruta correcta en el comando de compilación. Por ejemplo:

```bash
    g++ main.cpp ./src/Robot.cpp -o ./output/main
```

Si hay más de un archivo fuente, como por ejemplo en este proyecto se recomienda usar cmake con CMakeLists.txt, pero si no se ha configurado aún, podemos compilar y construir el ejecutable del siguiente modo con g++

```bash
    g++ main.cpp src/Player.cpp src/MapCell.cpp src/GameMap.cpp -o output/main
```
