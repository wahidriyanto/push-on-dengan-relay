// program push on dengan relay
int relay = 9;
int pb = 10;
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 Serial.print("start");
 pinMode(relay, OUTPUT);
 pinMode(pb, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if ( digitalRead (pb) == 1){
 digitalWrite(relay, HIGH);
 Serial.println("On");
}
else {
digitalWrite(relay, LOW);
 Serial.println("off");
}
}
