# I²C Bus Design Considerations

## Overview
The HTS221 sensor communicates with the STM32L475 via the I²C protocol.
This document outlines the electrical and timing considerations relevant
to reliable I²C communication.

## Bus Topology
- Bus type: I²C
- Master: STM32L475
- Slave: HTS221
- Lines: SDA (PB9), SCL (PB8)

## Pull-Up Resistors
I²C lines are open-drain and require pull-up resistors.
On the B-L475E-IOT01A board, appropriate pull-ups are provided on-board.

## Clock Speed
The bus operates in standard mode (100 kHz), which is sufficient for
periodic environmental data sampling.

## Error Conditions
- NACK due to incorrect addressing
- Bus contention
- Clock stretching delays

These are handled internally by the BSP layer in this project.

## Design Rationale
Using I²C provides:
- Low pin count
- Multi-device expandability
- Mature HAL and BSP support
