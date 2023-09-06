#include <AccelStepper.h>
#include <Math.h>

//desired rate (ml/min)
const float RATE = 5;

//uncomment which syringe to use. Top is small syringe, bottom is large syringe
//const double SYRINGE_DIAMETER = 11.5;
const float SYRINGE_DIAMETER = 18.12;

float speed;

const float STEPS_PER_REV = 3200;

const int STEPPER_PIN_1 = 2;
const int STEPPER_PIN_2 = 3;

const int START_STOP_BUTTON = 4;
const int LIMIT_SWITCH = 8;

const int MOVE_STEPPER_COUNTER = 9;
const int MOVE_STEPPER_CLOCK = 10;

const int LED_RED = 5;
const int LED_GREEN = 6;
const int LED_BLUE = 7;

bool isEmpty;
bool isStopped;


AccelStepper stepper(AccelStepper::DRIVER, 3, 2);


void setup() {
  isEmpty = false;
  isStopped=false;
  speed = calcStepperSpeed(RATE, SYRINGE_DIAMETER);
  Serial.begin(9600);
  
  pinMode(START_STOP_BUTTON, INPUT);
  digitalWrite(START_STOP_BUTTON, HIGH);

  pinMode(LIMIT_SWITCH, INPUT_PULLUP);

  pinMode(MOVE_STEPPER_COUNTER, INPUT_PULLUP);
  pinMode(MOVE_STEPPER_CLOCK, INPUT_PULLUP);
  
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_BLUE, OUTPUT);
  stepper.setMaxSpeed(STEPS_PER_REV);
  stepper.setSpeed(speed);
}

void loop() {
  Serial.println(digitalRead(MOVE_STEPPER_COUNTER));
  while(isStopped && (digitalRead(MOVE_STEPPER_COUNTER) == LOW)){
    stepper.setSpeed((STEPS_PER_REV/2));
    stepper.run();
  }
  while(isStopped && (digitalRead(MOVE_STEPPER_CLOCK) == LOW) && !isEmpty){
    stepper.setSpeed(-(STEPS_PER_REV/2));
    stepper.run();
  }
  
  if(digitalRead(LIMIT_SWITCH) == LOW){
    isEmpty=true;
    setLED(255,0,0);
    stepper.stop();
    isStopped = true;
  } else {
    isEmpty = false;
  }
  
  if(!isEmpty){
    if(digitalRead(START_STOP_BUTTON) == HIGH){
      stepper.setSpeed(speed);
      stepper.runSpeed();
      isStopped = false;
      setLED(0,255,0);
    
    }
    else{
      stepper.stop();
      isStopped = true;
      setLED(255,120,0);
    }
  } 
}

float calcStepperSpeed(float rate, float diameter){
  return -((rate * 1000 / 60) / (((0.5*diameter) * (0.5*diameter)) * 3.14159265)) * STEPS_PER_REV / 8.0;  //* (STEPS_PER_REV / 8.0);
}

void setLED(int red, int green, int blue){
    analogWrite(LED_RED, red);
    analogWrite(LED_GREEN, green);
    analogWrite(LED_BLUE, blue);
}
