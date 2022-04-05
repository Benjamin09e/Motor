void setup() {
pinMode(A5,INPUT);
Serial.begin(9600);
}

void loop() {
double var=0.0;
var=map(analogRead(A5),0,1023,0.0,5.0);
Serial.println(var);
delay(500);
}
