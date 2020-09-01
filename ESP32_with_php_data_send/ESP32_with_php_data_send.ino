#include <WiFi.h>

WiFiClient client;

String myurl = "/";
void setup()
{
Serial.begin(9600);

  WiFi.begin("Tony","20282028");
  while ((!(WiFi.status() == WL_CONNECTED))){
    delay(300);
    Serial.print(".");

  }

}


void loop()
{

    myurl = "26.26";
    client.print(String("GET ") + myurl + " HTTP/1.1\r\n" +
              "Host: " + "http://192.168.43.189/Hackathon/index.php?humidity=" + "\r\n" +
             "Connection: close\r\n\r\n");
    
    Serial.println("Sent");
    delay(10000);

}
