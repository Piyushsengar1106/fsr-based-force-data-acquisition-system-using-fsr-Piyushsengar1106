#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Force Measurement System using FSR
 * @author Piyush_sengar
 * @date 2026-02-21
 *
 * @details
 * Reads analog force data from FSR sensor and
 * displays structured output via Serial Monitor.
 */

 // TODO 1:
 // Define FSR analog pin (Use A0)
constexpr int FSR_PIN = A0;

 // TODO 2:
 // Create variable to store sensor reading
int fsrValue = 0;

void setup() {

    // TODO 3:
    // Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);


    // TODO 4:
    // Print system initialization message
    Serial.println("===============================");
    Serial.println(" FSR Force Measurement System ");
    Serial.println("===============================");
}


void loop() {

    // TODO 5:
    // Read analog value from FSR
    fsrValue = analogRead(FSR_PIN);

    // TODO 6:
    // Print raw ADC value
    Serial.print("FSR Value: ");
    Serial.println(fsrValue);

    // TODO 7:
    // Apply simple threshold logic (e.g., detect pressure)
    // TODO 8:
    // Print pressure detection message
    if (fsrValue >300)
    {
        Serial.println("Pressure detected");
    }
    else
    {
        Serial.println("Pressure not detected");
    }


    // TODO 9:
    // Add delay (500ms or 1 second)
    delay(500);
}
