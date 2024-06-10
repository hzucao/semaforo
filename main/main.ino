#include <WiFi.h>
#include <WiFiClient.h>
//biblioteca para executar um serviço de HTTP, para publicar os arquivo html 
#include <WebServer.h>
#include <string.h>

//Instancia a biblioteca WebServer, indicando a porta 80 que é a padrão do HTTP
WebServer server(80);

//definido nome e senha do AP que será criado com o Esp32
const char *ssid = "Wifi-Heitor";
const char *password= "12345678";

//definição das configurações de rede
IPAddress local_IP(192,168,0,80);
IPAddress gateway(192,168,0,1);
IPAddress subnet(255,255,255,0);





const int led_1 = 15;
const int led_2 = 2;
const int led_3 = 0;

const int led_4 = 5;
const int led_5 = 18;
const int led_6 = 19;

void setup() {
  Serial.begin(115200);
  //Configuração do Acess Point que ira ser fornecido pelo ESP32
  Serial.print("Configurando AP.....");
  Serial.println(WiFi.softAPConfig(local_IP, gateway, subnet)? "OK" : "Erro");
  Serial.print("Iniciando o Wifi.....");
  Serial.println(WiFi.softAP(ssid, password));
  Serial.print("Endereço IP");
  Serial.println(WiFi.softAPIP());

  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  pinMode(led_4, OUTPUT);
  pinMode(led_5, OUTPUT);
  pinMode(led_6, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  apagarLed(led_3);
  acenderLed(led_1);
  acenderLed(led_6);
  tempo(2);
  apagarLed(led_1);
  acenderLed(led_2);
  tempo(2);
  apagarLed(led_6);
  apagarLed(led_2);
  acenderLed(led_3);
  acenderLed(led_4);
  tempo(2);
  apagarLed(led_4);
  acenderLed(led_5);
  tempo(2);
  apagarLed(led_5);
  apagarLed(led_4);
}


void acenderLed(int led){
  digitalWrite(led, HIGH);
}

void apagarLed(int led){
  digitalWrite(led,LOW);
}

void tempo(int t){
  delay(t*1000);
}