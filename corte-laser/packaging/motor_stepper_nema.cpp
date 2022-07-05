 
 //Valores editables
float radio=3.5; // medida del radio del eje del motor en milimetros
float distancia=100; // distancia de recorrido de la cuerda en milimetros
float duracion=5; // tiempo del recorrido en segundos, 10 para enrollar y 10 para desenrollar

const int boton1 = 3; //pin de conexion al arduino boton 1
const int boton2 = 4; //pin de conexion al arduino boton 2
int stateButton1 = 0; //estado del boton 1
int stateButton2 = 0; //estado del boton 2
const int stepPin = 5; // pin de conexion al arduino motor
const int dirPin = 11; // pin de conexion al arduino motor
const int enPin = 12; // pin de conexion al arduino motor

float unidadtiempo=(0.0455/radio); // constante dividida por el radio del eje del motor
float total=(duracion/(0.0455/radio)); // tiempo dividido por unidadtiempo
float perimetro=(2*PI*radio); // perimetro del espesor del eje del motor
float calculo1=(distancia/perimetro); // calculo para saber cuantas vueltas debe dar el motor en una distancia determinada
float calculo2=(calculo1*1600); // calculo 1 por 1600 (correspondiente a una vuelta del motor)

void setup() {
 pinMode(boton1,INPUT); 
 pinMode(boton2,INPUT); 
 pinMode(stepPin,OUTPUT);
 pinMode(dirPin,OUTPUT);
 pinMode(enPin,OUTPUT);
 digitalWrite(enPin,LOW);

}


void loop() {
  
 stateButton1 = digitalRead(boton1);
 stateButton2 = digitalRead(boton2);
 
 //giro del motor al presionar el boton 1
 if (stateButton1 == HIGH) {  
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
 if (stateButton2 == HIGH){  
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
//Fin del Codigo