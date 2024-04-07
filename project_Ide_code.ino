unsigned long t;
//#define sensorvalue A0

void setup() {
Serial.begin(9600);
//map(sensorvalue, 0, 1023, -512, 512);
}

void loop() {
//t = micros();
Serial.println(analogRead(A0));
//Serial.println(sensorvalue);
//Serial.print(",");
//Serial.println(micros());

}