🛣️ Line Follower Bot on Custom custom Arduino UNO 

This repository contains the code and documentation for a Line Following Robot built using infrared (IR) sensors and a custom-made Arduino UNO board with an integrated motor driver. This compact design simplifies wiring and enhances reliability for basic robotics projects.
📦 Features

    🧠 Custom Arduino UNO with onboard L298N Motor Driver

    👀 Infrared sensor array for line detection

    🔁 Basic PID (optional) or threshold-based logic

    ⚙️ Dual motor control (forward, left, right, stop)

    🔌 Minimal external wiring

🛠️ Hardware Used
Component	Description
Custom Arduino UNO	With built-in L298N motor driver module
IR Sensor Module (x3–5)	Reflective IR sensors for line sensing
Geared DC Motors (x2)	For differential drive
Chassis	Two-wheel with caster wheel
Power Supply	7.4V Li-ion battery or 9V battery
🔌 Pin Configuration
Arduino Pin	Connected To
A0–A2	IR Sensors (left-mid-right)
D3, D5	Motor A inputs (PWM)
D6, D9	Motor B inputs (PWM)

(Adjust based on your custom board's schematic.)
🧠 Logic Overview

The robot reads values from the IR sensors and controls the motors based on line detection:

    Center sensor HIGH → Go forward

    Left sensor HIGH → Turn left

    Right sensor HIGH → Turn right

    All sensors LOW or all HIGH → Stop or make corrective action
   
   📄 License

This project is licensed under the MIT License.
