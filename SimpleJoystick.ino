// Joystic const
const int XAXIS = A1;
const int YAXIS = A0;
const int SW = 13;

// debug const
const int LED = 2;

// vars
int swState = 0;
int xValue = 0;
int yValue = 0;


void setup() {
  // initialize led as output and digital switch as input
  Serial.begin(9600);
  //pinMode(LED, OUTPUT);
  pinMode(SW, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  swState = digitalRead(SW);
  xValue = analogRead(XAXIS);
  yValue = analogRead(YAXIS);
  Serial.print("X value: ");
  Serial.print(xValue);
  Serial.print("\t Y value: ");
  Serial.print(yValue);
  Serial.print("\t button: ");
  Serial.println(swState);
  delay(1000);
}
