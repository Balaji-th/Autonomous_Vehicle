// Angle = 18 ;  Stright
// Angle = 36 ;  Left
// Angle = 0 ;   Right

// Include the Servo library 
#include <Servo.h> 
//L298n Motor Driver pins.
#define in1 5 
#define in2 6
#define in3 10
#define in4 11
#define servoPin 3 //Stepper pin 

int command; //Int to store app command state.
int Speed = 255;  //Set Speed 
int Angle = 18;  //Stepper motor Initial angle
// Create a servo object 
Servo Servo1; 

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  // We need to attach the servo to the used pin number 
  Servo1.attach(servoPin);
  analogWrite(in1, 255);
  analogWrite(in2, 0);
  Servo1.write(18); 
  //Set the baud rate to your Bluetooth module.
  Serial.begin(9600); 

  // wait for serial port to connect.
  while (!Serial) {
    ; 
  }
}

void forward() {
  Servo1.write(Angle);
  analogWrite(in3, Speed);
  analogWrite(in4, 0);
}

void back() {
  Servo1.write(Angle);
  analogWrite(in3, 0);
  analogWrite(in4, Speed);
}

void left() {
  Servo1.write(Angle);
  analogWrite(in3, Speed);
  analogWrite(in4, 0);
}

void right() {
  Servo1.write(Angle);
  analogWrite(in3, Speed);
  analogWrite(in4, 0);
}

void forwardleft() {
  Servo1.write(Angle);
  analogWrite(in3, Speed);
  analogWrite(in4, 0);
}
void forwardright() {
  Servo1.write(Angle);
  analogWrite(in3, Speed);
  analogWrite(in4, 0);
}
void backright() {
  Servo1.write(Angle);
  analogWrite(in3, 0);
  analogWrite(in4, Speed);
}
void backleft() {
  Servo1.write(Angle);
  analogWrite(in3, 0);
  analogWrite(in4, Speed);
}

void stop() {
  Servo1.write(Angle);
  analogWrite(in1, 0);
  analogWrite(in2, 0);
  analogWrite(in3, 0);
  analogWrite(in4, 0);
}

void LeftAngle(){
  if (Angle+9<=36) Angle += 9;
  else Angle = 36;
}

void RightAngle(){
  if (Angle-9>=0) Angle -= 9;
  else Angle = 0;
}

void loop() {
  if (Serial.available() > 0) {
    command = Serial.read();
    Serial.println(char(command));
    //Stop(); //Initialize with motors stoped.
    analogWrite(in1, 255);
    analogWrite(in2, 0);

    switch (command) {
      case 'F':
        Angle = 18; 
        forward();
        break;
      case 'B':
        Angle = 18;
        back();
        break;
      case 'L':
        LeftAngle();
        left();
        break;
      case 'R':
        RightAngle();
        right();
        break;
      case 'G':
        LeftAngle();
        forwardleft();
        break;
      case 'I':
        RightAngle();
        forwardright();
        break;
      case 'H':
        LeftAngle();
        backleft();
        break;
      case 'J':
        RightAngle();
        backright();
        break;
      case 'S':
        Angle = 18;
        stop();
        break;
      default:
        //forward();
        break;
    }
  }
}
