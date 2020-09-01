#include <HTTPClient.h>
HTTPClient http;
            void setup()
           {
            Serial.begin(115200);
              }
             void loop()
                  {   
                     http.begin("http://192.168.43.189/all/d0.php");
                     String payload0=http.getString();
                     Serial.println(payload0);
                     delay(500);
                     http.end();
                  }
              
