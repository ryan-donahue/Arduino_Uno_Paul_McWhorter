int x;
int y;
int z;
int BAUD_RATE = 9600;
int DELAY_TIME = 1000;

String strXY = "x + y = ";

void setup() {
  Serial.begin(BAUD_RATE);
}

void loop() {
  x = 3;
  y = 7;
  z = x + y;

  Serial.println(strXY + z);
  
  delay(DELAY_TIME);  
}
