# Khuneia 

 <div>
<p style = 'text-align:center;'>
<img src="imagenes/khuneia1.png" alt="imágen gráfica del juego" width="500px">
</p>
</div>
<br>
<br>

En este repositorio se encuentran todos los archivos de corte láser e impresión 3d que permiten la reproducción del juego de mesa Khuneia, realizado como proyecto final para el Taller de Diseño de Interacción 2022 por Luciana Jorquera, Paulina Zúñiga, Martina Vásquez, Maite Aranda y Javiera Ruiz. 

## Descripción general del proyecto
Khuneia es un juego de estrategia en el cual, mediante la construcción de un camino de escaleras, debes avanzar por el tablero hasta la salida de este y obtener la piedra filosofal. En este recorrido dos alquimistas compiten por alcanzar el máximo tesoro, la piedra filosofal, que otorga a quien la alcance un poder incomparable. 

A continuación puedes descargar las instrucciones del juego:
[Instructivo Khuneia](imagenes/instructivo%20khuneia.pdf)

## Herramientas y Tecnologías Utilizadas
Para realizar este proyecto se utilizaron diferentes tipos de tecnologías relacionadas tanto a la construcción como al funcionamiento del tótem.

En cuanto a la construcción se utilizó la cortadora láser para cortar con mayor precisión piezas que ordenan la estructura del tótem y el mecanismo interior similar a un carrete de hilo que permite el movimiento de las placas de papel.  En este repositorio se encuentran los archivos de corte correspondientes a cada una de las piezas. 

Para el funcionamiento del tótem se utilizaron 
1. 2 placas de programación Arduino UNO R3
2. Fuente de poder con capacidad de transformar la corriente alterna (220V) a corriente continua (12V)
3. 2 Drivers BL-TB6560-V2.0 que funcionan como unión entre el arduino y el motor.
4. 2 Protoboards
5. 2 motores stepper NEMA 23
6. 1 motor stepper 28byj-48 
7. pulsadores
8. Resistencias, cableado
9. Software Arduino, programación en lenguaje C++

## Galería de Imágenes

 <div>
<p style = 'text-align:center;'>
<img src="imagenes/totem2.jpg" alt="Foto Representativa del proyecto" width="500px">
</p>
</div>

 <div>
<p style = 'text-align:center;'>
<img src="imagenes/totem3.jpg" alt="Foto Representativa del proyecto" width="500px">
</p>
</div>

 <div>
<p style = 'text-align:center;'>
<img src="imagenes/totem4.jpg" alt="Foto Representativa del proyecto" width="500px">
</p>
</div>


<br>

## Registro en video

<div>
<p style = 'text-align:center;'>
<iframe width="600" height = "420"
src="https://www.youtube.com/embed/GYJYaCNpLs8">
</iframe>
</p>
</div>






## Estructura de Carpetas
 
[CAM](https://javieraruizm.github.io/documentacion-proyectomodulo2-tdix/cam/)

En esta carpeta se encuentran los archivos de corte láser, junto con las configuraciones y calibraciones así como máquinas empleadas.

[CAD](https://javieraruizm.github.io/documentacion-proyectomodulo2-tdix/cad/)

En esta carpeta se encuentra el modelo del tótem realizado en el programa fusión 360

[INO](https://javieraruizm.github.io/documentacion-proyectomodulo2-tdix/ino/)

En esta carpeta se incluyen todas las especificaciones del circuito de arduino y los códigos para el funcionamiento de los motores. 


