  #include <PRIZM.h>    // include the PRIZM library in the sketch
  PRIZM prizm;          // instantiate a PRIZM object “prizm” so we can use its functions
int i = 0;

void setup() {        

prizm.PrizmBegin();   // Initialize the PRIZM controller
prizm.setMotorInvert(1,1);
prizm.setServoSpeed(1,10);  // set servo 1 speed to 25%

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

  for (int i=1;i <=4;i++){
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
  }
prizm.PrizmEnd();
}

void blue(){
  
  prizm.setServoPosition(1,0); // включить ленту
  delay(500);
  prizm.setCRServoState(1,0); //выключить ленту
  delay (500);
}

  void red (){
  delay(7000);                      
  prizm.setMotorPowers(50,50);
  delay (4000); 
  prizm.setMotorPowers(0,0);     
  delay(5000);   
  
  prizm.setServoPosition(1,180); //включить ленту
  delay(500);
  prizm.setServoPosition(1,0);
  delay(1000);
  prizm.setCRServoState(1,0); // выключить ленту
  delay(500);
  
  prizm.setMotorPowers(-50,-50);    
  delay(4000);                  
  prizm.setMotorPowers(0,0);     
  delay(1000); 

  }

  void green(){

  delay(7000);  
  prizm.setMotorPowers(50,50);    
  delay(4000);                  
  prizm.setMotorPowers(0,0);    
  delay(1000);   
  prizm.setMotorPowers(50,-50);    
  delay(1020);                  
  prizm.setMotorPowers(0,0);
  delay(1000);
  prizm.setMotorPowers(-50,-50);    
  delay(2500);                  
  prizm.setMotorPowers(0,0);     
  delay(1000);   
  prizm.setMotorPowers(-50,50);    
  delay(1020);                  
  prizm.setMotorPowers(0,0);
  delay(2000);
  
  prizm.setServoSpeed(1,25); //включить ленту
  prizm.setServoPosition(1,180);
  delay(500);
  prizm.setServoPosition(1,0);
  delay(1000);
  prizm.setCRServoState(1,0);//выключить ленту
  delay(500);
  prizm.setMotorPowers(0,0);
  delay(1000); 
  prizm.setMotorPowers(-50,50);    
  delay(1000);                  
  prizm.setMotorPowers(0,0);     
  delay(1000);   
  prizm.setMotorPowers(-50,-50);    
  delay(2500);                  
  prizm.setMotorPowers(0,0);     
  delay(1000);  
  prizm.setMotorPowers(50,-50);    
  delay(1000);
  prizm.setMotorPowers(-50,-50);    
  delay(3700);                  
  prizm.setMotorPowers(0,0);
  delay(5000);
  }
  
  
