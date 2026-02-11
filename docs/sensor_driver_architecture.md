# Sensor Driver Architecture

## Layered Design
The firmware follows a layered architecture:

Application → HTS221 Driver → BSP → HAL → Hardware

## Driver Responsibilities
- Provide a clean API to application code
- Hide BSP implementation details
- Enable future migration to register-level drivers

## Why Not Call BSP Directly?
Direct BSP usage in application code:
- Reduces portability
- Increases coupling
- Makes testing harder

Wrapping BSP functions inside a driver module improves maintainability
and mirrors production firmware design.

## Extensibility
The driver can be replaced with:
- Direct register-level HTS221 driver
- Mock sensor for testing
- DMA-based I²C backend
