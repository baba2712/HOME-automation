#define BLYNK_TEMPLATE_ID "Your_Template_ID"
#define BLYNK_DEVICE_NAME "Your_Device_Name"
#define BLYNK_AUTH_TOKEN "Your_Auth_Token"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "YOUR_SSID";
char pass[] = "YOUR_PASSWORD";

const int relay1 = D1;
const int relay2 = D2;

void setup() {
    Blynk.begin(auth, ssid, pass);
    pinMode(relay1, OUTPUT);
    pinMode(relay2, OUTPUT);
    digitalWrite(relay1, HIGH);  // Turn relay 1 OFF initially
    digitalWrite(relay2, HIGH);  // Turn relay 2 OFF initially
}

BLYNK_WRITE(V1) {
    int value = param.asInt();
    digitalWrite(relay1, value ? LOW : HIGH);  // Turn relay 1 ON/OFF
}

BLYNK_WRITE(V2) {
    int value = param.asInt();
    digitalWrite(relay2, value ? LOW : HIGH);  // Turn relay 2 ON/OFF
}

void loop() {
    Blynk.run();
}
