
int TRIG = 13;
int ECHO = 10;
int BUZZ = 2;

int LED_VERMELHO = 11;
int LED_VERDE = 9;
int LED_AZUL = 8;

long duracao = 0;
long distancia = 0;

void setup()
{
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(BUZZ, OUTPUT);

  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AZUL, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  duracao = pulseIn(ECHO, HIGH, 30000);
  distancia = duracao / 58;

  Serial.println(distancia);

  if (distancia > 150 || distancia == 0)
  {
    // Distante: verde e sem bip
    digitalWrite(LED_VERMELHO, LOW);
    digitalWrite(LED_VERDE, HIGH);
    digitalWrite(LED_AZUL, LOW);

    noTone(BUZZ);
    delay(100);
  }
  else if (distancia > 100)
  {
    // Aproximando: verde e bip lento
    digitalWrite(LED_VERMELHO, LOW);
    digitalWrite(LED_VERDE, HIGH);
    digitalWrite(LED_AZUL, LOW);

    tone(BUZZ, 1000, 100);
    delay(700);
  }
  else if (distancia > 50)
  {
    // Perto: amarelo e bip intermediario
    digitalWrite(LED_VERMELHO, HIGH);
    digitalWrite(LED_VERDE, HIGH);
    digitalWrite(LED_AZUL, LOW);

    tone(BUZZ, 1200, 100);
    delay(350);
  }
  else
  {
    // Muito perto: vermelho e bip rapido
    digitalWrite(LED_VERMELHO, HIGH);
    digitalWrite(LED_VERDE, LOW);
    digitalWrite(LED_AZUL, LOW);

    tone(BUZZ, 1500, 80);
    delay(100);
  }
}
