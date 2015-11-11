int top_motor1 = 4;
int bot_motor1 = 7;
int top_motor2 = 8;
int bot_motor2 = 12;
int LEDright = 13;
int LEDleft = 11;
int LEDbackright = 10;
int LEDbackleft = 9;
int LEDbacklight = 5;
int LEDheadlight = 6;
int speaker = 2;


char bluetooth;

void setup()
{
  Serial.begin(9600);
  pinMode(top_motor1, OUTPUT);
  pinMode(bot_motor1, OUTPUT);
  pinMode(top_motor2, OUTPUT);
  pinMode(bot_motor2, OUTPUT);
  
  pinMode(LEDright, OUTPUT);
  pinMode(LEDleft, OUTPUT);
  pinMode(LEDbackright, OUTPUT);
  pinMode(LEDbackleft, OUTPUT);
  pinMode(LEDbacklight, OUTPUT);
  pinMode(LEDheadlight, OUTPUT);
  pinMode(speaker, OUTPUT);
  
}

void loop() {
  bluetooth = Serial.read();
  
  //Speaker ON
  if(bluetooth == 'V'){
   tone(2, 440); 
  }
  if(bluetooth == 'v'){
   noTone(2);
  }
  
  //backlight ON
  if(bluetooth == 'U')
  {
   digitalWrite(LEDbacklight, HIGH); 
  }
  //Backlight OFF
  if(bluetooth == 'u')
  {
    digitalWrite(LEDbacklight, LOW);
  }
  //Frontlight ON
  if(bluetooth == 'W')
  {
   digitalWrite(LEDheadlight,HIGH);
  //Frontlight OFF
  }
   
   if(bluetooth == 'w')
   {
   digitalWrite(LEDheadlight, LOW);
   
 } 
  
  //go forward
  if(bluetooth == 'F')
    {
      
      digitalWrite(top_motor1,HIGH);
      digitalWrite(bot_motor1,LOW);
      digitalWrite(top_motor2,HIGH);
      digitalWrite(bot_motor2,LOW);
      digitalWrite(LEDright, HIGH);
      digitalWrite(LEDleft, HIGH);
    }

   //go forward right
   if(bluetooth == 'I')
    {
      

      digitalWrite(top_motor1,HIGH);
      digitalWrite(bot_motor1,LOW);
      digitalWrite(top_motor2,HIGH);
      digitalWrite(bot_motor2,LOW);

      digitalWrite(top_motor1,HIGH);
      digitalWrite(bot_motor1,LOW);
      digitalWrite(top_motor2,LOW);
      digitalWrite(bot_motor2,LOW);
      
      digitalWrite(LEDright, HIGH);

      
      
    }

   //go forward left
   if(bluetooth == 'G')
    {
      
      
      digitalWrite(top_motor1,HIGH);
      digitalWrite(bot_motor1,LOW);
      digitalWrite(top_motor2,HIGH);
      digitalWrite(bot_motor2,LOW);

      digitalWrite(top_motor1,LOW);
      digitalWrite(bot_motor1,LOW);
      digitalWrite(top_motor2,HIGH);
      digitalWrite(bot_motor2,LOW);
      
      digitalWrite(LEDleft, HIGH);
    }

   //go right
   if(bluetooth == 'R')
   {
      
      
       digitalWrite(top_motor1,HIGH);
      digitalWrite(bot_motor1,LOW);
      digitalWrite(top_motor2,LOW);
      digitalWrite(bot_motor2,LOW);
      
      digitalWrite(LEDright, HIGH);
   }

   //go left
   if(bluetooth == 'L')
   {
    
      
      digitalWrite(top_motor1,LOW);
      digitalWrite(bot_motor1,LOW);
      digitalWrite(top_motor2,HIGH);
      digitalWrite(bot_motor2,LOW);
      
      digitalWrite(LEDleft, HIGH);
   }

   //go backwards
   if(bluetooth == 'B')
   {
      
      
      digitalWrite(top_motor1,LOW);
      digitalWrite(bot_motor1,HIGH);
      digitalWrite(top_motor2,LOW);
      digitalWrite(bot_motor2,HIGH);
      digitalWrite(LEDbackright, HIGH);
      digitalWrite(LEDbackleft, HIGH);
      
   }
   //go backwards left
   if(bluetooth == 'H')
   {
      
      digitalWrite(top_motor1,LOW);
      digitalWrite(bot_motor1,HIGH);
      digitalWrite(top_motor2,LOW);
      digitalWrite(bot_motor2,HIGH);
      
      digitalWrite(top_motor1,LOW);
      digitalWrite(bot_motor1,HIGH);
      digitalWrite(top_motor2,LOW);
      digitalWrite(bot_motor2,LOW);
      
      digitalWrite(LEDbackleft, HIGH);
      tone(2, 600); 
      
   }
   //go backwards right  
   if(bluetooth == 'J')
   {
      
      digitalWrite(top_motor1,LOW);
      digitalWrite(bot_motor1,HIGH);
      digitalWrite(top_motor2,LOW);
      digitalWrite(bot_motor2,HIGH);
      
      digitalWrite(top_motor1,LOW);
      digitalWrite(bot_motor1,LOW);
      digitalWrite(top_motor2,LOW);
      digitalWrite(bot_motor2,HIGH);
      
      digitalWrite(LEDbackright, HIGH);

      
   }

  //do nothing
  else if(bluetooth == 'S')
    {
      digitalWrite(top_motor1,LOW);
      digitalWrite(bot_motor1,LOW);
      digitalWrite(top_motor2,LOW);
      digitalWrite(bot_motor2,LOW);
      
      
      digitalWrite(LEDright, LOW);
      digitalWrite(LEDleft, LOW);
      digitalWrite(LEDbackright, LOW);
      digitalWrite(LEDbackleft, LOW);
      
    }
}