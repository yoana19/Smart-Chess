#define ldrPinA1 1  // pin where we connect LDR and resistor
#define ldrPinA2 2
#define ldrPinA3 3
#define ldrPinA4 4
#define ldrPinA5 5
#define ldrPinA6 6
#define ldrPinA7 7
#define ldrPinA8 8
#define ldrPinB1 9
#define ldrPinB2 10
#define ldrPinB3 11
#define ldrPinB4 12
#define ldrPinB5 13
#define ldrPinB6 14
#define ldrPinB7 15
#define ldrPinB8 16
#define ldrPinC1 17
#define ldrPinC2 18
#define ldrPinC3 19
#define ldrPinC4 20
#define ldrPinC5 21
#define ldrPinC6 22
#define ldrPinC7 23
#define ldrPinC8 24
#define ldrPinD1 25
#define ldrPinD2 26
#define ldrPinD3 27
#define ldrPinD4 28
#define ldrPinD5 29
#define ldrPinD6 30
#define ldrPinD7 31
#define ldrPinD8 32
#define ldrPinE1 33
#define ldrPinE2 34
#define ldrPinE3 35
#define ldrPinE4 36
#define ldrPinE5 37
#define ldrPinE6 38
#define ldrPinE7 39
#define ldrPinE8 40
#define ldrPinF1 41
#define ldrPinF2 42
#define ldrPinF3 43
#define ldrPinF4 44
#define ldrPinF5 45
#define ldrPinF6 46
#define ldrPinF7 47
#define ldrPinF8 48
#define ldrPinG1 49
#define ldrPinG2 50
#define ldrPinG3 51
#define ldrPinG4 52
#define ldrPinG5 53
#define ldrPinG6 54
#define ldrPinG7 55
#define ldrPinG8 56
#define ldrPinH1 57
#define ldrPinH2 58
#define ldrPinH3 59
#define ldrPinH4 60
#define ldrPinH5 61
#define ldrPinH6 62
#define ldrPinH7 63
#define ldrPinH8 64

int ldrValueA1 = 0; // result of reading the analog pin
int ldrValueA2 = 0;
int ldrValueA3 = 0;
int ldrValueA4 = 0;
int ldrValueA5 = 0;
int ldrValueA6 = 0;
int ldrValueA7 = 0;
int ldrValueA8 = 0;
int ldrValueB1 = 0;
int ldrValueB2 = 0;
int ldrValueB3 = 0;
int ldrValueB4 = 0;
int ldrValueB5 = 0;
int ldrValueB6 = 0;
int ldrValueB7 = 0;
int ldrValueB8 = 0;
int ldrValueC1 = 0;
int ldrValueC2 = 0;
int ldrValueC3 = 0;
int ldrValueC4 = 0;
int ldrValueC5 = 0;
int ldrValueC6 = 0;
int ldrValueC7 = 0;
int ldrValueC8 = 0;
int ldrValueD1 = 0;
int ldrValueD2 = 0;
int ldrValueD3 = 0;
int ldrValueD4 = 0;
int ldrValueD5 = 0;
int ldrValueD6 = 0;
int ldrValueD7 = 0;
int ldrValueD8 = 0;
int ldrValueE1 = 0;
int ldrValueE2 = 0;
int ldrValueE3 = 0;
int ldrValueE4 = 0;
int ldrValueE5 = 0;
int ldrValueE6 = 0;
int ldrValueE7 = 0;
int ldrValueE8 = 0;
int ldrValueF1 = 0;
int ldrValueF2 = 0;
int ldrValueF3 = 0;
int ldrValueF4 = 0;
int ldrValueF5 = 0;
int ldrValueF6 = 0;
int ldrValueF7 = 0;
int ldrValueF8 = 0;
int ldrValueG1 = 0;
int ldrValueG2 = 0;
int ldrValueG3 = 0;
int ldrValueG4 = 0;
int ldrValueG5 = 0;
int ldrValueG6 = 0;
int ldrValueG7 = 0;
int ldrValueG8 = 0;
int ldrValueH1 = 0;
int ldrValueH2 = 0;
int ldrValueH3 = 0;
int ldrValueH4 = 0;
int ldrValueH5 = 0;
int ldrValueH6 = 0;
int ldrValueH7 = 0;
int ldrValueH8 = 0;

void setup() {

Serial.begin(9600);

pinMode(ldrPinA1, INPUT);
pinMode(ldrPinA2, INPUT);
pinMode(ldrPinA3, INPUT);
pinMode(ldrPinA4, INPUT);
pinMode(ldrPinA5, INPUT);
pinMode(ldrPinA6, INPUT);
pinMode(ldrPinA7, INPUT);
pinMode(ldrPinA8, INPUT);
pinMode(ldrPinB1, INPUT);
pinMode(ldrPinB2, INPUT);
pinMode(ldrPinB3, INPUT);
pinMode(ldrPinB4, INPUT);
pinMode(ldrPinB5, INPUT);
pinMode(ldrPinB6, INPUT);
pinMode(ldrPinB7, INPUT);
pinMode(ldrPinB8, INPUT);
pinMode(ldrPinC1, INPUT);
pinMode(ldrPinC2, INPUT);
pinMode(ldrPinC3, INPUT);
pinMode(ldrPinC4, INPUT);
pinMode(ldrPinC5, INPUT);
pinMode(ldrPinC6, INPUT);
pinMode(ldrPinC7, INPUT);
pinMode(ldrPinC8, INPUT);
pinMode(ldrPinD1, INPUT);
pinMode(ldrPinD2, INPUT);
pinMode(ldrPinD3, INPUT);
pinMode(ldrPinD4, INPUT);
pinMode(ldrPinD5, INPUT);
pinMode(ldrPinD6, INPUT);
pinMode(ldrPinD7, INPUT);
pinMode(ldrPinD8, INPUT);
pinMode(ldrPinE1, INPUT);
pinMode(ldrPinE2, INPUT);
pinMode(ldrPinE3, INPUT);
pinMode(ldrPinE4, INPUT);
pinMode(ldrPinE5, INPUT);
pinMode(ldrPinE6, INPUT);
pinMode(ldrPinE7, INPUT);
pinMode(ldrPinE8, INPUT);
pinMode(ldrPinF1, INPUT);
pinMode(ldrPinF2, INPUT);
pinMode(ldrPinF3, INPUT);
pinMode(ldrPinF4, INPUT);
pinMode(ldrPinF5, INPUT);
pinMode(ldrPinF6, INPUT);
pinMode(ldrPinF7, INPUT);
pinMode(ldrPinF8, INPUT);
pinMode(ldrPinG1, INPUT);
pinMode(ldrPinG2, INPUT);
pinMode(ldrPinG3, INPUT);
pinMode(ldrPinG4, INPUT);
pinMode(ldrPinG5, INPUT);
pinMode(ldrPinG6, INPUT);
pinMode(ldrPinG7, INPUT);
pinMode(ldrPinG8, INPUT);
pinMode(ldrPinH1, INPUT);
pinMode(ldrPinH2, INPUT);
pinMode(ldrPinH3, INPUT);
pinMode(ldrPinH4, INPUT);
pinMode(ldrPinH5, INPUT);
pinMode(ldrPinH6, INPUT);
pinMode(ldrPinH7, INPUT);
pinMode(ldrPinH8, INPUT);
}

void loop() {

ldrValueA1 = digitalRead(ldrPinA1);// read the value from the LDR
ldrValueA2 = digitalRead(ldrPinA2);
ldrValueA3 = digitalRead(ldrPinA3);
ldrValueA4 = digitalRead(ldrPinA4);
ldrValueA5 = digitalRead(ldrPinA5);
ldrValueA6 = digitalRead(ldrPinA6);
ldrValueA7 = digitalRead(ldrPinA7);
ldrValueA8 = digitalRead(ldrPinA8);
ldrValueB1 = digitalRead(ldrPinB1);
ldrValueB2 = digitalRead(ldrPinB2);
ldrValueB3 = digitalRead(ldrPinB3);
ldrValueB4 = digitalRead(ldrPinB4);
ldrValueB5 = digitalRead(ldrPinB5);
ldrValueB6 = digitalRead(ldrPinB6);
ldrValueB7 = digitalRead(ldrPinB7);
ldrValueB8 = digitalRead(ldrPinB8);
ldrValueC1 = digitalRead(ldrPinC1);
ldrValueC2 = digitalRead(ldrPinC2);
ldrValueC3 = digitalRead(ldrPinC3):
ldrValueC4 = digitalRead(ldrPinC4);
ldrValueC5 = digitalRead(ldrPinC5);
ldrValueC6 = digitalRead(ldrPinC6);
ldrValueC7 = digitalRead(ldrPinC7);
ldrValueC8 = digitalRead(ldrPinC8);
ldrValueD1 = digitalRead(ldrPinD1);
ldrValueD2 = digitalRead(ldrPinD2);
ldrValueD3 = digitalRead(ldrPinD3);
ldrValueD4 = digitalRead(ldrPinD4);
ldrValueD5 = digitalRead(ldrPinD5);
ldrValueD6 = digitalRead(ldrPinD6);
ldrValueD7 = digitalRead(ldrPinD7);
ldrValueD8 = digitalRead(ldrPinD8);
ldrValueE1 = digitalRead(ldrPinE1);
ldrValueE2 = digitalRead(ldrPinE2);
ldrValueE3 = digitalRead(ldrPinE3);
ldrValueE4 = digitalRead(ldrPinE4);
ldrValueE5 = digitalRead(ldrPinE5);
ldrValueE6 = digitalRead(ldrPinE6);
ldrValueE7 = digitalRead(ldrPinE7);
ldrValueE8 = digitalRead(ldrPinE8);
ldrValueF1 = digitalRead(ldrPinF1);
ldrValueF2 = digitalRead(ldrPinF2);
ldrValueF3 = digitalRead(ldrPinF3);
ldrValueF4 = digitalRead(ldrPinF4);
ldrValueF5 = digitalRead(ldrPinF5);
ldrValueF6 = digitalRead(ldrPinF6);
ldrValueF7 = digitalRead(ldrPinF7);
ldrValueF8 = digitalRead(ldrPinF8);
ldrValueG1 = digitalRead(ldrPinG1);
ldrValueG2 = digitalRead(ldrPinG2);
ldrValueG3 = digitalRead(ldrPinG3);
ldrValueG4 = digitalRead(ldrPinG4);
ldrValueG5 = digitalRead(ldrPinG5);
ldrValueG6 = digitalRead(ldrPinG6);
ldrValueG7 = digitalRead(ldrPinG7);
ldrValueG8 = digitalRead(ldrPinG8);
ldrValueH1 = digitalRead(ldrPinH1);
ldrValueH2 = digitalRead(ldrPinH2);
ldrValueH3 = digitalRead(ldrPinH3);
ldrValueH4 = digitalRead(ldrPinH4);
ldrValueH5 = digitalRead(ldrPinH5);
ldrValueH6 = digitalRead(ldrPinH6);
ldrValueH7 = digitalRead(ldrPinH7);
ldrValueH8 = digitalRead(ldrPinH8);

if (ldrValueA1 == 0) {
  Serial.println('ldrValueA1:');
  Serial.println(ldrValueA1);
  delay(500);
} else if (ldrValueA2 == 0) {
  Serial.println('ldrValueA2:');
  Serial.println(ldrValueA2);
  delay(500);
} else if (ldrValueA3 == 0) {
  Serial.println('ldrValueA3:':);
  Serial.println(ldrValuegA3);
  delay(500);
} else if (ldrValueA4 == 0) {
  Serial.println('ldrValueA4:');
  Serial.println(ldrValueA4);
  delay(500);
} else if (ldrValueA5 == 0) {
  Serial.println('ldrValueA5:');
  Serial.println(ldrValueA5);
  delay(500);
} else if (ldrValueA6 == 0) {
  Serial.println('ldrValueA6:')
  Serial.println(ldrValueA6);
  delay(500);
} else if (ldrValueA7 == 0) {
  Serial.println('ldrValueA7:')
  Serial.println(ldrValueA7);
  delay(500);
} else if (ldrValueA8 == 0) {
  Serial.println('ldrValueA8:')
  Serial.println(ldrValueA8);
  delay(500);
} else if (ldrValueB1 == 0) {
    Serial.println('ldrValueB1:')
  Serial.println(ldrValueB1);
  delay(500);
} else if (ldrValueB2 == 0) {
  Serial.println('ldrValueB2:')
  Serial.println(ldrValueB2);
  delay(500);
} else if (ldrValueB3 == 0) {
  Serial.println('ldrValueB3:')
  Serial.println(ldrValueB3);
  delay(500);
} else if (ldrValueB4 == 0) {
  Serial.println('ldrValueB4:')
  Serial.println(ldrValueB4);
  delay(500);
} else if (ldrValueB5 == 0) {
  Serial.println('ldrValueB5:')
  Serial.println(ldrValueB5);
  delay(500);
} else if (ldrValueB6 == 0) {
  Serial.println('ldrValueB6:')
  Serial.println(ldrValueB6);
  delay(500);
} else if (ldrValueB7 == 0) {
  Serial.println('ldrValueB7:')
  Serial.println(ldrValueB7);
  delay(500);
} else if (ldrValueB8 == 0) {
  Serial.println('ldrValueB8:')
  Serial.println(ldrValueB8);
  delay(500);
} else if (ldrValueC1 == 0) {
  Serial.println('ldrValueC1:')
  Serial.println(ldrValueC1);
  delay(500);
} else if (ldrValueC2 == 0) {
  Serial.println('ldrValueC2:')
  Serial.println(ldrValueC2);
  delay(500);
} else if (ldrValueC3 == 0) {
  Serial.println('ldrValueC3:')
  Serial.println(ldrValueC3);
  delay(500);
} else if (ldrValueC4 == 0) {
  Serial.println('ldrValueC4:')
  Serial.println(ldrValueC4);
  delay(500);
} else if (ldrValueC5 == 0) {
  Serial.println('ldrValueC5:')
  Serial.println(ldrValueC5);
  delay(500);
} else if (ldrValueC6 == 0) {
  Serial.println('ldrValueC6:')
  Serial.println(ldrValueC6);
  delay(500);
} else if (ldrValueC7 == 0) {
  Serial.println('ldrValueC7:')
  Serial.println(ldrValueC7);
  delay(500);
} else if (ldrValueC8 == 0) {
  Serial.println('ldrValueC8:')
  Serial.println(ldrValueC8);
  delay(500);
} else if (ldrValueD1 == 0) {
  Serial.println('ldrValueD1:')
  Serial.println(ldrValueD1);
  delay(500);
} else if (ldrValueD2 == 0) {
  Serial.println('ldrValueD2:')
  Serial.println(ldrValueD2);
  delay(500);
} else if (ldrValueD3 == 0) {
  Serial.println('ldrValueD3:')
  Serial.println(ldrValueD3);
  delay(500);
} else if (ldrValueD4 == 0) {
  Serial.println('ldrValueD4:')
  Serial.println(ldrValueD4);
  delay(500);
} else if (ldrValueD5 == 0) {
  Serial.println('ldrValueD5:')
  Serial.println(ldrValueD5);
  delay(500);
} else if (ldrValueD6 == 0) {
  Serial.println('ldrValueD6:')
  Serial.println(ldrValueD6);
  delay(500);
} else if (ldrValueD7 == 0) {
  Serial.println('ldrValueD7:')
  Serial.println(ldrValueD7);
  delay(500);
} else if (ldrValueD8 == 0) {
  Serial.println('ldrValueD8:')
  Serial.println(ldrValueD8);
  delay(500);
} else if (ldrValueE1 == 0) {
  Serial.println('ldrValueE1:')
  Serial.println(ldrValueE1);
  delay(500);
} else if (ldrValueE2 == 0) {
  Serial.println('ldrValueE2:')
  Serial.println(ldrValueE2);
  delay(500);
} else if (ldrValueE3 == 0) {
  Serial.println('ldrValueE3:')
  Serial.println(ldrValueE3);
  delay(500);
} else if (ldrValueE4 == 0) {
  Serial.println('ldrValueE4:')
  Serial.println(ldrValueE4);
  delay(500);
} else if (ldrValueE5 == 0) {
  Serial.println('ldrValueE5:')
  Serial.println(ldrValueE5);
  delay(500);
} else if (ldrValueE6 == 0) {
  Serial.println('ldrValueE6:')
  Serial.println(ldrValueE6);
  delay(500);
} else if (ldrValueE7 == 0) {
  Serial.println('ldrValueE7:')
  Serial.println(ldrValueE7);
  delay(500);
} else if (ldrValueE8 == 0) {
  Serial.println('ldrValueE8:')
  Serial.println(ldrValueE8);
  delay(500);
} else if (ldrValueF1 == 0) {
  Serial.println('ldrValueF1:')
  Serial.println(ldrValueF1);
  delay(500);
} else if (ldrValueF2 == 0) {
  Serial.println('ldrValueF2:')
  Serial.println(ldrValueF2);
  delay(500);
} else if (ldrValueF3 == 0) {
  Serial.println('ldrValueF3:')
  Serial.println(ldrValueF3);
  delay(500);
} else if (ldrValueF4 == 0) {
  Serial.println('ldrValueF4:')
  Serial.println(ldrValueF4);
  delay(500);
} else if (ldrValueF5 == 0) {
  Serial.println('ldrValueF5:')
  Serial.println(ldrValueF5);
  delay(500);
} else if (ldrValueF6 == 0) {
  Serial.println('ldrValueF6:')
  Serial.println(ldrValueF6);
  delay(500);
} else if (ldrValueF7 == 0) {
  Serial.println('ldrValueF7:')
  Serial.println(ldrValueF7);
  delay(500);
} else if (ldrValueF8 == 0) {
  Serial.println('ldrValueF8:')
  Serial.println(ldrValueF8);
  delay(500);
} else if (ldrValueG1 == 0) {
  Serial.println('ldrValueG1:')
  Serial.println(ldrValueG1);
  delay(500);
} else if (ldrValueG2 == 0) {
  Serial.println('ldrValueG2:')
  Serial.println(ldrValueG2);
  delay(500);
} else if (ldrValueG3 == 0) {
  Serial.println('ldrValueG3:')
  Serial.println(ldrValueG3);
  delay(500);
} else if (ldrValueG4 == 0) {
  Serial.println('ldrValueG4:')
  Serial.println(ldrValueG4);
  delay(500);
} else if (ldrValueG5 == 0) {
  Serial.println('ldrValueG5:')
  Serial.println(ldrValueG5);
  delay(500);
} else if (ldrValueG6 == 0) {
  Serial.println('ldrValueG6:')
  Serial.println(ldrValueG6);
  delay(500);
} else if (ldrValueG7 == 0) {
  Serial.println('ldrValueG7:')
  Serial.println(ldrValueG7);
  delay(500);
} else if (ldrValueG8 == 0) {
  Serial.println('ldrValueG8:')
  Serial.println(ldrValueG8);
  delay(500);
} else if (ldrValueH1 == 0) {
  Serial.println('ldrValueH1:')
  Serial.println(ldrValueH1);
  delay(500);
} else if (ldrValueH2 == 0) {
  Serial.println('ldrValueH2:')
  Serial.println(ldrValueH2);
  delay(500);
} else if (ldrValueH3 == 0) {
  Serial.println('ldrValueH3:')
  Serial.println(ldrValueH3);
  delay(500);
}  else if (ldrValueH4 == 0) {
  Serial.println('ldrValueH4:')
  Serial.println(ldrValueH4);
  delay(500);
} else if (ldrValueH5 == 0) {
  Serial.println('ldrValueH5:')
  Serial.println(ldrValueH5);
  delay(500);
} else if (ldrValueH6 == 0) {
  Serial.println('ldrValueH6:')
  Serial.println(ldrValueH6);
  delay(500);
} else if (ldrValueH7 == 0) {
  Serial.println('ldrValueH7:')
  Serial.println(ldrValueH7);
  delay(500);
} else if (ldrValueH8 == 0) {
  Serial.println('ldrValueH8:')
  Serial.println(ldrValueH8);
  delay(500);
}

}
