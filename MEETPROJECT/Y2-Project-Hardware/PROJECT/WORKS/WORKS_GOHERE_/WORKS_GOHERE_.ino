int pushButton = 2;
int buttonState;

void setup() {
  pinMode(pushButton, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}


void loop ()  {
  buttonState = digitalRead(pushButton);
   if (buttonState == HIGH){
      digitalWrite (13, LOW);
      Serial.println ("Button not pressed!");  
      delay (2000);    
   }
   
   else {
      digitalWrite (13, HIGH);
      Serial.println ("Button pressed!");  
      delay (2000);    
      
             
   }
      
}

