#include <Ultrasonic.h> //importa a bilioteca do sensor ultrassonico
#include <AFMotor.h> //importa a biblioteca de controle dos motores
#include <Servo.h>

#define TRIGGER_PIN  53 //pino do trigger do sensor ultrassonico
#define ECHO_PIN     52 //pino do echo do sensor ultrassonico

int velocidade = 255; //velocidade maxima
float cm; //distancia de um objeto
Ultrasonic ultrasonic(53,52);
Servo servo;
float cmDireita;
float cmEsquerda;

AF_DCMotor motor1(1); //Seleção do Motor 1
AF_DCMotor motor2(2); //Seleção do Motor 2
AF_DCMotor motor3(3); //Seleção do Motor 3
AF_DCMotor motor4(4); //Seleção do Motor 4

void setup() {
  Serial.begin(9600); //inicia a porta serial
  servo.attach(10);
  servo.write(95); 
}

void loop() {
  velocidade = 123;
  cm = distancia();
  cm = distancia();
  if(cm < 50){
     parar();
     delay(1000);
     direita_esquerda();
  }
   frente();
}

void direita_esquerda(){

  velocidade = 255;
  
  cmDireita = servoDireita();
  Serial.println("cmDireita");
  Serial.println(cmDireita);
  
  
  cmEsquerda = servoEsquerda();
  Serial.println("cmEsquerda");
  Serial.println(cmEsquerda);


  servo.write(95);

  delay(1000);

  if(cmEsquerda > cmDireita){
    esquerda();
    Serial.println("Virou esquerda");
  }
  else if(cmEsquerda == cmDireita){
    atras();
    delay(2000);
  }
  else if(cmDireita > cmEsquerda){
    direita();
    Serial.println("Virou Direita");
  }
}

void frente(){ //funcao para ir para frente
      motor1.setSpeed(velocidade ); //Seleciona velocidade atual
      motor1.run(FORWARD);          //Movimenta motor no sentido horário
 
      motor2.setSpeed(velocidade); //Seleciona velocidade atual
      motor2.run(FORWARD);          //Movimenta motor no sentido horário
      
      motor3.setSpeed(velocidade); //Seleciona velocidade atual
      motor3.run(FORWARD);          //Movimenta motor no sentido horário

      motor4.setSpeed(velocidade); //Seleciona velocidade atual
      motor4.run(FORWARD);          //Movimenta motor no sentido horário
}
void direita(){
      motor1.setSpeed(velocidade); //Seleciona velocidade atual
      motor1.run(FORWARD);          //Movimenta motor no sentido horário
 
      motor2.setSpeed(velocidade); //Seleciona velocidade atual
      motor2.run(FORWARD);          //Movimenta motor no sentido horário
      
      motor3.setSpeed(velocidade); //Seleciona velocidade atual
      motor3.run(BACKWARD);          //Movimenta motor no sentido anti-horário

      motor4.setSpeed(velocidade); //Seleciona velocidade atual
      motor4.run(BACKWARD);          //Movimenta motor no sentido anti-horário

      delay(500);
}

void esquerda(){
      motor1.setSpeed(velocidade); //Seleciona velocidade atual
      motor1.run(BACKWARD);          //Movimenta motor no sentido horário
 
      motor2.setSpeed(velocidade); //Seleciona velocidade atual
      motor2.run(BACKWARD);          //Movimenta motor no sentido horário
      
      motor3.setSpeed(velocidade); //Seleciona velocidade atual
      motor3.run(FORWARD);          //Movimenta motor no sentido anti-horário

      motor4.setSpeed(velocidade); //Seleciona velocidade atual
      motor4.run(FORWARD);          //Movimenta motor no sentido anti-horário      

      delay(500);
}   

void atras(){ //funcao para dar re
      motor1.setSpeed(velocidade); //Seleciona velocidade atual
      motor1.run(BACKWARD);          //Movimenta motor no sentido anti-horário
 
      motor2.setSpeed(velocidade); //Seleciona velocidade atual
      motor2.run(BACKWARD);          //Movimenta motor no sentido anti-horário
      
      motor3.setSpeed(velocidade); //Seleciona velocidade atual
      motor3.run(BACKWARD);          //Movimenta motor no sentido anti-horário

      motor4.setSpeed(velocidade); //Seleciona velocidade atual
      motor4.run(BACKWARD);          //Movimenta motor no sentido anti-horário
}

void parar(){ //funcao para parar
      motor1.setSpeed(velocidade); //Seleciona velocidade atual
      motor1.run(RELEASE);          //Para o motor
 
      motor2.setSpeed(velocidade); //Seleciona velocidade atual
      motor2.run(RELEASE);          //Para o motor
      
      motor3.setSpeed(velocidade); //Seleciona velocidade atual
      motor3.run(RELEASE);          //Para o motor

      motor4.setSpeed(velocidade); //Seleciona velocidade atual
      motor4.run(RELEASE);          //Para o motor
}

float distancia(){
  long microsec = ultrasonic.timing();
  return ultrasonic.convert(microsec, Ultrasonic::CM);
}

float servoDireita(){
  servo.write(0);
  delay(2000);
  cm = distancia();
  cm = distancia();
  return cm;
}

float servoEsquerda(){
  servo.write(180);
  delay(2000);
  cm = distancia();
  cm = distancia();
  return cm;
}

