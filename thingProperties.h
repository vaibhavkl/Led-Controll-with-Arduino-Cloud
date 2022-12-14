// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char DEVICE_LOGIN_NAME[]  = "Enter device Id";

const char SSID[]               = "Hotspot Name";    // Network SSID (name)
const char PASS[]               = "Hotspot Password";    // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[]  = "Secreat device key";    // Secret device password
//SECRET_DEVICE_KEY is Available on the arduino cc website 

void onLedChange();

bool led;

void initProperties(){

  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.addProperty(led, READWRITE, ON_CHANGE, onLedChange);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
