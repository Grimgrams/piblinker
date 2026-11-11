#include <wiringPi.h> 
const int i, led = 17; 

void blink (const int led){ 
	digitalWrite(led, HIGH); delay(500); digitalWrite(led, LOW); delay(500);
} 

int main(void){ 
	wiringPiSetupGpio(); 
	pinMode(led, OUTPUT);

	while(1){
		blink(led);		
	}
	return 0;
}
