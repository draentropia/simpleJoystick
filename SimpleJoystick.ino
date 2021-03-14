const int XAXIS = A1;
const int YAXIS = A0;
const int SW = 13;
const int LED = 2;

int swState = 0;

void setup() {
  // initialize led as output and digital switch as input
  pinMode(LED, OUTPUT);
  pinMode(SW, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  swState = digitalRead(SW);
  digitalWrite(LED, swState);
  delay(1);
}
