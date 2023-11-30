#include<SoftwareSerial.h>
int sensorPin = A0;
int sensorValue = 0;
int led = 2;
int buzzer = 4;

void setup(){

  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop(){
  Serial.println("pembaca sensor api");
  sensorValue = analogRead(sensorPin);
  if(sensorValue < 100){
    Serial.println("ada api");
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(1000);
  }
  digitalWrite(led, LOW);
  digitalWrite(buzzer, LOW);
  delay(sensorValue);
  
}

