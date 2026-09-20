#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// --------------------------------------------------
// LCD Configuration
// --------------------------------------------------

// LCD I2C address
// Common addresses are 0x27 and 0x3F
LiquidCrystal_I2C lcd(0x27, 16, 2);


// --------------------------------------------------
// IR Sensor Pins
// --------------------------------------------------

const int sensor1 = 2;
const int sensor2 = 3;
const int sensor3 = 4;
const int sensor4 = 5;


// --------------------------------------------------
// Setup Function
// --------------------------------------------------

void setup() {

  // Configure IR sensors as input
  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);
  pinMode(sensor3, INPUT);
  pinMode(sensor4, INPUT);

  // Initialize LCD
  lcd.init();

  // Turn ON LCD backlight
  lcd.backlight();

  // Welcome message
  lcd.setCursor(0, 0);
  lcd.print(" Smart Parking ");

  lcd.setCursor(0, 1);
  lcd.print("System Starting");

  delay(2000);

  // Clear LCD
  lcd.clear();
}


// --------------------------------------------------
// Main Loop
// --------------------------------------------------

void loop() {

  // Read IR sensor values
  int s1 = digitalRead(sensor1);
  int s2 = digitalRead(sensor2);
  int s3 = digitalRead(sensor3);
  int s4 = digitalRead(sensor4);


  // ------------------------------------------------
  // Calculate Available Slots
  // ------------------------------------------------

  int availableSlots = 0;

  // LOW = Vehicle detected
  // HIGH = Slot available

  if (s1 == HIGH) {
    availableSlots++;
  }

  if (s2 == HIGH) {
    availableSlots++;
  }

  if (s3 == HIGH) {
    availableSlots++;
  }

  if (s4 == HIGH) {
    availableSlots++;
  }


  // ------------------------------------------------
  // Display Slot Status
  // ------------------------------------------------

  lcd.clear();


  // Slot 1
  lcd.setCursor(0, 0);
  lcd.print("S1:");

  if (s1 == LOW) {
    lcd.print("OCC");
  } 
  else {
    lcd.print("AVL");
  }


  // Slot 2
  lcd.setCursor(8, 0);
  lcd.print("S2:");

  if (s2 == LOW) {
    lcd.print("OCC");
  } 
  else {
    lcd.print("AVL");
  }


  // Slot 3
  lcd.setCursor(0, 1);
  lcd.print("S3:");

  if (s3 == LOW) {
    lcd.print("OCC");
  } 
  else {
    lcd.print("AVL");
  }


  // Slot 4
  lcd.setCursor(8, 1);
  lcd.print("S4:");

  if (s4 == LOW) {
    lcd.print("OCC");
  } 
  else {
    lcd.print("AVL");
  }


  // Wait before next reading
  delay(1000);
}
