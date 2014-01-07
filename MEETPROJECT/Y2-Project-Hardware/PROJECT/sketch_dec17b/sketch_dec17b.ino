int pushButton = 2;
int buttonState;
void setup() {
  pinMode(pushButton, INPUT);
  pinMode(13, OUTPUT);
  pinMode(buttonState,OUTPUT) ;
}
 

void loop (){
    int buttonState = digitalRead(pushButton);
    if (buttonState == HIGH){
      digitalWrite (13, HIGH);
      Serial.println (pushButton);
      delay(1);
    }
    else {
         Serial.println (0);
         delay (buttonState = LOW);
   }

      
}
