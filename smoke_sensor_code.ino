int smokeA0 = A0;
int buzzer = 13;

float sensorValue;

void setup() {
  pinMode (buzzer,OUTPUT);
  pinMode (smokeA0,INPUT);
Serial.begin(9600);
}

void loop() {

 sensorValue = analogRead(smokeA0);
 
 Serial.println( sensorValue);

 if(sensorValue > 25)
 {
  digitalWrite(13,HIGH);
 }
 else {
  digitalWrite(13,LOW);
 }
}
