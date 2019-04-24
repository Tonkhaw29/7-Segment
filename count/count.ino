/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/
#define SEG_A  2
#define SEG_B  3
#define SEG_C  4
#define SEG_D  5
#define SEG_E  6
#define SEG_F  7
#define SEG_G  8

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(SEG_A, OUTPUT);
  pinMode(SEG_B, OUTPUT);
  pinMode(SEG_C, OUTPUT);
  pinMode(SEG_D, OUTPUT);
  pinMode(SEG_E, OUTPUT);
  pinMode(SEG_F, OUTPUT);
  pinMode(SEG_G, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  // no. 0
  digitalWrite(SEG_A, HIGH);                        
  digitalWrite(SEG_B, HIGH);  
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);                        
  digitalWrite(SEG_E, HIGH);  
  digitalWrite(SEG_F, HIGH);
  delay(1000); 
  digitalWrite(SEG_A, LOW);                        
  digitalWrite(SEG_B, LOW);  
  digitalWrite(SEG_C, LOW);
  digitalWrite(SEG_D, LOW);                        
  digitalWrite(SEG_E, LOW);  
  digitalWrite(SEG_F, LOW);
  
  // no. 1                
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  delay(1000);
  digitalWrite(SEG_B, LOW);
  digitalWrite(SEG_C, LOW);
  
  // no.2
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, HIGH);
  digitalWrite(SEG_G, HIGH); 
  delay(1000);
  digitalWrite(SEG_A, LOW);
  digitalWrite(SEG_B, LOW);
  digitalWrite(SEG_D, LOW);
  digitalWrite(SEG_E, LOW);
  digitalWrite(SEG_G, LOW);
  
  // no.3
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_G, HIGH); 
  delay(1000);
  digitalWrite(SEG_A, LOW);
  digitalWrite(SEG_B, LOW);
  digitalWrite(SEG_C, LOW);
  digitalWrite(SEG_D, LOW);
  digitalWrite(SEG_G, LOW);
 
  // no.4
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_F, HIGH);
  digitalWrite(SEG_G, HIGH); 
  delay(1000);
  digitalWrite(SEG_B, LOW);
  digitalWrite(SEG_C, LOW);
  digitalWrite(SEG_F, LOW);
  digitalWrite(SEG_G, LOW);

  // no. 5 
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_F, HIGH);
  digitalWrite(SEG_G, HIGH); 
  delay(1000);
  digitalWrite(SEG_A, LOW);
  digitalWrite(SEG_C, LOW);
  digitalWrite(SEG_D, LOW);
  digitalWrite(SEG_F, LOW);
  digitalWrite(SEG_G, LOW);

  // no.6
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, HIGH);
  digitalWrite(SEG_F, HIGH);
  digitalWrite(SEG_G, HIGH); 
  delay(1000);
  digitalWrite(SEG_A, LOW);
  digitalWrite(SEG_C, LOW);
  digitalWrite(SEG_D, LOW);
  digitalWrite(SEG_E, LOW);
  digitalWrite(SEG_F, LOW);
  digitalWrite(SEG_G, LOW);

  // no.7
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH); 
  delay(1000);
  digitalWrite(SEG_A, LOW);
  digitalWrite(SEG_B, LOW);
  digitalWrite(SEG_C, LOW);

  // no.8
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, HIGH);
  digitalWrite(SEG_F, HIGH);
  digitalWrite(SEG_G, HIGH); 
  delay(1000);
  digitalWrite(SEG_A, LOW);
  digitalWrite(SEG_B, LOW);
  digitalWrite(SEG_C, LOW);
  digitalWrite(SEG_D, LOW);
  digitalWrite(SEG_E, LOW);
  digitalWrite(SEG_F, LOW);
  digitalWrite(SEG_G, LOW);

  // no.9
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_F, HIGH);
  digitalWrite(SEG_G, HIGH); 
  delay(1000);
  digitalWrite(SEG_A, LOW);
  digitalWrite(SEG_B, LOW);
  digitalWrite(SEG_C, LOW);
  digitalWrite(SEG_D, LOW);
  digitalWrite(SEG_F, LOW);
  digitalWrite(SEG_G, LOW);

  
}
