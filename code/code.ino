/*
  done by amirpouyan
  date: 1/20/2022
*/
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
int tcrt_value = 0; // this value will get the tcrt500 data sensor analog value
void loop() {
  // put your main code here, to run repeatedly:
  tcrt_value = analogRead(A0); // reading the analog value of tcrt5000 sensor from OUT
  Serial.println(tcrt_value); // showing the value on serial monitor
}
