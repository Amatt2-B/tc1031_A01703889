# Proyecto: GrandPrixAnalytics

Es un proyecto de gestión de datos de pilotos de la Formula 1 que implica la organización y busqueda de información sobre los pilotos, asi como la creación de una interfaz para el usuario que permita una interaccion efectiva de los datos. 

## Descripción del avance 1

Este avance contiene varios apartados que involucran la manipulación y gestión de datos de pilotos de la Fórmula 1:

Estructura de Datos

Ordenamiento

Búsqueda

Interfaz de Usuario

Compilación y ejecución

Documentación
## Descripción del avance 2

En este avance se ha implementado una estructura de datos de lista doblemente ligada para gestionar la informacion de los pilotos de la Formula 1. Cada nodo almacena un objeto de tipo 'Driver' que contiene los detalles de un piloto.

Se ha implementado el algoritmo de ordenamiento BubbleSort para ordenar a los pilotos por posicion.

Se ha implementado una funcion de busqueda para encontrar a un piloto por su numero de piloto. Se hace una busqueda secuencial en la lista.

### Cambios sobre el primer avance

1. Escribe la lista de cambios realizados sobre el planteamiento original: Argumenta la razón por la que decidiste el cambio. Estos argumentos puedes retomarlos más adelante en tu argumentación de competencias.

Cambio 1, Interfaz de usuario que permite interactuar con la lista de pilotos. Incluye opciones para agregar y eliminar pilotos, ordenar la lista por posicion, buscar un piloto y mostrar la lista de pilotos.

Cambio 2, Desarrollo de la función para cargar archivos desde un ".txt", de este modo puedes modificar la lista de entrada.

Cambio 3, Implementacion efectiva de la ordenación de la lista por posición.

## Descripción del avance 3

En este avance se ha implementado una lista con datos iniciales para hacer pruebas en el codigo, ademas de arreglar y mejorar el funcionamiento de la carga de archivos externos en formato ".txt".

Es importante reconocer que dentro del proyecto ya se tenia cierto avance respecto a estructuras de datos y ordenamiento, por lo que este avance sirvio mas para organizar un poco mejor la implementación, ademas de arreglar ciertos errores y demostrar un buen funcionamiento del programa.

### Cambios sobre el segundo avance

	Cambio 1: Arreglo de la funcion para leer archivos externos en formato ".txt".
 
	Cambio 2: Se mejoro el menu de opciones para el usuario, de este modo n se cicla al escribir una opcion erronea y se puede trabajar con mejor agilidad dentro del programa.

## Entrega final
En este avance se ha implementado una lista con datos iniciales para hacer pruebas en el codigo, ademas de arreglar y mejorar el funcionamiento de la carga de archivos externos en formato ".txt".

Es importante reconocer que dentro del proyecto ya se tenia cierto avance respecto a estructuras de datos y ordenamiento, por lo que este avance sirvio mas para organizar un poco mejor la implementación, ademas de arreglar ciertos errores y demostrar un buen funcionamiento del programa.

	Este avance ya cuenta con la funcionalidad completa del programa, solo hacia falta describir de manera mas 	eficiente las competencias que se han desarrollado a lo largo de su implementacion.
 
### Cambios sobre el tercer avance avance
	Cambios en la descripcion de la competencia de 
		# Hace un análisis de complejidad correcto y completo para todos los demás componentes del programa y determina la complejidad final del programa.
		# Implementa mecanismos de escritura de archivos para guardar los datos  de las estructuras de manera correcta
## Instrucciones para compilar el proyecto
Ejecuta el siguiente comando en la terminal:

`g++ -o grandprix main.cpp driver.cpp sort.cpp search.cpp dls.cpp filer.cpp`

## Instrucciones para ejecutar el proyecto
Ejecuta el siguiente comando en la terminal:

`./grandprix` 

## Descripción de las entradas del avance de proyecto

Por parte de los datos de entrada para el proyecto, se requiere la informacion de cada piloto que el usuario quiera ingresar en la lista. Esta información se puede ingresar por medio de un archivo ".txt" el cual tiene nombre de piloto, numero, posicion y equipo al que pertenece.

Por otro lado, si es necesario, se cuenta con una lista predeterminada de pilotos la cual puede cambiar al dar la opcion de cargar datos desde archivo.


## Descripción de las salidas del avance de proyecto

Lista doblemente ligada: Lista que el usuario podra editar, llenar o vaciar de acuerdo a la informacion que ingrese.

Bubble Sort
Eliminacion de un piloto
Agregar un piloto
Buscar un piloto
Ordenar lista por posicion del piloto

De acuerdo a la opcion elegida por el usuario, se resultara en algo distinto, como lo es un bubbleSort para acomodar la lista por posicion, eliminar, agregar, o buscar datos en la lista, ademas de tener la posibilidad de cargar datos desde el archivo "pilotos.txt" los cuales son los pilotos.

## Desarrollo de competencias

### SICT0301: Evalúa los componentes
#### Hace un análisis de complejidad correcto y completo para los algoritmos de ordenamiento usados en el programa.

En la implementación de mi proyecto tome la decisión de utilizar un metodos de ordenamiento, para conocer la complejidad de cada uno de ellos y saber cuál es mas efectivo. Utilicé el método Bubble.

El Bubble sort tiene una complejidad de O(n^2), lo que quiere decir que el tiempo de ejecución aumentara cuadraticamente con el número de pilotos en la lista. 

Por otro lado, el Merge sort tiene una complejidad O(n log n), lo que me da a entender que no es tan complejo como el Bubble Sort, y el tiempo de ejecución seria más corto, esto porque reduce el numero de "pasadas" dentro de la lista, ya sea más corta o más larga la lista el tiempo se reduce.

Estructura de Datos struct Driver, mejor caso de O(1), acceso directo a los campos

Bubble Sort, mejor caso de O(n) cuando la lista ya esta ordenada.

Merge Sort, mejor caso de O(n log n) en todos los casos.

Sequential Search, mejor caso de O(1) cuando el número del corredor es el primer elemento en la lista.


#### Hace un análisis de complejidad correcto y completo de todas las estructuras de datos y cada uno de sus usos en el programa.

Lista Doblemente ligada (DoublyLinkedList):

Inserción (insertDriver): La inserción al final de la lista se realiza en tiempo constante O(1), ya que se inserta al final y se actualiza el puntero de la cola.

Eliminación (deleteDriver): La eliminación de un nodo específico en la lista toma tiempo lineal O(n) en el peor caso, ya que se necesita buscar el nodo a eliminar.

Búsqueda (searchDriver): La búsqueda de un piloto por número de piloto toma tiempo lineal O(n) en el peor caso, ya que se recorre la lista.

Es importante destacar que la complejidad depende del tamaño de los datos de entrada y de las características particulares de los algoritmos.

#### Hace un análisis de complejidad correcto y completo para todos los demás componentes del programa y determina la complejidad final del programa.

Escribe aquí tus argumentos sobre por qué consideras que has desarrollado esta competencia y dónde se puede observar el desarrollo que mencionas.

Carga de Datos desde Archivo (loadDriversFromFile):

La carga de datos desde un archivo implica leer cada línea del archivo y procesarla para crear objetos Driver. La complejidad depende del número de líneas en el archivo, lo que lleva a una complejidad O(n), donde "n" es el número de líneas en el archivo.

Menú Principal (main):

El menú principal utiliza operaciones de entrada/salida y operaciones básicas de lista, por lo que la complejidad total dependerá de las operaciones específicas seleccionadas por el usuario. En el peor caso, podría requerir O(n) operaciones, donde "n" es la cantidad total de pilotos.

En términos generales, la complejidad del programa se verá más afectada por las operaciones de ordenamiento y búsqueda, ya que estas operaciones involucran el procesamiento y manipulación de todos los elementos en la lista de pilotos.

La complejidad final del programa depende de las operaciones realizadas por el usuario y la cantidad total de pilotos en la lista. 

Al utilizar los algoritmos de ordenamiento de Bubble Sort para ordenar una lista doblemente ligada, la complejidad temporal de este algoritmo es de O(n^2) en el peor caso. Esto se debe a que Bubble Sort compara e intercambia elementos adyacentes hasta que la lista se ordena.


### SICT0302: Toma decisiones
#### Selecciona un algoritmo de ordenamiento adecuado al problema y lo usa correctamente.
Si lograste este criterio anteriormente, copia aquí tu argumentación. Si no, ésta es una nueva oportunidad para lograrlo. Escribe aquí tu aprendizaje y tus argumentos sobre por qué consideras que ahora ya has desarrrollado este criterio y dónde se puede observar el desarrollo que mencionas.

#### Selecciona una estructura de datos adecuada al problema y la usa correctamente.
 
En este caso se utilizo una lista doblemente ligada para organizar a los pilotos, de este modo podemos movernos a lo largo de la lista de una manera mas sencilla, al contar con apuntadores hacia ambos lados de la lista, es decir, los datos adelante y detras de un nodo. En este caso cada nodo es un piloto, el cual cuenta con sus datos como el nombre, numero de piloto, equipo y posicion en la carrera.  

Para el manejo de la lista doblemente ligada se implementaron varios metodos para poder editar la informacion dentro de esta, como lo es agregar a un piloto, eliminar piloto, buscar a un piloto y hacer un ordenamiento por posicion en la carrera.


### SICT0303: Implementa acciones científicas
#### Implementa mecanismos para consultar información de las estructras correctos.
 
La estructura de datos principal es la lista doblemente ligada, la cual almacena informacion de los pilotos de la F1.
Existen diversos mecanismos para consultar informacion en el proyecto, como lo son las funciones que permiten buscar pilotos por diversos criterios, como lo son el numero de piloto, equipo, posicion y nombre. En el caso especifico del proyecto, se implemento un metodo para hacer una busqueda por numero de piloto.

Se muestra informacion de manera legible y comprensible para el usuario. Dentro de cada nodo de la lista se muestra de manera ordenada los datos de cada piloto.

Las funciones dentro del programa han sido actualizadas para evitar errores de ciclos innecesarios en el programa, de este modo se puede probar de manera exitosa cada funcion disponible.

#### Implementa mecanismos de lectura de archivos para cargar datos a las estructuras de manera correcta.
Se implementa un mecanismo dentro del proyecto para lectura de archivos '.txt'. De esta manera se puede ingresar una lista ordenada de pilotos, teniendo el siguiente formato
Nombre
Numero de piloto
Posicion en la carrera
Equipo

Esto permite ingresar grandes cantidades de informacion dentro de la lista, para no ingresar dato por dato, ademas de facilitar la actualizacion de los datos.

La implementacion de esta funcion para cargar archivos externos en formato ".txt" ha tenido exito, se carga una lista con valores diferentes a los que tiene la lista predeterminada, esto para ver el cambio de los pilotos y su información.

### Implementa mecanismos de escritura de archivos para guardar los datos  de las estructuras de manera correcta

Dentro del programa, contamos con la capacidad de ingresar nuestros propios datos acerca de algun piloto que ocupemos meter a la lista. Esto se hace por medio de una de las opciones, con lo que se sobreescribe el archivo ".txt" con la nueva informacion del piloto, tomando en cuenta el nombre, numero de piloto, posicion en la carrera, y equipo constructor al que pertenece.

Otra manera de ingresar ciertas cantidades de datos, es editar directamente el archivo de texto que viene junto al programa, con lo que puedes cambiar totalmetne la lista de pilotos. 

Sin embargo, el metodo mas factible y comodo para el usuario, en el cual se toma en cuenta las funcionalidades del programa, es hacerlo dentro del programa, donde se te indica la lista actual de pilotos, y tu puedes añadir otro, eliminarlo y acomodarlos por posicion.