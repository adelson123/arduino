int led_verm = 12;
int led_verd = 5;
int led_azul = 7;
int led_amar = 10;

int botao_verm = 13;
int botao_amar = 11;
int botao_azul = 4;
int botao_verd = 6;

int buzzer = 3;

int x, som;
float seno;
int valor_verm, valor_verd, valor_azul, valor_amar;

void setup(){
  Serial.begin(9600);
  pinMode(led_verm, OUTPUT);
  pinMode(led_verd, OUTPUT);
  pinMode(led_azul, OUTPUT);
  pinMode(led_amar, OUTPUT);

  pinMode(buzzer, OUTPUT);

  pinMode(botao_verm, INPUT_PULLUP);
  pinMode(botao_amar, INPUT_PULLUP);
  pinMode(botao_azul, INPUT_PULLUP);
  pinMode(botao_verd, INPUT_PULLUP);
}

void loop(){
 /*atividade1();*/
 /* atividade2();*/
  atividade3();
  
}

void atividade1(){

  x = 1;
  while (x <= 10){
    Serial.print("Contagem = ");
    Serial.println(x);
    delay(200);
    x = x + 1;
  }

  delay(2000);
}

void atividade2(){
  x = 1;
  while(x <= 3){
    digitalWrite(led_amar, 1);
    delay(200);
    digitalWrite(led_amar, 0);
    delay(400);
    x = x + 1;
  }
  delay(2000);
}
void atividade3(){
  analogWrite(led_amar, 1);
  delay(800);

  analogWrite(led_amar, 40);
  delay(800);

  analogWrite(led_amar, 100);
  delay(800);

  analogWrite(led_amar, 255);
  delay(800);
}
