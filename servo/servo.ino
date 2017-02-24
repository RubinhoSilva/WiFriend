// Programa : Controle de servo com Motor Shield L293D
// Autor : Arduino e Cia

// Carrega a biblioteca Servo
#include <Servo.h> 
 
// Cria um objeto chamado servo1
Servo servo1;

int i = 90;
 
void setup() 
{ 
  // Indica que o servo1 esta ligado ao pino 10
  servo1.attach(10);  
  servo1.write(i); 
} 
 
void loop() 
{ 
  // Movimenta o servo
   
  //for (int i = 0; i < 180; i++){
    //servo1.write(i); 
    //delay(10);
  //}
  //delay(1);
  //for (int i = 180; i > 0; i--){
    //servo1.write(i); 
    //delay(10);
  //}
  //delay(1);
} 
