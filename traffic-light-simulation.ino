// Definindo os pinos dos LEDs
const int vermelhoSem1 = 2;
const int amareloSem1 = 3;
const int verdeSem1 = 4;
const int vermelhoSem2 = 5;
const int amareloSem2 = 6;
const int verdeSem2 = 7;


void setup() {
  // Configurando os pinos dos LEDs como saída
  pinMode(vermelhoSem1, OUTPUT);
  pinMode(amareloSem1, OUTPUT);
  pinMode(verdeSem1, OUTPUT);
  pinMode(vermelhoSem2, OUTPUT);
  pinMode(amareloSem2, OUTPUT);
  pinMode(verdeSem2, OUTPUT);
}

void loop() {
  digitalWrite(vermelhoSem1, HIGH);
  digitalWrite(vermelhoSem2, HIGH);
  delay(3000);
  digitalWrite(vermelhoSem1, LOW);
  digitalWrite(verdeSem1, HIGH);  
  delay(3000); // Espera 1 segundo
  digitalWrite(verdeSem1, LOW);

  digitalWrite(amareloSem1, HIGH);  
  delay(3000);
  digitalWrite(amareloSem1, LOW);

  digitalWrite(vermelhoSem1, HIGH);
  delay(3000);
  digitalWrite(vermelhoSem2, LOW);

  digitalWrite(verdeSem2, HIGH);
  delay(3000);
  digitalWrite(verdeSem2, LOW);

  digitalWrite(amareloSem2, HIGH);  
  delay(3000);
  digitalWrite(amareloSem2, LOW);
}
