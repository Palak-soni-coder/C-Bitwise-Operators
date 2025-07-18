
**Name:** Palak Soni  
**Division:** ENTC-A3  
**PRN:** 24070123069  

# Bitwise Operators in C++
---

## Introduction

Bitwise operators in C++ allow direct manipulation of individual bits within integer data types. Unlike arithmetic operators that operate on entire numbers, bitwise operators act on each bit of the binary representation. These are essential in scenarios like embedded systems, device drivers, cryptography, memory optimization, and low-level hardware communication.

Understanding these operators is critical for efficient programming where performance and memory usage are key factors.

---

## Types of Bitwise Operators

1. **AND (`&`)**:  
   Performs a logical AND between corresponding bits of two numbers. Resulting bit is 1 only if both input bits are 1.

2. **OR (`|`)**:  
   Performs a logical OR. Resulting bit is 1 if at least one of the input bits is 1.

3. **XOR (`^`)**:  
   Performs a logical exclusive OR. Resulting bit is 1 only if the input bits are different.

4. **NOT (`~`)**:  
   Unary operator that inverts (flips) all bits of a number.

5. **Left Shift (`<<`)**:  
   Shifts all bits to the left by a specified number of positions, inserting 0s on the right. Equivalent to multiplying by powers of 2.

6. **Right Shift (`>>`)**:  
   Shifts all bits to the right. Useful for dividing integers by powers of 2.

---

## Explanation of Programs

### Program 1: Bitwise Operator Demonstration

This program demonstrates how the bitwise AND, OR, NOT, XOR, left shift, and right shift work on two integers.

- `AND` returns 1 only if both bits are 1.
- `OR` returns 1 if at least one bit is 1.
- `XOR` returns 1 if the bits are different.
- `NOT` flips each bit (used for one's complement).
- `Left Shift` multiplies a number by 2ⁿ.
- `Right Shift` divides a number by 2ⁿ.

This is useful to visualize how each bitwise operator affects the binary representation of numbers.

---

### Program 2: Set and Reset Specific Bits

This program shows how to set or reset a specific bit in an integer using bitwise operators.

- To **set** a bit: Use OR (`|`) with a mask where only the target bit is 1.
- To **reset** a bit: Use AND (`&`) with the complement (`~`) of a mask where the target bit is 1.

For example, if you want to set bit 3, the mask will be `1 << 3`. Applying `i | mask` sets that bit.  
To reset bit 4, the mask is again `1 << 4`, and `i & (~mask)` clears that bit.

This is often used in low-level system programming, flag management, and control register configuration.

---

## Conclusion

Bitwise operators provide precise control over binary data at the bit level. They are fundamental in optimizing programs, especially when working with hardware, memory-mapped registers, or compact data formats. The programs explained above illustrate how to use these operators for common operations like logical bitwise manipulation and targeted bit setting/resetting.

