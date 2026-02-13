# Traffic Lights – Arduino Project
I used Arduino Uno programmed in C++ (Arduino IDE) to simulate a real-world traffic light system.

## Circuit Connections
The system uses three LEDs connected to digital output pins on the Arduino Uno.

### Pin Configuration

| LED Color | Arduino Pin | Resistor |
|-----------|------------|----------|
| Red       | 13         | 220Ω     |
| Yellow    | 12         | 220Ω     |
| Green     | 11         | 220Ω     |

### Wiring Details
Each LED is connected as follows:

- Anode (+) → Arduino digital pin (through 220Ω resistor)
- Cathode (–) → GND

The resistor limits current to protect the LED.

---

## Traffic Light Logic

The traffic light follows a continuous repeating sequence inside the `loop()` function.

### Operating Sequence

1. Red light ON for 20 seconds  
2. Yellow light ON for 2 seconds  
3. Green light ON for 10 seconds  
4. Green light blinks 3 times (0.8 seconds ON / 0.8 seconds OFF)  
5. Yellow light ON for 2 seconds  
6. Repeat the cycle indefinitely


<img width="1536" height="1024" alt="traffic-lights" src="https://github.com/user-attachments/assets/5d2a8960-79e2-48a1-9823-f98715ed253a" />

