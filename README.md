# Bluetooth-Based Smart Key Finder using ESP32

# Problem Statement
Misplacing keys or any other important items is a common problem in daily life. Finding them quickly can be difficult,
especially when they are out of sight.

# Solution
This project implements a Bluetooth-based smart key finder using ESP32.
When a specific command is sent from a mobile device via Bluetooth, the ESP32 activates a buzzer to help locate the key.

# System Overview
The system uses Bluetooth communication to receive commands from a smartphone.
Upon receiving a predefined command [#Find], the ESP32 triggers a buzzer connected to it.

# System Architecture
Mobile Phone → Bluetooth → ESP32 → Buzzer

# Hardware Components
1. ESP32 Development Board
2. Buzzer
3. Connecting Wires
4. Power Supply

# Software Tools
1. Arduino IDE
2. ESP32 BluetoothSerial Library
3. Serial Monitor (for debugging)

# Working Principle
1. ESP32 initializes Bluetooth with the device name SmartKey.
2. A smartphone pairs with the ESP32 over Bluetooth.
3. The user sends the command `FIND`.
4. ESP32 receives the command and activates the buzzer.
5. The buzzer sounds, helping locate the key.

# Results
- Bluetooth communication was established successfully.
- The buzzer was triggered reliably upon receiving the `FIND` command.
- Serial monitor confirmed correct command reception.

# IMAGES

<img width="975" height="576" alt="image" src="https://github.com/user-attachments/assets/ca889de6-ffef-4b74-b5c8-142fd0bd2508" />
<img width="983" height="683" alt="image" src="https://github.com/user-attachments/assets/4752f5a4-5c0b-46a3-9d79-8af55385a1db" />
<img width="372" height="118" alt="image" src="https://github.com/user-attachments/assets/102117ff-b12c-4ffa-8051-2807a9adce0b" />

# Future Improvements
1. Add mobile application support
2. Increase buzzer duration or volume control
3. Add GPS or BLE for extended range
4. Implement low-power sleep mode

# Repository Structure
- `Smart_key.ino`– ESP32 source code
- `hardware` – Circuit diagram
- `results` – Output proof
- `README.md` – Project documentation

# Author
Archana Devi P M  
Embedded Systems | IoT | Python | ROS | C/C++ | SIH Finalist(2024 & 2025) | MongoDB
