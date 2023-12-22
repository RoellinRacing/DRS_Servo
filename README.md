# DRS_Servo
DRS_System with Servos

# @carbon_gtv  <- Donate for more content!

See video of it working here:
https://www.instagram.com/reel/CylktuAssMe/?utm_source=ig_web_copy_link&igsh=MzRlODBiNWFlZA==

### Parts List
- 1x Arduino Uno
- 1x PCA9685 PWM driver board
- 2x Servo Motors (150kg, 12V)
- 1x LED
- 1x Resistor for the LED (220 Ohms)
- 1x Pushbutton for "Open"
- 1x Pushbutton for "Close"
- Various cables and connectors

### Connection Diagram
- **PCA9685 PWM Driver Board**
  - VCC to Arduino's 5V
  - GND to Arduino's GND
  - SDA to Arduino's A4
  - SCL to Arduino's A5
- **Servo Motors**
  - Connect to the first two connectors of the PCA9685 PWM driver board
- **Pushbutton for "Open"**
  - One pin to GND, the other to Arduino's Pin 2
- **Pushbutton for "Close"**
  - One pin to GND, the other to Arduino's Pin 3
- **LED**
  - Anode (longer leg) to Arduino's Pin 13
  - Cathode (shorter leg) to a 220-Ohm resistor, connected to GND

Certainly! To load the code onto your Arduino Uno, you will need the Arduino IDE (Integrated Development Environment) and some specific libraries. Here is a step-by-step guide:

### Arduino IDE Installation
1. If you haven't already, download the Arduino IDE from the [official website](https://www.arduino.cc/en/software) and install it.

### Adding Libraries
1. Open the Arduino IDE.
2. Go to `Sketch` -> `Include Library` -> `Manage Libraries...`.
3. In the search field, type `Adafruit PWM Servo Driver` and install the corresponding library.
4. You should also install the `Wire` library, which is usually pre-installed.

### Uploading the Code
1. Copy the code and paste it into the Arduino IDE.
2. Select your Arduino board and port:
    - Go to `Tools` -> `Board` and choose `Arduino Uno`.
    - Go to `Tools` -> `Port` and select the port to which your Arduino is connected.
3. Click on the `Upload` button (the arrow pointing up in the IDE).
4. Wait for the message `Upload complete` to appear.

# Calibration and Range of Values
The PWM values you can use for calibration depend on your specific servo motor. For most standard servo motors, PWM values typically range from about 150 to 600. These values usually correspond to angle positions of the servo motor.

150: This is often the position for 0 degrees.
375: This could be a good neutral middle position.
600: This is often the position for 180 degrees.
However, these values are just guidelines and can vary depending on your specific servo motor. It's essential to perform calibration carefully to ensure that the servo motor shifts gears correctly.

# Calibration Steps
Neutral Position: Start by setting a neutral middle position. This is the value to which the servo motor returns after shifting gears.
Gear Positions: Test various PWM values to find the positions for each gear. Make a note of these values for later use in the code.
Fine-Tuning: After finding the basic values, you can begin fine-tuning to ensure reliable gear shifting.


That should be everything you need for this project. If you have any further questions or if anything is unclear, please let me know!

