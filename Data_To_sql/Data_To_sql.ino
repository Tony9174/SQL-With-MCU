#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
int  i;
String  url;
HTTPClient http;
void setup()
{
Serial.begin(9600);
   WiFi.begin("Tony","20282028");
  while ((!(WiFi.status() == WL_CONNECTED)))
  {
    delay(300);
    }
}
void loop()
{
        i = analogRead(A0);
        url = "http://192.168.43.189/mcu/index.php?statu=";
        url+= i;
        http.begin(url);
        http.GET();
        http.end();
        Serial.println(url);
        delay(5000);
 }
