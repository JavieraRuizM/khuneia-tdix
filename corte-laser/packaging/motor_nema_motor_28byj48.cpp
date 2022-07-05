#include <Stepper.h>      // incluye libreria stepper

float radio=3.5; // medida del radio del eje del motor en milimetros
float distancia=100; // distancia de recorrido de la cuerda en milimetros
float duracion=5; // tiempo del recorrido en segundos, 10 para enrollar y 10 para desenrollar

//botones
const int  boton1 = 3; //definir valor del pin del boton1
const int  boton2 = 4; //definir valor del pin del boton2
const int  boton3 = 5; //definir valor del pin del boton3
int stateButton = 0; //definir estado del boton 1
int stateButton2 = 0; //definir estado del boton 2
int stateButton3 = 0; //definir estado del boton 3

Stepper motor1(2048, 8, 9, 10, 11);   // pasos completos motor 1
const int stepPin = 6; // pin de conexion al arduino motor 2
const int dirPin = 12; // p in de conexion al arduino motor 2
const int enPin = 13; // pin de conexion al arduino motor 2

float unidadtiempo=(0.0455/radio); // constante dividida por el radio del eje del motor
float total=(duracion/(0.0455/radio)); // tiempo dividido por unidadtiempo
float perimetro=(2*PI*radio); // perimetro del espesor del eje del motor
float calculo1=(distancia/perimetro); // calculo para saber cuantas vueltas debe dar el motor en una distancia determinada
float calculo2=(calculo1*1600); // calculo 1 por 1600 (correspondiente a una vuelta del motor)

 
void setup() {
 motor1.setSpeed(3);       // valores de 1, 2 o 3 para el motor 28byj-48
 pinMode(boton1, INPUT);
 pinMode(boton2, INPUT);
 pinMode(boton3, INPUT);
 pinMode(stepPin,OUTPUT);
 pinMode(dirPin,OUTPUT);
 pinMode(enPin,OUTPUT);
 digitalWrite(enPin,LOW);
 Serial.begin(9600);
}
 
void loop() {

  stateButton = digitalRead(boton1);
  stateButton2 = digitalRead(boton2);
  stateButton3 = digitalRead(boton3);
  
  //motor 28byj-48
  if (stateButton == HIGH){
  
  Serial.print("a");
  motor1.step(2048);         // cantidad de pasos
  delay(100); 
  
}

//motor NEMA 23

//giro del motor al presionar el boton 1
 if (stateButton2 == HIGH) {  
 digitalWrite(dirPin,HIGH); // sentido de giro del motor a la derecha
 for(int x = 0; x < calculo2; x++) { // ciclo for para mantener la duracion del ciclo
 digitalWrite(stepPin,HIGH);
 delayMicroseconds(total);
 digitalWrite(stepPin,LOW);
 delayMicroseconds(total);
 }
 delay(10); // un segundo de retraso
 }

 //giro del motor al presionar el boton 2
 if (stateButton3 == HIGH){  
 digitalWrite(dirPin,LOW); // sentido de giro del motor a la izquierda
 for(int x = 0; x < calculo2; x++) {
 digitalWrite(stepPin,HIGH);
 delayMicroseconds(total);
 digitalWrite(stepPin,LOW);
 delayMicroseconds(total);
 }
 delay(10); // un segundo de retraso
}


else{
  digitalWrite(dirPin,LOW);
  digitalWrite(stepPin,LOW); 
}
}


