#define vermelho 12
#define amarelo 11
#define verde 10


void setup() 
{
  
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);

  digitalWrite(vermelho, LOW);
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, LOW);

}

void loop() 
{

  digitalWrite(vermelho, HIGH);
  delay(4000);
  
  digitalWrite(vermelho, LOW);
  digitalWrite(verde, HIGH);
  delay(4000);
  
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, HIGH);
  delay(4000);
  
  digitalWrite(amarelo, LOW);

}
