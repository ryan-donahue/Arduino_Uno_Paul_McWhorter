int count = 1;
int BAUD_RATE = 9600;
int DELAY_TIME = 1000;

String strCounter = "Counter = ";

void setup() {
  Serial.begin(BAUD_RATE);
}

void loop() {
  Serial.println(strCounter + count);
  count = count + 1;
  delay(DELAY_TIME);  
}
