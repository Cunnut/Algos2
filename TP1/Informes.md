			Manual de usuario: Juego de la Vida

El juego consiste en un tablero de 20 filas por 80 columnas con celulas que pueden estar Vivas o Muertas representadas en cada lugar del tablero.

Al principio se le pedira la cantidad de turnos que quiere que se ejecuten, posteriormente se le pedira ingresar posiciones iniciales en donde las celulas esten vivas las demas estaran muertas.
Para determinar la posicion de una celula se le mostrara por pantalla
"Ingrese fila:" e ingresara un numero  que deber estar entre 1 y 20  inclusives.
"Ingrese columna:" e ingresara un numero  que deber estar entre 1 y 80  inclusives.
En caso de no querer carga más posiciones cuando se le solicite los valores fila y columna ingrese 0.

Una vez finalizada la carga de posiciones iniciales se mostrara el tablero por pantalla. Con el caracter "." se representan las celulas muertas
y con el caracter "v", las vivas. A partir de este instante empiezan a jugarse los turnos.

Posteriormente se le mostrara un menú con 3 opciones, estas son : 
1)Ejecutar un turno
2)Reiniciar
3)Salir
Luego se le pedira elejir cualquiera de estas opciones, para elegir una opcion ingrese el numero asociado a cada opcion mostrada anteriormente.

El por cada turno se ira mostrando la evolucion del tablero con algunos datos sobre las celulas que nacen,mueren y el total. Tambien se volvera a mostrar el menu de opciones hasta que salga o Se llegue al limite de turnos que el usuario ingreso al principio del juego.


			Manual del Programador

El lenguaje de programacion utilizado es c++.
Se dejan las validaciones de los datos a ingresar en las funciones a cargo de quien utilize estos archivos fuente, teniendo en cuenta las siguientes precondiciones:

En el archivo "Tablero.h":
-Se definen las constantes  "CANTIDAD_FILAS" y "CANTIDAD_COLUMNAS" y se crea un struct cuyos campos son una matriz de CANTIDAD_FILASxCANTIDAD_COLUMNAS que se llamo "tablero". Tambien se creo un enumerado que carga con los posibles estados del tablero.
-Para las funciones "void revivirEnPosicion(Tablero &tabla,const int posicionFila,const int posicionColumna)" y "void matarEnPosicion(Tablero &tabla,const int posicionFila,const int posicionColumna)", tener en cuenta que ambas funcioones modifican el dato almacenado en la matriz tablero 
en las posiciones ingresadas - 1. Es decir si se pasa las posicion (1,2) las funciones alteran en la posicion (1 -1,2-1) = (0,1).
Precondiciones en el header.

En el archivo "JuegoDeLaVida.h" :
--En la función "void iniciarJuego(JuegoDeLaVida &juego)", se inicializan los campos de juego : cantidadTurnos, cantidadTurnosSinCambios y los totales de muertes y nacimientos  todos en cero. Se inicaliza el tablero con todas las celulas muertas, se cargan las vivas y  luego se van almacenanado la cantidad de vivas totales.
Luego imprime el tablero con los estados iniciales.
--La funcion "void ejecutarTurno(JuegoDeLaVida &juego)",  acumula la cantidad de turnos jugados en el cantidadTurnos de juego.
cambia el estado de las celulas dependiendo del criterio explicado en el siguiente item. Sigue acumulando la cantidad total de celulas vivas y las que nacen y mueren en el turno. luego muestra el tablero e imprime los datos almanacenados.
--Para la funcion "void cambiarEstadosCelulas(JuegoDeLaVida &juego)", cambia el estado de las celulas dependiendo de su estado y de el de sus vecinas: Una célula muerta con exactamente 3 células vecinas vivas "nace" y una célula viva con 2 ó 3 células vecinas vivas sigue viva, en otro caso muere o permanece muerta.

	
	
				Cuestionario
				
¿QUE ES UN DEBUG? Un debug es programa de software el cual permite la ejecución de los programas para localizar y eliminar errores lógicos. 

¿QUE ES UN BREAKPOINT? es un marcador que puede establecerse en cualquier punto de codigo ejecutable. Cuando la ejecución de un programa llega a este marcador, la ejecución se detiene lo cual permite realizar una analisis de las variables, ayudando a determinar si existe un error lógico.

¿Qué es “Step Into”, “Step Over” y “Step Out”? El comando step into nos permite entrar a una función y estudiar sus instrucciones individuales, el comando step Out nos permite salir de la funcion en la que entro con el comando into. El comando step over permite saltar de una linea de codigo para analizar la siguiente, en caso de que esta sea una función permite acceder a ella para analizar sus instrucciones.









