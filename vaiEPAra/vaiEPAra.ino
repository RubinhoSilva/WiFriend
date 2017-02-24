/*
 * HCSR04Ultrasonic/examples/UltrasonicDemo/UltrasonicDemo.pde
 *
 * SVN Keywords
 * ----------------------------------
 * $Author: cnobile $
 * $Date: 2011-09-17 02:43:12 -0400 (Sat, 17 Sep 2011) $
 * $Revision: 29 $
 * ----------------------------------
 */

#include <Ultrasonic.h>
#include <AFMotor.h> //Inclui biblioteca AF Motor

#define TRIGGER_PIN  53
#define ECHO_PIN     52

//seleção de motores
  AF_DCMotor motor1(1); //Seleção do Motor 1
  AF_DCMotor motor2(2); //Seleção do Motor 2
  AF_DCMotor motor3(3); //Seleção do Motor 3
  AF_DCMotor motor4(4); //Seleção do Motor 4
  unsigned char velocidade1 = 0x00; //Armazena a velocidade do motor1 (8 bits)

  Ultrasonic ultrasonic(TRIGGER_PIN, ECHO_PIN);

void setup()
  {
  }

void loop()
  {
      //float cm;
      //long microsec = ultrasonic.timing();

      //cm = ultrasonic.convert(microsec, Ultrasonic::CM);

      motor1.setSpeed(velocidade1); //Seleciona velocidade atual
      motor1.run(FORWARD);          //Movimenta motor no sentido horário

      motor2.setSpeed(velocidade1); //Seleciona velocidade atual
      motor2.run(FORWARD);          //Movimenta motor no sentido horário
      
      motor3.setSpeed(velocidade1); //Seleciona velocidade atual
      motor3.run(FORWARD);          //Movimenta motor no sentido horário

      motor4.setSpeed(velocidade1); //Seleciona velocidade atual
      motor4.run(FORWARD);          //Movimenta motor no sentido 

      delay(1000);

  //if(cm < 10){
      //motor1.setSpeed(velocidade1); //Seleciona velocidade atual
      //motor1.run(RELEASE);          //Movimenta motor no sentido horário

      //motor2.setSpeed(velocidade1); //Seleciona velocidade atual
      //motor2.run(RELEASE);          //Movimenta motor no sentido horário
      
      //motor3.setSpeed(velocidade1); //Seleciona velocidade atual
      //motor3.run(RELEASE);          //Movimenta motor no sentido horário

      //motor4.setSpeed(velocidade1); //Seleciona velocidade atual
      //motor4.run(RELEASE);          //Movimenta motor no sentido horário
  //}

  }
