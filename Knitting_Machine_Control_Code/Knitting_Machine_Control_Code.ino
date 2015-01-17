#include <Servo.h>
static int numLoops = 10; //the number of loops initially cast on

// pin assignations
static int startservopin = 1;
static int endservopin = 1;
static int tilterservopin = 1;
static int rotationalhookservopin = 1;
static int thrusthookservopin = 1;
static int chainservopin = 1;

//positions are represented by int 0-180


//startservo positions
int startHole; //above hole
int startGrab; //about to grab yarn
int startRelease; //release
int startCentre; //centred position at beginning


//endservo positions
//knitstitch
int endHole; //above hole
int endGrab; //about to grab yarn
int endRelease; //release
int endCentre; //centred position at beginning


//tilterservo positions
//knitstitch
int tiltTilt;
int tiltCentre;

//rotationalhookservo positions
//knitstitch
int rotLeft;
int rotRight;
int rotCentre; //centred position at beginning

//thrusthookservo positions
//knitstitch
int thrustOut;
int thrustIn;
int thrustCentre; //centred position at beginning

//chainservo positions
//knitstitch
int chainend;
int chainEnd;
int chainCentre; //centred position at beginning



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

