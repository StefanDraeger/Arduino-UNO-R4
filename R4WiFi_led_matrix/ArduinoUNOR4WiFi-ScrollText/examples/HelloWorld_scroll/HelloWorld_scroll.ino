#include <unoR4ScrollText.h>

UnoR4ScrollText maxtrix;

void setup() {

}

void loop() {
  uint8_t banner_text[] = "  Hello, world!";
  uint8_t speed = 50;
  maxtrix.scrollText(banner_text, speed);
}
