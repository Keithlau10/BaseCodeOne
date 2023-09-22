#include <Arduino.h>

float bit0=0;
float bit1=0;
float bit2=0;
float bit3=0;
float bit4=0;
bool output0=0;
bool output1=0;
bool output2=0;
bool output3=0;
bool output4=0;


void setup() {

  Serial.begin(9600);
  
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  bit0=analogRead(A0);
  bit1=analogRead(A1);
  bit2=analogRead(A2);
  bit3=analogRead(A3);
  bit4=analogRead(A4);

  if(bit0>0.5){
    output0=1;
  }
  else{
    output0=0;
  }

  if(bit1>0.5){
    output1=1;
  }
  else{
    output1=0;
  }

  if(bit2>0.5){
    output2=1;
  }
  else{
    output2=0;
  }

  if(bit3>0.5){
    output3=1;
  }
  else{
    output3=0;
  }

  if(bit4>0.5){
    output4=1;
  }
  else{
    output4=0;
  }
  Serial.print(output0);
  Serial.print(output1);
  Serial.print(output2);
  Serial.print(output3);
  Serial.print(output4);

  delay(50);

}
