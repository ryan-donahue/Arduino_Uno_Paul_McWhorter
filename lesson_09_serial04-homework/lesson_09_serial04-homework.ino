int BAUD_RATE = 9600;
int DELAY_TIME = 1000;

String messON = "The LED is ON.";
String messOFF = "The LED is OFF.";

void setup() {
  Serial.begin(BAUD_RATE);
  pinMode(13, OUTPUT); 
}

void loop() {
  digitalWrite(13, HIGH);
  Serial.println(messON);
  delay(DELAY_TIME);

  digitalWrite(13, LOW);
  Serial.println(messOFF);
  delay(DELAY_TIME);  
}
