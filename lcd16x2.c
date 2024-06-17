#include <wiringPi.h>
#include <lcd.h>

#define LCD_RS  2  // RS - Выбор регистра
#define LCD_E   3  // E  - Еnable (строб по спаду)
#define LCD_D4  1  // D4 - бит данных
#define LCD_D5  4  // D5 - бит данных
#define LCD_D6  5  // D6 - бит данных
#define LCD_D7  6  // D7 - бит данных

int main() {
  int code = wiringPiSetup();
  if (code != 0) {
    return -1;
  }
  int fd = lcdInit(2, 16, 4, LCD_RS, LCD_E, LCD_D4, LCD_D5, LCD_D6, LCD_D7, 0, 0, 0, 0);
  lcdCursorBlink(fd, 1);

  lcdClear(fd);
  lcdPosition(fd, 0, 0);
  lcdPuts(fd, "Hello,");
  lcdPosition(fd, 0, 1);
  lcdPuts(fd, "world!");
}
