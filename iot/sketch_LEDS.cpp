const int ledPin = 7;
const int ledPin2 = 8;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledPin, OUTPUT);
pinMode(ledPin2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.avalible() > 0){
  char command = Serial.read();

  switch (command){
    case 'A' :
    digitalWrite(ledPin, HIGH);
    break;
    case 'B' :
    digitalWrite(ledPin, LOW);
    break;
    case 'b' :
    digitalWrite(ledPin2, LOW);
    break;
  }
}
}
