int led_flash=13;
void setup() 
{
  // put your setup code here, to run once:
pinMode(led_flash,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led_flash,HIGH);
delay(1000);
digitalWrite(led_flash,LOW);
delay(1000);
}
//program is ready
