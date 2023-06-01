int sensor = A0;
int val;

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
pinMode(sensor, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
val = analogRead(sensor);
Serial.println(val);
}
