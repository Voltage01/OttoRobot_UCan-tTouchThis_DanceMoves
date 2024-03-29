//----------------------------------------------------------------
//-- Otto Dance U Can't Touch This by Ada Sarp Şahin
//-- Made for Otto DIY project
//-----------------------------------------------------------------
#include <US.h>
#include <Oscillator.h>
#include <Otto.h>
#include <Servo.h>
Otto Otto;
#define PIN_YL 2 //servo[2]
#define PIN_YR 3 //servo[3]
#define PIN_RL 4 //servo[4]
#define PIN_RR 5 //servo[5]
bool obstacleDetected = false;
int distance = 0;

void setup() {
  Otto.init(PIN_YL,PIN_YR,PIN_RL,PIN_RR,true);
  Otto.sing(S_connection); //Otto wake up!
  Otto.home();
  delay(50);
}

void loop() {
  Otto.moonwalker(1,950,30,1);
  Otto.moonwalker(1,950,30,-1);
  Otto.moonwalker(1,950,30,1); 
  delay(150);
  Otto.home();
  Otto.moonwalker(1,1000,30,1);
  Otto.moonwalker(1,1000,30,-1);
  Otto.moonwalker(1,1000,30,1); 
  delay(150);
  Otto.home();
  Otto.swing(3,1000,30);
  delay(150);
  Otto.home();
  Otto.swing(3,1000,30);
  Otto.home();
  Otto.ascendingTurn(8,870,30);
  Otto.home();
  Otto.jitter(8,900,30);
  Otto.moonwalker(1,950,30,1);
  Otto.moonwalker(1,950,30,-1);
  Otto.moonwalker(1,950,30,1); 
  delay(150);
  Otto.home();
  Otto.moonwalker(1,950,30,1);
  Otto.moonwalker(1,950,30,-1);
  Otto.moonwalker(1,950,30,1); 
  delay(150);
  Otto.home();
  Otto.swing(3,1000,30);
  delay(150);
  Otto.home();
  Otto.swing(3,1000,30);
  Otto.home();
  Otto.ascendingTurn(8,870,30);
  Otto.home();
  Otto.jitter(8,900,30);
  Otto.moonwalker(1,950,30,1);
  Otto.moonwalker(1,950,30,-1);
  Otto.moonwalker(1,950,30,1); 
  delay(150);
  Otto.home();
  Otto.moonwalker(1,950,30,1);
  Otto.moonwalker(1,950,30,-1);
  Otto.moonwalker(1,950,30,1); 
  delay(150);
  Otto.home();
  Otto.swing(3,1000,30);
  delay(150);
  Otto.home();
  Otto.swing(3,1000,30);
  Otto.home();
  Otto.ascendingTurn(8,870,30);
  Otto.home();
  Otto.jitter(8,900,30);
  Otto.moonwalker(1,950,30,1);
  Otto.moonwalker(1,950,30,-1);
  Otto.moonwalker(1,950,30,1); 
  delay(150);
  Otto.home();
  Otto.moonwalker(1,950,30,1);
  Otto.moonwalker(1,950,30,-1);
  Otto.moonwalker(1,950,30,1); 
  delay(150);
  Otto.home();
  Otto.swing(3,1000,30);
  delay(150);
  Otto.home();
  Otto.swing(3,1000,30);
  delay(150);
  Otto.home();
  Otto.updown(8,870,30);
  Otto.tiptoeSwing(7,900,30);
  delay(150);
  Otto.home();
  Otto.ascendingTurn(8,870,30);
  delay(100);
  Otto.jitter(8,900,30);
  delay(500);
  Otto.moonwalker(1,950,30,1);
  Otto.moonwalker(1,950,30,-1);
  Otto.moonwalker(1,950,30,1); 
  delay(150);
  Otto.home();
  Otto.moonwalker(1,950,30,1);
  Otto.moonwalker(1,950,30,-1);
  Otto.moonwalker(1,950,30,1); 
  delay(150);
  Otto.home();
  Otto.swing(3,1000,30);
  delay(150);
  Otto.home();
  Otto.swing(3,1000,30);
  delay(150);
  Otto.home();
  Otto.updown(8,870,30);
  Otto.tiptoeSwing(7,900,30);
  delay(150);
  Otto.home();
  Otto.ascendingTurn(8,870,30);
  delay(100);
  Otto.jitter(8,900,30);
  delay(500);
  Otto.moonwalker(1,950,30,1);
  Otto.moonwalker(1,950,30,-1);
  Otto.moonwalker(1,950,30,1); 
  delay(150);
  Otto.home();
  Otto.moonwalker(1,950,30,1);
  Otto.moonwalker(1,950,30,-1);
  Otto.moonwalker(1,950,30,1); 
  delay(150);
  Otto.home();
  Otto.swing(3,1000,30);
  delay(150);
  Otto.home();
  Otto.swing(3,1000,30);
  delay(150);
  Otto.home();
  Otto.updown(8,870,30);
  Otto.tiptoeSwing(7,900,30);
  delay(500);
  Otto.home();
  Otto.moonwalker(1,950,30,1);
  Otto.moonwalker(1,950,30,-1);
  Otto.moonwalker(1,950,30,1); 
  delay(150);
  Otto.home();
  Otto.moonwalker(1,1000,30,1);
  Otto.moonwalker(1,1000,30,-1);
  Otto.moonwalker(1,1000,30,1); 
  delay(150);
  Otto.home();
  Otto.swing(3,1000,30);
  delay(150);
  Otto.home();
  Otto.swing(3,1000,30);
  Otto.home();
  Otto.ascendingTurn(8,870,30);
  Otto.home();
  Otto.jitter(8,900,30);
  delay(150);
  Otto.home();
  Otto.updown(8,870,30);
  Otto.tiptoeSwing(7,900,30);
  delay(150);
  Otto.home();
  delay(10000);
}
