#include <Arduino.h>

class UnoR4ScrollText {
   public:
     UnoR4ScrollText() { setup(); }
	 void setup();
     void scrollText(uint8_t text[], uint8_t speed);
};