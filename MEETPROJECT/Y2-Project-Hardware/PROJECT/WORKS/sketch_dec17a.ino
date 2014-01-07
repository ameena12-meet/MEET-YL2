int pushButton = 2;
int buttonState;

void setup() {
  pinMode(pushButton, INPUT);
  pinMode(13, OUTPUT);
}


void loop (){
  buttonState = digitalRead(pushButton);
   if (buttonState == HIGH){
      digitalWrite (13, HIGH);
   }
   else {
      digitalWrite (13, LOW);
   }
      
}

