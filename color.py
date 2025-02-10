import sys
import time
import random
import math

class Program():
  __interpretation_started_timestamp__ = time.time() * 1000

  pi = 3.141592653589793
  a = None
  b = None
  colorSensorG = None
  colorSensorR = None

  def execMain(self):

    
    self.colorSensorR = 0
    self.colorSensorG = 0
    
    for __iter__1 in range(0, 3):
      brick.configure("video2", "colorSensor")
      brick.colorSensor("video2").init(True)
      
      while not brick.keys().wasPressed(KeysEnum.Up):
        script.wait(100)
      
      self.a = self.colorSensorR
      self.b = self.colorSensorG
      if (self.a > 175):
        brick.display().showImage("media/trik_smile_normal.png")
        script.wait(1000)
        
        brick.motor("S2").setPower(90)
        
        script.wait(1000)
        
        brick.motor("M2").setPower(-(90))
        
        script.wait(7000)
        
        brick.motor("M1").setPower(-80)
        
        script.wait(6000)
        
        brick.motor("S2").setPower(0)
        
        script.wait(1000)
        
      else:
        if (self.b > 175):
          brick.display().showImage("media/trik_smile_normal.png")
          script.wait(1000)
          
          brick.motor("S2").setPower(90)
          
          script.wait(1000)
          
          brick.motor("M2").setPower(-(90))
          
          script.wait(6000)
          
          brick.motor("M1").setPower(-80)
          
          script.wait(6000)
          
          brick.motor("S2").setPower(0)
          
          script.wait(1000)
          
        else:
          brick.display().showImage("media/trik_smile_normal.png")
          script.wait(1000)
          
          brick.motor("S2").setPower(90)
          
          script.wait(1000)
          
          brick.motor("M2").setPower(-(90))
          
          script.wait(5000)
          
          brick.motor("M1").setPower(-80)
          
          script.wait(6000)
          
          brick.motor("S2").setPower(0)
          
          script.wait(1000)
          
    brick.stop()
    return

def main():
  program = Program()
  program.execMain()

if __name__ == '__main__':
  main()
