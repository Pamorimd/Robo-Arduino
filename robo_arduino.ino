#include <Servo.h>

#define SENSOR_ESQUERDA_PINO A5
#define SENSOR_DIREITA_PINO A4

#define LIM 500 // Limiar para detecção da linha preta

Servo servoEsquerdo;
Servo servoDireito;

void setup() {
  Serial.begin(9600);
  
  // Inicialização dos servomotores
  servoEsquerdo.attach(12); // Pino digital 9 para o servo esquerdo
  servoDireito.attach(13); // Pino digital 10 para o servo direito
  
  // Configuração dos servomotores para posição inicial
 // servoEsquerdo.write(180); // Inicializa o servo esquerdo em 180 graus
  //servoDireito.write(0);    // Inicializa o servo direito em 0 graus
  //0 direito anda pra frente
  // 90 para
  //180 ppara esquerdo andar

}

void loop() {
  int sensorE = analogRead(SENSOR_ESQUERDA_PINO);
  int sensorD = analogRead(SENSOR_DIREITA_PINO);

  if((sensorE <= LIM) && (sensorD <= LIM)){
    servoEsquerdo.write(0); // Avança
    servoDireito.write(180); // Avança

  }else if(sensorD <= LIM){
      servoEsquerdo.write(0); // Avança
      servoDireito.write(90); // Parado
  }else if(sensorE <= LIM){
      servoEsquerdo.write(90); // Parado
      servoDireito.write(180); // Avança
  }else if((sensorE >= LIM) && (sensorD >= LIM)){
      servoEsquerdo.write(90); // Parado
      servoDireito.write(90); // Parado
  }

}
