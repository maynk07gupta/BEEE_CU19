const int trigPin = 8;
const int echoPin = 7;

float duration, distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration*.0343)/2;
  Serial.print("Distance: ");
  Serial.println(distance);
  delay(100);
  if(distance<150)
  {
    digitalWrite(3,HIGH);
    delay(100);
    digitalWrite(3,LOW);
    delay(100);
  }
  else if(distance>=150);
  {
   digitalWrite(2,HIGH);
    delay(100);
    digitalWrite(2,LOW);
    delay(100);
  }
}