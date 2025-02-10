/*  PRIZM Controller example program
 *  Spin DC motor channel 1 for 5 seconds, then coast to a stop.
 *  After stopping, wait for 2 seconds, spin in opposite direction.
 *  Continue to repeat until RED reset button is pressed.
 *  author PWU on 08/05/2016
*/

  #include <PRIZM.h>    // include the PRIZM library in the sketch
  PRIZM prizm;          // instantiate a PRIZM object “prizm” so we can use its functions

void setup() {        

  prizm.PrizmBegin();   // Initialize the PRIZM controller
prizm.setMotorInvert(1,1);
prizm.setServoSpeed(1,25);  // set servo 1 speed to 25%

}

void loop() {   

  prizm.setMotorPowers(-50,-50);    
  delay(3000);                  
  prizm.setMotorPowers(0,0);     
  delay(1000);                  
  prizm.setMotorPowers(50,-50);   
  delay(1020);                  
  prizm.setMotorPowers(0,0);     
  delay(1000);  
  prizm.setMotorPowers(-50,-50);   
  delay(1000);                  
  prizm.setMotorPowers(0,0);     
  delay(7000); 
  
    if(prizm.readSonicSensorCM(1) < 25) 
  {
    blue();    
  }

    if(prizm.readSonicSensorCM(2) < 25) 
  {
    red();    
  }

    if(prizm.readSonicSensorCM(3) < 25) 
  {
    green();    
  }

prizm.PrizmEnd();
}

void blue(){
  
  prizm.setServoPosition(1,0);
  delay(1000);
  prizm.setServoSpeed(1,0);
  prizm.setMotorPowers(0,0);
  delay (1000);
}

  void red (){
  delay(7000);                      
  prizm.setMotorPowers(50,50);
  delay (4000); 
  prizm.setMotorPowers(0,0);     // stop motor (coast to stop)
  delay(5000);   
  prizm.setServoSpeed(1,25);
  prizm.setServoPosition(1,180);
  delay(1000);
  prizm.setServoPosition(1,0);
  delay(1000);
  prizm.setServoSpeed(1,0);
  prizm.setMotorPowers(-50,-50);    // spin Motor 1 CW at 25% power
  delay(4000);                  // wait while the motor runs for 5 seconds
  prizm.setMotorPowers(0,0);     // stop motor (coast to stop)
  delay(1000); 

  }

  void green(){

  delay(1000);  
  prizm.setMotorPowers(50,50);    // spin Motor 1 CW at 25% power
  delay(4000);                  // wait while the motor runs for 5 seconds
  prizm.setMotorPowers(0,0);     // stop motor (coast to stop)
  delay(1000);   
  prizm.setMotorPowers(50,-50);    // spin Motor 1 CW at 25% power
  delay(1020);                  // wait while the motor runs for 5 seconds
  prizm.setMotorPowers(0,0);
  delay(1000);
  prizm.setMotorPowers(-50,-50);    // spin Motor 1 CW at 25% power
  delay(2500);                  // wait while the motor runs for 5 seconds
  prizm.setMotorPowers(0,0);     // stop motor (coast to stop)
  delay(1000);   
  prizm.setMotorPowers(-50,50);    // spin Motor 1 CW at 25% power
  delay(1020);                  // wait while the motor runs for 5 seconds
  prizm.setMotorPowers(0,0);
  delay(2000);
  prizm.setServoSpeed(1,25);
  prizm.setServoPosition(1,180);
  delay(1000);
  prizm.setServoPosition(1,0);
  delay(1000);
  prizm.setServoSpeed(1,0);
  prizm.setMotorPowers(0,0);
  delay(1000); 
  prizm.setMotorPowers(-50,50);    
  delay(1020);                  
  prizm.setMotorPowers(0,0);     
  delay(1000);   
  prizm.setMotorPowers(-50,-50);    
  delay(2500);                  
  prizm.setMotorPowers(0,0);     
  delay(1000);  
  prizm.setMotorPowers(50,-50);    
  delay(1020);
  prizm.setMotorPowers(-50,-50);    
  delay(3700);                  
  prizm.setMotorPowers(0,0);
  delay(5000);
  }
  
  
