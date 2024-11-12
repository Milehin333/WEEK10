
int led = 40;
int led2 = 39;

int button = 33
int button2 = 34;

void setup() {
  // put your setup code here, to run once:

  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  lightButtons();

}

void lightButtons(){
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
}
