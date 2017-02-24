/*
   Curso de Arduino e AVR WR Kits Channel
   
   
   Aula 65 - Controle de Motor com Motor Shield
   
    
   Autor: Eng. Wagner Rambo  Data: Maio de 2016
   
   www.wrkits.com.br | facebook.com/wrkits | youtube.com/user/canalwrkits
   
*/
 
// --- Bibliotecas Auxiliares ---
#include <AFMotor.h> //Inclui biblioteca AF Motor
 




// --- Variáveis Globais ---

//seleção de motores
  AF_DCMotor motor1(1); //Seleção do Motor 1
  AF_DCMotor motor2(2); //Seleção do Motor 2
  AF_DCMotor motor3(3); //Seleção do Motor 3
  AF_DCMotor motor4(4); //Seleção do Motor 4
unsigned char velocidade1 = 0x00; //Armazena a velocidade do motor1 (8 bits)
 
 
// --- Configurações Iniciais ---
void setup()
{
  
   //A biblioteca se encarrega de setar entradas e saídas!

} //end setup
 
 
// --- Loop Infinito ---
void loop()
  {
      velocidade1 = 0xFF;           //Velocidade recebe o valor máximo
      
      motor1.setSpeed(velocidade1); //Seleciona velocidade atual
      motor1.run(FORWARD);          //Movimenta motor no sentido horário

      motor2.setSpeed(velocidade1); //Seleciona velocidade atual
      motor2.run(FORWARD);          //Movimenta motor no sentido horário
      
      motor3.setSpeed(velocidade1); //Seleciona velocidade atual
      motor3.run(FORWARD);          //Movimenta motor no sentido horário

      motor4.setSpeed(velocidade1); //Seleciona velocidade atual
      motor4.run(FORWARD);          //Movimenta motor no sentido horário

      delay(5000);

      motor1.setSpeed(velocidade1); //Seleciona velocidade atual
      motor1.run(RELEASE);          //Movimenta motor no sentido horário

      motor2.setSpeed(velocidade1); //Seleciona velocidade atual
      motor2.run(RELEASE);          //Movimenta motor no sentido horário
      
      motor3.setSpeed(velocidade1); //Seleciona velocidade atual
      motor3.run(RELEASE);          //Movimenta motor no sentido horário

      motor4.setSpeed(velocidade1); //Seleciona velocidade atual
      motor4.run(RELEASE);          //Movimenta motor no sentido horário

      delay(2000);

      motor1.setSpeed(velocidade1); //Seleciona velocidade atual
      motor1.run(BACKWARD);          //Movimenta motor no sentido horário

      motor2.setSpeed(velocidade1); //Seleciona velocidade atual
      motor2.run(BACKWARD);          //Movimenta motor no sentido horário
      
      motor3.setSpeed(velocidade1); //Seleciona velocidade atual
      motor3.run(BACKWARD);          //Movimenta motor no sentido horário

      motor4.setSpeed(velocidade1); //Seleciona velocidade atual
      motor4.run(BACKWARD);         //Movimenta motor no sentido horário

      delay(5000);

      motor1.setSpeed(velocidade1); //Seleciona velocidade atual
      motor1.run(RELEASE);          //Movimenta motor no sentido horário

      motor2.setSpeed(velocidade1); //Seleciona velocidade atual
      motor2.run(RELEASE);          //Movimenta motor no sentido horário
      
      motor3.setSpeed(velocidade1); //Seleciona velocidade atual
      motor3.run(RELEASE);          //Movimenta motor no sentido horário

      motor4.setSpeed(velocidade1); //Seleciona velocidade atual
      motor4.run(RELEASE);          //Movimenta motor no sentido horário

      delay(2000);
      
  } //end loop












