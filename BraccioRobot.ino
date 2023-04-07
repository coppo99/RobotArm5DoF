#include <Servo.h>

Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;

int pos1 = 90;
int pos2 = 90;
int pos3 = 90;
int pos4 = 90;
int pos5 = 90;

void setup() {
  myservo1.attach(6);
  myservo2.attach(2);
  myservo3.attach(3);
  myservo4.attach(4);
  myservo5.attach(5);
  Serial.begin(9600);
  Serial.println("Ready");
}

void loop() {
  if (Serial.available() > 0){
    char input = Serial.read();  
    switch (input)
    {
      //SERVO1
      case 'Q':
        pos1 = pos1 - 5;
        Serial.println("Q");
        pos1 = constrain(pos1, 0, 180);
        myservo1.write(pos1);
      break;
      case 'W':
        pos1 = pos1 + 5;
        Serial.println("W");
        pos1 = constrain(pos1, 0, 180);
        myservo1.write(pos1);
      break;
      
      //SERVO2
      case 'A':
        pos2 = pos2 - 5;
        Serial.println("A");
        pos2 = constrain(pos2, 0, 180);
        myservo2.write(pos2);
      break;
      case 'S':
        pos2 = pos2 + 5;
        Serial.println("S");
        pos2 = constrain(pos2, 0, 180);
        myservo2.write(pos2);
      break;
      
      //SERVO3
      case 'Z':
        pos3 = pos3 - 5;
        Serial.println("Z");
        pos3 = constrain(pos3, 0, 180);
        myservo3.write(pos3);
      break;
      case 'X':
        pos3 = pos3 + 5;
        Serial.println("X");
        pos3 = constrain(pos3, 0, 180);
        myservo3.write(pos3);
      break; 

      //SERVO4
      case 'E':
        pos4 = pos4 - 5;
        Serial.println("E");
        pos4 = constrain(pos4, 0, 180);
        myservo4.write(pos4);
      break;
      case 'R':
        pos4 = pos4 + 5;
        Serial.println("R");
        pos4 = constrain(pos4, 0, 180);
        myservo4.write(pos4);
      break;

      //SERVO3
      case 'D':
        pos5 = pos5 - 5;
        Serial.println("D");
        pos5 = constrain(pos5, 0, 180);
        myservo5.write(pos5);
      break;
      case 'F':
        pos5 = pos5 + 5;
        Serial.println("F");
        pos5 = constrain(pos5, 0, 180);
        myservo5.write(pos5);
      break; 
    }

  }
}
