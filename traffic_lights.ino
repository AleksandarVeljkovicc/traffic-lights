int LEDRED = 13;
int LEDYELLOW = 12;
int LEDGREEN = 11;

void setup() {

    pinMode(LEDRED,OUTPUT);
    pinMode(LEDYELLOW,OUTPUT);
    pinMode(LEDGREEN,OUTPUT);
}

void loop() {
  
  digitalWrite(LEDRED, HIGH);
  delay(20000);

  digitalWrite(LEDRED, LOW);

  digitalWrite(LEDYELLOW, HIGH);
  delay(2000);

  digitalWrite(LEDYELLOW, LOW);

  digitalWrite(LEDGREEN, HIGH);
  delay(10000);

  for(int i = 0; i < 3; i++)
  {
     digitalWrite(LEDGREEN, LOW);
     delay(800);
     digitalWrite(LEDGREEN, HIGH);
     delay(800);
  }

  digitalWrite(LEDGREEN, LOW);

  digitalWrite(LEDYELLOW, HIGH);
  delay(2000);

  digitalWrite(LEDYELLOW, LOW);

}
