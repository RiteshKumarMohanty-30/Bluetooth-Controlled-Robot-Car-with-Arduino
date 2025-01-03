// Motor Pins
#define ENA 9
#define ENB 10
#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 5

// Bluetooth Commands
char command;

void setup() {
  // Motor Pins as Outputs
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  // Initialize Serial Communication for Bluetooth
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    command = Serial.read(); // Read Bluetooth Command

    switch (command) {
      case 'F': // Move Forward
        digitalWrite(IN1, HIGH);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, HIGH);
        digitalWrite(IN4, LOW);
        analogWrite(ENA, 255); // Full speed
        analogWrite(ENB, 255);
        break;

      case 'B': // Move Backward
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, HIGH);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, HIGH);
        analogWrite(ENA, 255);
        analogWrite(ENB, 255);
        break;

      case 'L': // Turn Left
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, HIGH);
        digitalWrite(IN3, HIGH);
        digitalWrite(IN4, LOW);
        analogWrite(ENA, 150); // Half speed
        analogWrite(ENB, 255);
        break;

      case 'R': // Turn Right
        digitalWrite(IN1, HIGH);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, HIGH);
        analogWrite(ENA, 255);
        analogWrite(ENB, 150); // Half speed
        break;

      case 'S': // Stop
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, LOW);
        analogWrite(ENA, 0);
        analogWrite(ENB, 0);
        break;
    }
  }
}
