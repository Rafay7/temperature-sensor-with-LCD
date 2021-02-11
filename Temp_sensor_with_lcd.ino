#include <DHT.h>
#include <DHT_U.h>
#include <LiquidCrystal.h>

DHT dht(8 , DHT11);
LiquidCrystal lcd(2,3,4,5,6,7);
int sensor = 8;
void setup()
{
  lcd.begin(16,2);
  dht.begin();
}

void loop()
{
  float chk = dht.readTemperature();
 lcd.print(chk);
  lcd.setCursor(0,0);
   

 lcd.print("temp:");
//lcd.setCursor(3,1);
  delay(1000);
}
