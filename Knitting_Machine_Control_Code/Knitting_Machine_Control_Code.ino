#include <Servo.h>
static int numloops = 10; //the number of loops initially cast on

// pin assignations
static int startservopin = 1;
static int endservopin = 1;
static int tilterservopin = 1;
static int rotationalhookservopin = 1;
static int thrusthookservopin = 1;
static int chainservopin = 1;

//startservo positions
int holeposition; //when the startservo is in this position
                  //the startservo grabber is positioned 
                  //directly above the crochet hook hole
//knitstitch
int 

//endservo positions
//knitstitch


//tilterservo positions
//knitstitch


//rotationalhookservo positions
//knitstitch


//thrusthookservo positions
//knitstitch


//chainservo positions
//knitstitch




Servo startservo; //servo that first grabs the 
                  //loop from the needle in knitstich
Servo endservo; //servo that places the completed loop 
              // on the end needle in knitstitch
Servo tilter; //servo that tilts the T manipulator back and forth
Servo rotationalhookservo; //servo that controls crochet hook rotation
Servo thrusthookservo;    // servo that controls crochet hook thrusts
Servo chainservo;       //servo that controls chain movement



void setup(){
  startservo.attach(startservopin);
  endservo.attach(endservopin);
  tilter.attach(tilterservopin);
  rotationalhookservo.attach(rotationalhookservopin);
  thrusthookservo.attach(thrusthookservopin);
  chainservo.attach(chainservopin);
  centreservos();
  
}

void loop(){
  
  knitstitch();
  delay(15);
}

insertservos(){
  startservo.write(0);
  endservo.attach(0);
  tilter.attach(0);
  rotationalhookservo.attach(0);
  thrusthookservo.attach(0);
  chainservo.attach(0);
}

knitstitch(){
  chainservo.write();
  
  
}

