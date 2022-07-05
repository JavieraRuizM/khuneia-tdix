# ino
Archivos de Arduino 

Aquí se incluyen todas las especificaciones del circuito y código de los arduino utilizados.

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


## Circuito

El circuito se origina desde 2 placas arduino. En la primera, se conecta un motor stepper nema que se utiliza para abrir las placas superiores. Este se controla desde dos pulsadores, el primero permite que gire a la derecha enrollando el hilo en el carrete y abriendo las placas; el segundo pulsador provoca que el motor gire a la izquierda cerrando las placas y desenrrollando el hilo.

El segundo arduino controla un motor Nema (que funciona de la misma manera que el anterior, solo que con las placas inferiores) y un motor stepper 28byj-48 que mueve el diamante central controlado desde un único pulsador que lo inicia para que de una sola vuelta.

Se utilizaron 5 inputs (pulsadores) y hay 3 outputs (3 motores y gestos).

 <div>
<p style = 'text-align:center;'>
<img src="cableado-arduino.jpg" alt="cableado arduino" width="800px">
</p>
</div>

## Códigos

[Código motor stepper Nema 23](motor_stepper_nema.cpp)

[Código motor stepper Nema 23 y motor stepper 28byj-48](motor_nema_motor_28byj48.cpp)