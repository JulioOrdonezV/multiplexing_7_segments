
int contador = 0;
int unidades = 0;
int decenas = 0;

void setup() {
  // put your setup code here, to run once:
  DDRD=B11111111;
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  for(int i = 0; i <= 40; i++){
    unidades = contador%10;
    decodificar(unidades);
    digitalWrite(9, LOW);
    digitalWrite(8, HIGH);
    delay(12.5);
    decenas = contador/10;
    decodificar(decenas);
    digitalWrite(9,HIGH);
    digitalWrite(8,LOW);
    delay(12.5);
  }
  contador = (contador + 1)%60;
}

void decodificar(int val){
  switch(val){
    case 0:
      PORTD = B01111110;
      break;
    case 1:
      PORTD = B00110000;
      break;
    case 2:
      PORTD = B01101101;
      break;
    case 3:
      PORTD = B01111001;
      break;
     case 4:
      PORTD = B00110011;
      break;
     case 5:
      PORTD = B01011011;
      break;
     case 6:
      PORTD = B01011111;
      break;
     case 7:
      PORTD = B01110000;
      break;
     case 8:
      PORTD = B01111111;
      break;
     case 9:
      PORTD = B01111011;
      break;
  }
}
