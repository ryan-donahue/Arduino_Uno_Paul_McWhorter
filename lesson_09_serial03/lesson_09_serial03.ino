float myPi = 3.14;
float myRadius = 2;
float myArea;

int BAUD_RATE = 9600;
int DELAY_TIME = 1000;

String mess1 = "A circle of radius ";
String mess2 = " has an area of ";

void setup() {
  Serial.begin(BAUD_RATE);
}

void loop() {
  
  myArea = myPi * myRadius * myRadius;

  Serial.println(mess1 + myRadius + mess2 + myArea);
  delay(DELAY_TIME);  
  myRadius = myRadius + 0.1;
}
