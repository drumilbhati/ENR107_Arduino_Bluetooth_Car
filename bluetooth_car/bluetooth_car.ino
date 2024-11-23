char t;

int in1 = 8;
int in2 = 9;
int in3 = 10;
int in4 = 11;
int led = 7;


void setup() {
pinMode(in1,OUTPUT);   //left motors forward 13
pinMode(in2,OUTPUT);   //left motors reverse 12
pinMode(in3,OUTPUT);   //right motors forward 11
pinMode(in4,OUTPUT);   //right motors reverse 10
pinMode(led,OUTPUT);   //Led
Serial.begin(9600);
 
}
 
void loop() {
if(Serial.available()){
  t = Serial.read();
  Serial.println(t);
}
 
if(t == 'F'){            //move forward(all motors rotate in forward direction)
  digitalWrite(in1,HIGH);
  digitalWrite(in3,HIGH);
}
 
else if(t == 'B'){      //move reverse (all motors rotate in reverse direction)
  digitalWrite(in2,HIGH);
  digitalWrite(in4,HIGH);
}
 
else if(t == 'L'){      //turn right (left side motors rotate in forward direction, right side motors doesn't rotate)
  digitalWrite(in3,HIGH);
}
 
else if(t == 'R'){      //turn left (right side motors rotate in forward direction, left side motors doesn't rotate)
  digitalWrite(in1,HIGH);
}

else if(t == 'W'){    //turn led on or off)
  digitalWrite(led,HIGH);
}
else if(t == 'w'){
  digitalWrite(led,LOW);
}
 
else if(t == 'S'){      //STOP (all motors stop)
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
}
delay(100);
}