//*****************************************************************************
//****Programa para probar el ESP12E, realizando la conexión a una red Wifi****
//*****************************************************************************
#include "Arduino.h"
#include <ESP8266WiFi.h>

const char* ssid = "XXXX-XXXXX";
const char* password = "XXXXXXXXXXXXXX";

const int PIN_LED = 5;

void setup_wifi();

void setup(){
  pinMode(PIN_LED, OUTPUT);
  pinMode(BUILTIN_LED, OUTPUT);
  Serial.begin(115200);
  setup_wifi();
}

void setup_wifi(){
  delay(10);
  Serial.println();
  Serial.print("Conectando a ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status()!=WL_CONNECTED){
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi conectado");
  Serial.println("Dirección IP: ");
  Serial.println(WiFi.localIP());
}

void loop(){
}
