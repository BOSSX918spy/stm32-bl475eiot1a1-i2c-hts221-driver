# Floating-Point Considerations on Cortex-M4

## Hardware Support
The STM32L475 includes an FPU (single-precision), enabling efficient
floating-point calculations.

## Why Floating Point Is Used
HTS221 sensor outputs are naturally represented as:
- Temperature in degrees Celsius
- Humidity in percentage

Using floating-point values improves readability and reduces scaling errors.

## Performance Impact
- Floating-point math is acceptable at low sampling rates
- UART transmission dominates execution time in this project

## Alternatives
For ultra-low-power systems:
- Fixed-point representation
- Integer scaling (e.g., value × 10)

These optimizations are not required for this design.
