#include <ESP8266HTTPClient.h>
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
HTTPClient http;
            void setup()
           {
                
                  pinMode(2,OUTPUT);
                  Serial.begin(115200);
                  WiFi.begin("Tony","12201220");
                         while (WiFi.status() != WL_CONNECTED)
                          {
                          delay(300);
                          Serial.println("...");
                          }
                          Serial.println("connected"); 
                    delay(3000);
            }
             void loop()
            {
                     http.begin("http://192.168.43.189/Tony/status.php");
                     String p = http.getString();
                     Serial.println(p);
                     if (p == "1")
                     {
                      digitalWrite(2,HIGH);
                     }
                     else if (p == "0")
                     {
                      digitalWrite(2,HIGH);
                     }
                     http.end(); 
                     delay(100);
            }
              
