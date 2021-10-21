#include <Servo.h>

Servo servo1; 
Servo servo2;
Servo servo3;
//Servo servo4;

int i = 0;

void setup() {
  servo1.attach(3);
  servo2.attach(5); 
  servo3.attach(6); 
  //servo4.attach(9); 
}

void loop() {
  while(1)
  {
    i=1;
    servo1.write(i);              
    servo2.write(i);     
    servo3.write(i);
    //servo4.write(i);         
    delay(10);                      
    i=180;
    servo1.write(i);                
    servo2.write(i);     
    servo3.write(i);
    //servo4.write(i);          
    delay(10);                      
  }

}
