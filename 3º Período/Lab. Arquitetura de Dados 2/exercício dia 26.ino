#define trigPin 13
#define echoPin 12

int pinovelocidade=3;
int entrada1=2;
int entrada2=7;
int potencia=1;

void setup() {
  pinMode(pinovelocidade, OUTPUT);
  pinMode(entrada1, OUTPUT);
  pinMode(entrada2,OUTPUT);
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
}

void loop() {
  
  long duration, distance;
  
 // Serial.println(velocidade);
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);

  distance = ((duration / 2) / 29.1);

  if(distance < 100) 
  {
    digitalWrite(entrada1,LOW);
    digitalWrite(entrada2,HIGH);
    //delay(1500);
  }
  int velocidade=distance;
  analogWrite(pinovelocidade,velocidade*10);
  Serial.print(" Distancia Cm ");
  Serial.println(distance);
}
