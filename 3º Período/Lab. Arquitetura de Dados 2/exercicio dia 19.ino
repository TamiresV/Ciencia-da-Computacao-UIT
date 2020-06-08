int pinovelocidade=3;
int entrada1=2;
int entrada2=7;
int potencia=1;
void setup() {
  pinMode(pinovelocidade, OUTPUT);
  pinMode(entrada1, OUTPUT);
  pinMode(entrada2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int velocidade=analogRead(potencia);
  Serial.println(velocidade);
  analogWrite(pinovelocidade,velocidade);
  digitalWrite(entrada1,LOW);
  digitalWrite(entrada2,HIGH);
  delay(1500);
  para_motor();
  digitalWrite(entrada1,HIGH);
  digitalWrite(entrada2,LOW);
  delay(3000);
  para_motor();
}

void para_motor(){
  digitalWrite(entrada1,LOW);
  digitalWrite(entrada2,LOW);
  delay(3000);
}
