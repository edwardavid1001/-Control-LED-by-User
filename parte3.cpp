const int Leds = 5;
int ledPin = 9;

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < Leds; i++) {
    pinMode(ledPin + i, OUTPUT);
  }
}

void loop() {
  if (Serial.available() > 0) {
    int LedsToTurnOn = Serial.parseInt();
    for (int i = 0; i < LedsToTurnOn && i < Leds; i++) {
      digitalWrite(ledPin + i, HIGH);
    }
    delay(500);
    for (int i = 0; i < LedsToTurnOn && i < Leds; i++) {
      digitalWrite(ledPin + i, LOW);
    }
  }
}

verde lanza (10)
azul recibe (9)

parte 4

int TRIG =10;
int ECO =9;
int LED =3;

int DURACION;
int DISTANCIA;

void setup(){
  pinMode(TRIG, OUTPUT);
  pinMode(ECO, INPUT);
  pinMode (LED, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(TRIG, HIGH);
  delay(1);
  digitalWrite(TRIG, LOW);
  DISTANCIA = DURACION / 58.2;
  Serial.println(DISTANCIA);
  delay(200);
}