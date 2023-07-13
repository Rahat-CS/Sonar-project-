const int trigPin = 2;
const int echoPin = 3;
int distance ;
long duration;
void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin,OUTPUT);//sets the trigPin as an Output
  pinMode(echoPin,INPUT);//sets the echoPin as an Input
  Serial.begin(9600);//Starts the serial communication

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration=pulseIn(echoPin,HIGH);
  distance=duration*0.034/2;
  Serial.print("Distance:");
  Serial.println(distance);
  delay(500);

}
