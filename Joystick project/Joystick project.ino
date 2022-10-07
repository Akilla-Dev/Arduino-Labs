int posX = 0;
int posY = 0;
int bt;
int dt = 1000;
int buttonPin = 10;
int Xpin = A1;
int Ypin = A2;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Xpin,INPUT);
  pinMode(Ypin,INPUT);
  pinMode(buttonPin,INPUT);
  pinMode(11,OUTPUT);
  digitalWrite(buttonPin,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  posX = analogRead(Xpin);
  posY = analogRead(Ypin);
  bt = digitalRead(buttonPin);

  Serial.print(posX);
  Serial.print(',');
  Serial.println(posY);
  Serial.print(',');
  Serial.println(bt);

  digitalWrite(11,!bt);

  delay(dt);
}
