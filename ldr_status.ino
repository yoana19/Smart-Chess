
const int ldrPin = A0;

void setup() {

Serial.begin(9600);

pinMode(ldrPin, INPUT);

}

void loop() {

int ldrStatus = analogRead(ldrPin);
if (ldrStatus > 600) {
  Serial.println(ldrStatus);
  delay(1000);
}






}
