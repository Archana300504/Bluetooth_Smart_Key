#include <BluetoothSerial.h>

#define BUZZER_PIN 23   

BluetoothSerial SerialBT;

void setup() {
  Serial.begin(115200);

  pinMode(BUZZER_PIN, OUTPUT);

  if (!SerialBT.begin("SmartKey")) {
    Serial.println("An error occurred initializing Bluetooth");
  }

  Serial.println("Bluetooth device is ready to pair.");
}

void loop() {
  if (SerialBT.available()) {
    String command = SerialBT.readStringUntil('\n');
    command.trim();

    Serial.print("Received command: ");
    Serial.println(command);

    if (command.equalsIgnoreCase("FIND")) {
      soundBuzzer();
      Serial.println("Buzzer activated!");
    } else {
      Serial.println("Unknown command received.");
    }
  }
}
void soundBuzzer() {
  tone(BUZZER_PIN, 1000, 500);
  delay(1000);
  noTone(BUZZER_PIN);
}
