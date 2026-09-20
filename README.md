# 🚗 IoT-Based Smart Car Parking System

An **IoT-based Smart Car Parking System** designed to monitor parking slot availability in real time. The system uses **IR sensors and an Arduino/microcontroller** to detect whether parking slots are occupied or available and displays the current parking status on an **LCD display**.

## 📌 Project Overview

Finding an available parking slot can be time-consuming, especially in crowded parking areas. This project provides a simple IoT-based solution that automatically detects the status of parking slots and displays the availability in real time.

The system continuously monitors parking slots using IR sensors. When a vehicle occupies or leaves a slot, the sensor detects the change and the corresponding status is updated on the LCD.

## 🎯 Objectives

* Detect whether a parking slot is occupied or available.
* Display real-time parking slot status.
* Reduce the time spent searching for available parking spaces.
* Demonstrate the practical use of IoT sensors and microcontrollers.
* Build a low-cost and easy-to-implement parking monitoring system.

## 🛠️ Technologies & Components

### Hardware

* Arduino / Microcontroller
* IR Sensors
* LCD Display
* Connecting Wires
* Breadboard
* Power Supply

### Software

* Arduino IDE
* Embedded C / Arduino Programming

## ⚙️ How It Works

The basic working process is:

```text
          Vehicle Enters
                ↓
          IR Sensor Detects
                ↓
       Microcontroller Reads Data
                ↓
       Check Parking Slot Status
                ↓
       ┌─────────────────────┐
       │ Slot Available?     │
       └─────────────────────┘
          ↓             ↓
        YES             NO
         ↓               ↓
     Available        Occupied
          \             /
           \           /
            ↓         ↓
             LCD Display
```

Each parking slot is connected to an IR sensor. The sensor detects the presence of a vehicle and sends the corresponding signal to the microcontroller.

The microcontroller processes the sensor readings and updates the LCD with the current parking status.

Example:

```text
-------------------------
   SMART PARKING
-------------------------
Slot 1 : AVAILABLE
Slot 2 : OCCUPIED
Slot 3 : AVAILABLE
Slot 4 : OCCUPIED
-------------------------
Available Slots: 2
```

## 🔄 System Workflow

1. The system starts and initializes the sensors and LCD.
2. IR sensors continuously monitor each parking slot.
3. When a vehicle enters a slot, the corresponding sensor detects it.
4. The microcontroller updates the slot status as **Occupied**.
5. When the vehicle leaves, the status changes to **Available**.
6. The LCD displays the updated parking information.

## 🧩 System Architecture

```text
       ┌───────────────┐
       │   IR Sensor   │
       │    Slot 1     │
       └───────┬───────┘
               │
       ┌───────▼───────┐
       │               │
       │ Microcontroller│
       │   (Arduino)   │
       │               │
       └───────┬───────┘
               │
       ┌───────▼───────┐
       │   LCD Display │
       └───────────────┘

       IR Sensors → Arduino → LCD
```

## 👨‍💻 My Role

My main responsibility was the **hardware and sensor integration** of the project.

I worked on:

* Connecting IR sensors with the microcontroller.
* Implementing parking slot detection logic.
* Reading sensor values and determining slot status.
* Connecting and configuring the LCD display.
* Testing the system with different vehicle/slot conditions.
* Debugging sensor and connection issues.

## 📂 Project Structure

```text
IoT-Smart-Car-Parking/
│
├── Smart_Car_Parking.ino
├── README.md
│
├── circuit/
│   └── circuit_diagram.png
│
└── images/
    └── project_setup.jpg
```

## 🚀 Getting Started

### Prerequisites

You need:

* Arduino IDE
* Arduino board/microcontroller
* IR sensors
* LCD display
* Jumper wires
* Breadboard
* USB cable

### Installation

1. Clone the repository:

```bash
git clone https://github.com/your-username/IoT-Smart-Car-Parking.git
```

2. Open the `.ino` file in **Arduino IDE**.

3. Connect the IR sensors and LCD according to the circuit diagram.

4. Select the appropriate Arduino board and COM port.

5. Upload the code to the microcontroller.

6. Power the system and monitor the parking status on the LCD.

## 📊 Features

* ✅ Real-time parking slot detection
* ✅ Automatic occupied/available status
* ✅ LCD-based status display
* ✅ Multiple parking slot monitoring
* ✅ Simple and low-cost implementation
* ✅ Sensor-based automation

## 🔮 Future Improvements

The current system can be extended with:

* 📱 Mobile application for parking availability
* ☁️ Cloud-based monitoring
* 🌐 Web dashboard
* 📍 GPS/location-based parking information
* 🔔 Notifications when parking becomes available
* 💳 Automated parking payment
* 📊 Parking usage analytics
* 🤖 Automatic vehicle guidance to available slots

## 🎓 Learning Outcomes

Through this project, I gained practical experience in:

* IoT system development
* Sensor integration
* Microcontroller programming
* Real-time data handling
* Hardware debugging
* Embedded system development
* Basic automation concepts

## 📜 License

This project is developed for **educational and portfolio purposes**.

## 👨‍💻 Author

**Pradyumn Shriwas**

B.Tech — Internet of Things (IoT)

GitHub: [@pradyumnshriwas](https://github.com/pradyumnshriwas)
