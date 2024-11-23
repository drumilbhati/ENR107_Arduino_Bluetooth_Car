# Arduino Robot Control

## Description
This project implements a basic robot control system using an Arduino board. The robot can be controlled remotely through serial communication, allowing for movement in different directions and LED control.

## Hardware Requirements
- Arduino board (e.g., Arduino Uno)
- L298N Motor Driver or similar
- 2 DC motors (left and right)
- LED
- Power supply
- Jumper wires

## Pin Configuration
- Pin 8: Left motors forward (IN1)
- Pin 9: Left motors reverse (IN2)
- Pin 10: Right motors forward (IN3)
- Pin 11: Right motors reverse (IN4)
- Pin 7: LED

## Features
- Forward movement
- Backward movement
- Left turn
- Right turn
- LED control
- Emergency stop

## Control Commands
The robot responds to the following single-character commands via Serial communication:
- `F`: Move Forward
- `B`: Move Backward
- `L`: Turn Left
- `R`: Turn Right
- `W`: Turn LED ON
- `w`: Turn LED OFF
- `S`: Stop all motors

## Setup Instructions
1. Connect the motors to the appropriate pins as defined in the pin configuration
2. Upload the code to your Arduino board
3. Open Serial Monitor (9600 baud rate)
4. Send commands to control the robot

## Circuit Diagram
```
Arduino     Motor Driver
Pin 8   →   IN1 (Left Forward)
Pin 9   →   IN2 (Left Reverse)
Pin 10  →   IN3 (Right Forward)
Pin 11  →   IN4 (Right Reverse)
Pin 7   →   LED
```

## Usage Example
1. Connect to the Arduino through Serial Monitor
2. Send 'F' to move forward
3. Send 'S' to stop
4. Send 'W' to turn on LED
5. Send 'w' to turn off LED

## Notes
- The code includes a 100ms delay after each command execution
- Make sure to check all connections before powering up the system
- The robot will stop all motors when receiving the 'S' command
- Serial communication is set to 9600 baud rate

## Safety Considerations
- Always test the robot on a clear, flat surface
- Keep the robot away from edges and obstacles
- Ensure proper voltage supply to prevent damage to components
- Stop the robot immediately if any unusual behavior is observed

## Troubleshooting
If the robot is not responding:
1. Check all wiring connections
2. Verify the correct serial port is selected
3. Ensure the baud rate is set to 9600
4. Check battery/power supply levels
5. Verify motor driver connections

## Future Improvements
Possible enhancements to consider:
- Add speed control functionality
- Implement diagonal movement
- Add obstacle detection
- Include battery level monitoring
- Add wireless control capabilities
