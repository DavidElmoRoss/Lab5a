#include "Grove_LCD_RGB_Backlight.h"
#include "mbed.h"
int main(void)
{
Grove_LCD_RGB_Backlight lcd(D14, D15);
lcd.locate(4,1);
lcd.setRGB(0x0,0x80,0x80);
lcd.print("Hello BABY");
for(;;);
}