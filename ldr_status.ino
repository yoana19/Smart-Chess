#define ldrPin 8  // pin where we connect LDR and resistor

int ldrValue = 0; // result of reading the analog pin

void setup() {

Serial.begin(9600);

pinMode(ldrPin, INPUT);

}

void loop() {

ldrValue = digitalRead(ldrPin);// read the value from the LDR
if (ldrValue == 0) {
  Serial.println(ldrValuegit);
  delay(500);
} 

}
