# led-blinker-button

# 💡 LED Blinker with Button (Simulation in C)

This is a simple embedded systems simulation project in C that toggles an LED based on button press input. It includes basic **debouncing** logic and simulates hardware behavior using terminal input.

## 🔧 Features

- Simulates LED ON/OFF toggle using a button
- Button input via terminal
- Debounce logic to prevent multiple toggles from a single press
- Real-time behavior using `usleep()`


## 🛠️ How It Works

- You type `1` in the terminal to simulate a button press.
- The code toggles the state of the LED.
- Typing `0` simulates no press (used to reset state).
.

## 📁 Project Structure
- LED state is led-blinker-button/
├── main.c # Simulation code in C
├── README.md # Project overview (this file)printed as `LED ON` or `LED OFF`


## 🚀 How to Compile and Run

### 1. Compile the program
``
gcc main.c -o blinker
.
