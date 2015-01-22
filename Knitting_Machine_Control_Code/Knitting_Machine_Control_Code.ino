#include <Servo.h>

static int time = 1000; //delay between servo movements, in ms
static int numLoops = 10; //the number of loops initially cast on

// pin assignations
static int startservopin = 2;
static int endservopin = 3;
static int tiltservopin = 4;
static int rotationalhookservopin = 5;
static int thrusthookservopin = 6;
static int chainservopin = 7;

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
int rotHookUp;
int rotHookDown;
int rotCentre; //centred position at beginning

//thrusthookservo positions
//knitstitch
int thrustOut;
int thrustIn;
int thrustCentre; //centred position at beginning

//chainservo positions
//knitstitch
int chainStart;
int chainEnd;
int chainCentre; //centred position at beginning



Servo startservo; //servo that first grabs the 
                  //loop from the needle in knitstich
                  // 'leftmost' servo
Servo endservo; //servo that places the completed loop 
              // on the end needle in knitstitch
              // 'rightmost' servo
Servo tiltservo; //servo that tilts the T manipulator back and forth
Servo rotationalhookservo; //servo that controls crochet hook rotation
Servo thrusthookservo;    // servo that controls crochet hook thrusts
Servo chainservo;       //servo that controls chain movement



void setup(){
  startservo.attach(startservopin);
  endservo.attach(endservopin);
  tiltservo.attach(tiltservopin);
  rotationalhookservo.attach(rotationalhookservopin);
  thrusthookservo.attach(thrusthookservopin);
  chainservo.attach(chainservopin);
  centreservos();
  
}

void loop(){
  
  leftknitstitch();
  rightknitstitch();
  delay(15);
}

void centreservos(){
  startservo.write(startCentre);
  endservo.write(endCentre);
  tiltservo.write(tiltCentre);
  rotationalhookservo.write(rotCentre);
  thrusthookservo.write(thrustCentre);
  chainservo.write(chainCentre);
}

void leftknitstitch(){
  int i = 0;
  while(i < numLoops){
    tiltservo.write(tiltTilt);
    delay(time);
    chainservo.write(chainStart);
    delay(time);
    tiltservo.write(tiltCentre);
    delay(time);
    startservo.write(startGrab);
    delay(time);
    chainservo.write(chainCentre);
    delay(time);
    startservo.write(startHole);
    delay(time);
    tiltservo.write(tiltTilt);
    delay(time);
    rotationalhookservo.write(rotHookUp);
    delay(time);
    thrusthookservo.write(thrustOut);
    delay(time);
    thrusthookservo.write(thrustIn);
    delay(time);
    startservo.write(startRelease);
    delay(time);
    thrusthookservo.write(thrustOut);
    delay(time);
    endservo.write(endHole);
    delay(time);
    thrusthookservo.write(rotHookDown);
    delay(time);
    thrusthookservo.write(thrustIn);
    delay(time);
    tiltservo.write(tiltCentre);
    delay(time);
    chainservo.write(chainEnd);
    delay(time);
    endservo.write(endRelease);
    delay(time);
    i++;
  }
    
}

void rightknitstitch(){
  int i = 0;
  while(i < numLoops){
    tiltservo.write(tiltTilt);
    delay(time);
    chainservo.write(chainEnd);
    delay(time);
    tiltservo.write(tiltCentre);
    delay(time);
    endservo.write(endGrab);
    delay(time);
    chainservo.write(chainCentre);
    delay(time);
    endservo.write(endHole);
    delay(time);
    tiltservo.write(tiltTilt);
    delay(time);
    rotationalhookservo.write(rotHookUp);
    delay(time);
    thrusthookservo.write(thrustOut);
    delay(time);
    thrusthookservo.write(thrustIn);
    delay(time);
    endservo.write(endRelease);
    delay(time);
    thrusthookservo.write(thrustOut);
    delay(time);
    startservo.write(startHole);
    delay(time);
    thrusthookservo.write(rotHookDown);
    delay(time);
    thrusthookservo.write(thrustIn);
    delay(time);
    tiltservo.write(tiltCentre);
    delay(time);
    chainservo.write(chainStart);
    delay(time);
    startservo.write(startRelease);
    delay(time);
    i++;
  }
    
}
