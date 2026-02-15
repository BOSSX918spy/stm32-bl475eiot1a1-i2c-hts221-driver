# STM32 B-L475E-IOT01A I²C HTS221 Sensor Driver

## Overview
This project implements a reusable I²C driver for the on-board HTS221
temperature and humidity sensor on the STM32 B-L475E-IOT01A Discovery board.
Sensor data is acquired over I²C and transmitted via UART for real-time
telemetry and validation.

The project emphasizes driver abstraction, clean firmware architecture,
and production-aligned embedded design practices.

---

## Target Platform
- Board: B-L475E-IOT01A
- MCU: STM32L475VGT6 (ARM Cortex-M4F)
- Sensor: HTS221 (Temperature & Humidity)
- Bus: I²C1 (PB8 / PB9)
- UART: USART1 (PB6 / PB7 → ST-LINK VCP)

---

## Design Objectives
- Abstract sensor access behind a clean driver interface
- Avoid direct BSP usage in application code
- Demonstrate correct I²C sensor bring-up
- Provide formatted UART telemetry output
- Enable portability and future driver replacement

---

## Firmware Architecture
- **Application Layer:** main.c
- **Driver Layer:** hts221_driver.c / .h
- **Board Support Layer:** STM32 BSP
- **Hardware Layer:** HAL + I²C peripheral

This layered structure mirrors industry-standard embedded firmware design.

---

## Build and Run
1. Open the `.ioc` file in STM32CubeMX
2. Generate code for STM32CubeIDE
3. Build and flash the firmware
4. Open a serial terminal (115200 baud, 8-N-1)
5. Observe live temperature and humidity readings

---

## Design Limitations
- Blocking I²C access
- BSP-based backend
- Fixed sampling interval

---

## Possible Extensions
- Direct register-level HTS221 driver
- DMA-based I²C transfers
- Low-power measurement modes
- Sensor fusion with pressure / motion sensors

---

## Author
**Gurnoor Singh**  
Embedded Systems | Firmware Development | MCU Software

---

## Development Context

This firmware project was developed at the **IoT Innovation Lab**,  
Department of Electronics and Communication Engineering,  
**Chitkara University**.

The work was completed as part of hands-on embedded systems learning
and practical experimentation on real hardware platforms.

---

## Acknowledgements

I would like to express my sincere gratitude to:

- **Dr. Amit Kumar**
- **Dr. Amarjeet Kaur**
- **Mr. Rakesh Kumar**

for their guidance, mentorship, and 
