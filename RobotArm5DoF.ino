#include <Servo.h>

Servo myservo[5];

int pos[5]={90,90,90,90,90};

void setup() {
  myservo[1].attach(6);
  myservo[2].attach(2);
  myservo[3].attach(3);
  myservo[4].attach(4);
  myservo[5].attach(5);
  Serial.begin(9600);
  Serial.println("Ready");
}
void moveServo(int joint, int vel){
     pos[joint] = pos[joint] + vel;
     Serial.print(joint);
     Serial.print(" ");
     Serial.println(vel);
     pos[joint] = constrain(pos[joint], 0, 180);
     myservo[joint].write(pos[joint]);
  }
void loop() {
  if (Serial.available() > 0){
    char input = Serial.read();  
    switch (input)
    {
      //SERVO1
      case 'Q':
        moveServo(1,-5);
      break;
      case 'W':
        moveServo(1,5);
      break;
      
      //SERVO2
      case 'A':
        moveServo(2,-5);
      break;
      case 'S':
        moveServo(2,5);
      break;
      
      //SERVO3
      case 'Z':
        moveServo(3,-5);
      break;
      case 'X':
        moveServo(3,5);
      break; 

      //SERVO4
      case 'E':
        moveServo(4,-5);
      break;
      case 'R':
        moveServo(4,5);
      break;

      //SERVO5
      case 'D':
        moveServo(5,-5);
      break;
      case 'F':
        moveServo(5,5);
      break; 
    }

  }
}
