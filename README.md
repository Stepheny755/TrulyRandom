# TruelyRandom
A true and perhaps excessive method to generate random numbers.

## Summary

This C++ library seeks to implement random number generation with an emphasis on reducing pseudo-randomness evident with rudimentary computer random number generation software. Many factors will be applied to generated numbers to create a legitimately random number within not just each call and between each call but every execution. Some factors are also computer specific, and can be turned off if desired.

## Implementation

### Base:
- [x] C random number generation using the C standard library

### Factors Applied:

### General:
- [x] Time at Execution
- [x] Time since Execution

### Computer Specific:
- [ ] CPU Temperature
