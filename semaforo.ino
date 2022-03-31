#define vermelho 12
#define amarelo 11
#define verde 10


void setup() 
{
  // Setar os pinos dos leds para serem OUTPUT (saída)
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);

  // Setar todos os leds como desligados no começo (não é obrigatório mas apenas para 
  // garantir que começará tudo desligado)
  digitalWrite(vermelho, LOW);
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, LOW);

}

void loop() 
{
  
  // sinal vermelho 
  digitalWrite(vermelho, HIGH);
  delay(4000); // tempo que cada sinal ficará ligado (em ms)
  
  // sinal verde
  digitalWrite(vermelho, LOW);
  digitalWrite(verde, HIGH);
  delay(4000);
  
  // sinal amarelo
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, HIGH);
  delay(4000);
  
  digitalWrite(amarelo, LOW);

}
