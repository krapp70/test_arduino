//test interrupt  

int ledPin = 13;
int buttonPin = 2;

int ledONOFF = 1;

void setup() {
  pinMode(ledPin, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(buttonPin), buttonPress, CHANGE);
  Serial.begin(9600);
}

void loop() {

}

void buttonPress(){
  if(ledONOFF==1){
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
 ledONOFF=-ledONOFF;
}

