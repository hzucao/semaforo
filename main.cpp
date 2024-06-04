const int led_1 = 15;
const int led_2 = 2;
const int led_3 = 0;

const int led_4 = 5;
const int led_5 = 18;
const int led_6 = 19;

void setup() {
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  pinMode(led_4, OUTPUT);
  pinMode(led_5, OUTPUT);
  pinMode(led_6, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  apagarLed(led_3);
  acenderLed(led_1);
  acenderLed(led_6);
  tempo(2);
  apagarLed(led_1);
  acenderLed(led_2);
  tempo(2);
  apagarLed(led_6);
  apagarLed(led_2);
  acenderLed(led_3);
  acenderLed(led_4);
  tempo(2);
  apagarLed(led_4);
  acenderLed(led_5);
  tempo(2);
  apagarLed(led_5);
  apagarLed(led_4);
}


void acenderLed(int led){
  digitalWrite(led, HIGH);
}

void apagarLed(int led){
  digitalWrite(led,LOW);
}

void tempo(int t){
  delay(t*1000);
}