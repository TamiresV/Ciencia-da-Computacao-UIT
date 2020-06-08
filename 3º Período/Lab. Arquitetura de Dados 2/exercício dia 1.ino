#define trigPin 12
#define echoPin 13

int buzzPin =  11;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(buzzPin,OUTPUT);
}

void loop() {
  long duration, distance;
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);

  distance = ((duration / 2) / 29.1);

  if(distance <= 30)
  {
    digitalWrite(buzzPin,HIGH);
  }
  else if(distance <= 50) 
  {
    digitalWrite(buzzPin,HIGH);
    delay(100);
    digitalWrite(buzzPin,LOW);
    delay(10);
  
  }
  else if(distance <= 75)
  {
    digitalWrite(buzzPin, HIGH);
    delay(100);
    digitalWrite(buzzPin, LOW);
    delay(1000);
  }
  else if(distance <= 100)
  {
    digitalWrite(buzzPin, HIGH);
    delay(100);
    digitalWrite(buzzPin, LOW);
    delay(1000);
  }
  else{
    digitalWrite(buzzPin, LOW);
  }
  

  Serial.print(distance);
  Serial.println(" Cm");

  delay(500);
}
