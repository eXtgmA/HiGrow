// -- Project -------------------------------------------
#define CLIENT                 "ESP32Client"          // Client ID for the ESP

// -- Wifi ----------------------------------------------
#define WIFI_SSID              "YourWiFi"             // [Ssid1] Wifi SSID
#define WIFI_PASS              "WiFiPassword"         // [Password1] Wifi password


// -- DHT - Sensor --------------------------------------
#define DHTTYPE                 DHT11                 // [Sensor] Change to DHT11, DHT21, DHT22
#define PIN_DHT                 22                    // [Sensor] Pin for DHT sensor
#define TEMP_UNIT               "C"                   // [Sensor] Temperature Unit (C = Celsius, F = Fahrenheit)

#define OFFSET_TEMPERATURE      0                     // [Offset] If you need to readjust the temperature value
#define OFFSET_HUMIDITY         0                     // [Offset] If you need to readjust the humidity value

// -- Other - Sensor ------------------------------------
#define PIN_SOIL                32                    // [Sensor] Soil Sensor pin
#define PIN_LIGHT               33                    // [Sensor] Light Sensor pin
#define PIN_POWER               34                    // [Sensor] Power Sensor pin


// -- MQTT ----------------------------------------------
#define MQTT                    0                     // [MQTT] Mosquitto (0 = Off, 1 = Start)
#define MQTT_BROKER             "0.0.0.0"             // [MQTT] Set the IP adress from your MQ-Broker
#define MQTT_PORT               1883                  // [MQTT] MQTT Port on the Server
#define MQTT_TOPIC              "smart/room/flower"   // [MQTT] Set the topic for your queue
#define MQTT_INTERVAL           3600                  // [MQTT] Set the deepsleep time in seconds
#define MQTT_USER                "username"           // [MQTT] Set a Username
#define MQTT_PASSWORD            "***"                // [MQTT] Set a password


// -- HTTP ---------------------------------------------- When webser is activ deepsleep will be disabled
#define WEB_SERVER              1                     // [WebServer] Web server (0 = Off, 1 = Start)
#define WEB_PORT                80                    // [WebServer] Port for web access

