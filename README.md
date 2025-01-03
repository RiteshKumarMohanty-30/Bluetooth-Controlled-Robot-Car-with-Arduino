# Bluetooth-Controlled-Robot-Car-with-Arduino  

This repository contains the code for a **Bluetooth-Controlled Robot Car** built using an Arduino, a Bluetooth module (e.g., HC-05/HC-06), an H-Bridge motor driver, and two DC motors. The robot car responds to commands sent from a smartphone or other Bluetooth-enabled devices to move forward, backward, turn left/right, and stop.  

---  

## 🚀 Features  
- **Bluetooth Communication**: Control the robot remotely using Bluetooth commands.  
- **Motor Control**: Seamless forward, backward, left, and right movement using PWM for speed control.  
- **Command-Based Operation**:  
  - `F`: Move Forward  
  - `B`: Move Backward  
  - `L`: Turn Left  
  - `R`: Turn Right  
  - `S`: Stop  
- **Adjustable Speed**: Use `analogWrite()` for custom motor speeds.  
- Modular and beginner-friendly Arduino code.  

---  

## 🛠️ Hardware Requirements  
1. **Arduino Board** (e.g., Uno, Mega, Nano).  
2. **HC-05/HC-06 Bluetooth Module**.  
3. **L298N Motor Driver Module** or any compatible H-Bridge.  
4. Two **DC Motors**.  
5. **Power Supply** for the Arduino and motors.  
6. Jumper wires and breadboard (optional).  

---  

## 📟 Pin Configuration  

### **Motor Driver Pins**  
| Arduino Pin | Function            | Motor  |  
|-------------|---------------------|--------|  
| 9           | Motor 1 Speed (ENA) | Motor 1|  
| 10          | Motor 2 Speed (ENB) | Motor 2|  
| 2           | Motor 1 Forward (IN1) | Motor 1|  
| 3           | Motor 1 Backward (IN2)| Motor 1|  
| 4           | Motor 2 Forward (IN3) | Motor 2|  
| 5           | Motor 2 Backward (IN4)| Motor 2|  

### **Bluetooth Module**  
| Bluetooth Pin | Arduino Pin |  
|---------------|-------------|  
| RXD           | TX (Pin 1)  |  
| TXD           | RX (Pin 0)  |  

> Note: Disconnect the Bluetooth module while uploading the code to the Arduino to avoid interference.  

---  

## 🔧 Software Setup  

1. Install the **Arduino IDE** from [Arduino's official website](https://www.arduino.cc/en/software).  
2. Connect your Arduino board to the computer via USB.  
3. Upload the `Bluetooth-Controlled Robot Car` code to the Arduino.  
   > ⚠️ Ensure the Bluetooth module is disconnected during the upload process.  

4. Use a **Bluetooth Controller App** (e.g., Arduino Bluetooth Controller, Serial Bluetooth Terminal) to send commands (`F`, `B`, `L`, `R`, `S`).  
5. Pair your Bluetooth module with your smartphone/device and start controlling the robot!  

---  

## ✨ How It Works  

1. The **Bluetooth module** receives commands (`F`, `B`, `L`, `R`, `S`) from a smartphone app.  
2. The Arduino interprets the commands and sends signals to the **L298N motor driver**.  
3. The motor driver controls the motors' direction and speed based on the received commands.  

### Command Reference  
| Command | Action         |  
|---------|----------------|  
| `F`     | Move Forward   |  
| `B`     | Move Backward  |  
| `L`     | Turn Left      |  
| `R`     | Turn Right     |  
| `S`     | Stop           |  

---  

## 🔄 Customization  

- **Motor Speed**: Adjust the values in `analogWrite(ENA, <value>);` and `analogWrite(ENB, <value>);` (range: 0–255).  
- **Action Durations**: Add delays for specific commands if needed.  
- **Additional Features**: Integrate sensors (e.g., ultrasonic for obstacle detection) or actuators for enhanced functionality.  

---  

## 🌟 Applications  

- **DIY Robotics**: Create your own Bluetooth-controlled car or robot.  
- **Educational Projects**: Learn about Arduino, motor control, and wireless communication.  
- **Prototyping**: Extend the project for more complex robot designs.  

---  

## 🤝 Contributing  

Contributions are welcome! Feel free to fork this repository, submit pull requests, or suggest new features.  

---  

## 📜 License  

This project is licensed under the MIT License. Feel free to use and modify it as per your needs.  

---  

## 💡 Acknowledgments  

- Arduino and the open-source community.  
- Tutorials and resources for Bluetooth and motor control projects.  

Enjoy building your Bluetooth-controlled robot car! 🚗✨  
