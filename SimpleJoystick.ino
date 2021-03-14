// Joystic const
const int XAXIS = A1;
const int YAXIS = A0;
const int SW = 13;

// debug const
const int LED = 2;
const int L_RED = 11;
const int L_BLUE = 10;
const int L_GREEN = 9;

// vars
int swState = 0;
int redValue = 0;
int blueValue = 0;
int greenValue = 0;

void setup() {
  // initialize led as output and digital switch as input
  pinMode(LED, OUTPUT);
  pinMode(SW, INPUT);
  pinMode(L_RED, OUTPUT);
  pinMode(L_BLUE, OUTPUT);
  pinMode(L_GREEN, OUTPUT);
  analogWrite(L_RED, 0);
  analogWrite(L_BLUE, 0);
  analogWrite(L_GREEN, 0);
  digitalWrite(LED, LOW);
}

// the loop function runs over and over again forever
void loop() {
  swState = digitalRead(SW);
  digitalWrite(LED, swState);
  redValue = analogRead(XAXIS);
  blueValue = analogRead(YAXIS);
  analogWrite(L_RED, redValue);
  analogWrite(L_BLUE, blueValue);
  delay(5);
}
