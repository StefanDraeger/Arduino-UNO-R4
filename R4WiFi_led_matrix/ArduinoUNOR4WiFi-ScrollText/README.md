
# Arduino UNO R4 WiFi: ScrollText Library

This library is used to display a ticker on the LED matrix of the Arduino UNO R4 WiFi. The original code comes from Clemens@Elektor and can be found under https://github.com/ClemensAtElektor/Arduino-UNO-R4.

My service was simply to extract this code and create a library from it, which you can easily create via Tools > Include Library > Add ZIP. Library to import it. 

So you only need an import and a function call to display your text on the LED matrix.

    #include <unoR4ScrollText.h>
    
    UnoR4ScrollText maxtrix;
    
    void setup() {}
    
    void loop() {
      uint8_t banner_text[] = "  Hello, world!";
      uint8_t speed = 50;
      maxtrix.scrollText(banner_text, speed);
    }

GitHub Repository: https://github.com/ClemensAtElektor/Arduino-UNO-R4

Download : https://github.com/ClemensAtElektor/Arduino-UNO-R4/archive/refs/heads/main.zip

Recoded by Stefan Draeger | https://draeger-it.blog
