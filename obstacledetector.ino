#include <LCD_I2C.h>

int pir=2;
int trigpin=9;
int echopin=10;
int val=LOW;
float distance=0;
int tim=0;

LCD_I2C lcd(0x27,16,2);

void setup() {
  pinMode(pir,INPUT);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  lcd.begin();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Sensors active");
  // put your setup code here, to run once:
}

void loop() {
  val=digitalRead(pir);
  if (val==HIGH){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Obstacle ahead");
  digitalWrite(trigpin,LOW);
  delayMicroseconds(4);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(15);
  digitalWrite(trigpin,LOW);
  digitalWrite(echopin,HIGH);
  tim=pulseIn(echopin,HIGH);
  distance=tim*(0.034)/2;
  lcd.setCursor(0,1);
  lcd.print("at");
  lcd.setCursor(4,1);
  lcd.print(round(distance));
  lcd.setCursor(7,1);
  lcd.print("cm");
  }
  else{
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("No obstacle ");
    lcd.setCursor(0,1);
    lcd.print("ahead ");
  }
  // put your main code here, to run repeatedly:
  delay(5000);

}
