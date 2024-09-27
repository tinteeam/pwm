//variables
//these pins have pwm marking on the board
int ledRed = 11;//use any pwm pin
int ledBlue = 10;//use any pwm pin
int ledGreen = 9;//use any pwm pin

void setup() {
  //Not needed
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(ledRed,130);
  delay(1);
  analogWrite(ledGreen, 130);
  delay(1);
  
  analogWrite(ledBlue, 130);
  delay(1);
  
}
