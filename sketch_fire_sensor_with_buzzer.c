int pinBuzz = 9;
int pinFireSensor = A0;
int sensorValue = 0; //This is important
int shotValue = 500; //This is my trigger in the if statement
int dt = 400;

void setup() {
  Serial.begin(9600);
  pinMode(pinFireSensor, INPUT);
  pinMode(pinBuzz, OUTPUT);
}

void loop() {
  sensorValue = analogRead(pinFireSensor);

  Serial.print("Valor del sensor: ");
  Serial.println(sensorValue);
  Serial.println("---------------------");

  if(sensorValue<shotValue) {
    Serial.println("FUEGO FUEGO FUEGO!!!");
    Serial.println("---------------------");
    digitalWrite(pinBuzz, HIGH);
    delay(300);
    digitalWrite(pinBuzz, LOW);
  }
  delay(dt);
}
