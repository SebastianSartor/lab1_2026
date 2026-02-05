#include <Arduino.h>

void setup(){	
	Serial.begin();
}

void loop(){
	int UD_pot = analogRead(1);
    int LR_pot = analogRead(2);
	Serial.println("LR: " + String(LR_pot) + ", UD: " + String(UD_pot));
	delay(100);
}