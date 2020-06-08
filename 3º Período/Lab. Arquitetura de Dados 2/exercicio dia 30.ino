  #define trigPin 13
  #define echoPin 12

int ledPin=11;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  
  pinMode (ledPin,OUTPUT);
}

void loop() 
{
  long duration , distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = ((duration/2) /29.1);
  if(distance <= 50){
    digitalWrite(ledPin,HIGH);
  }
  else{
    digitalWrite(ledPin,LOW);
  }
  Serial.print(distance);
  Serial.println(" Cm");

  delay(500);
}
