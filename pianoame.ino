// Código Piano
/*
    Notas Musicales / Frecuencias
  
        DO=523.25
        RE=587.33
        MI=659.26
        FA=698.46
        SOL=783.99
        LA=880
        SI=987.77
 */

void setup() {

  //Configuracion de pines
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP); 
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, OUTPUT);

} 


void loop() { // Comienzo del loop
  //Programación Piano
  for(int i=5;i<9;i++){
    if(digitalRead(i) == HIGH){
      noTone(9);
    }
  }
  
  if (digitalRead(5) == LOW) {
    tone(9, 523.25);
    delay(1000);
  }
  
  if ( digitalRead(6) == LOW) {
    tone(9, 659.26);
    delay(1000);
  }
  if ( digitalRead(7) == LOW) {
    tone(9, 783.99);
    delay(1000);
  }
  if ( digitalRead(8) == LOW) {
    tone(9, 880);
    delay(1000);
  }
} 
