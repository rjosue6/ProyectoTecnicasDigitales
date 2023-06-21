const int sensorPin = 34;
const int sensorPin2 = 18;  // Pin A0 al que está conectado el sensor de luz
int threshold;  // Valor umbral ajustable

void setup() {
  Serial.begin(115200);
}

void loop() {
 
  int lightState2 = digitalRead(sensorPin2);
  if (lightState2 == HIGH) {
    Serial.println("Luz detectada!");
  } else {
    Serial.println("Luz no detectada!");
  }


  delay(1000);
}