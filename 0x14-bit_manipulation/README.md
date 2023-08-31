0x14. C - Bit manipulation

A look into bitwise operations in C.

This repository contains examples and explanations of bit manipulation techniques in the C programming language. Bit manipulation is a powerful and efficient way to perform operations on individual bits or groups of bits in data. It is often used in low-level programming, embedded systems, and areas where memory and performance optimization are critical.

Introduction
Bit manipulation involves manipulating individual bits of a data type, such as integers, using bitwise operators. It is a fundamental concept in computer programming, particularly when dealing with memory and optimization. Understanding bit manipulation allows you to perform operations more efficiently and solve specific problems effectively.

Bitwise Operators
C provides several bitwise operators that enable us to perform bit manipulations on data:

Bitwise AND (&)
Bitwise OR (|)
Bitwise XOR (^)
Bitwise NOT (~)
Bitwise Left Shift (<<)
Bitwise Right Shift (>>)
Each operator has a specific purpose in manipulating bits, and we will cover them in the following sections.

Bitwise AND (&)

Bitwise AND (&)
The bitwise AND operator performs a logical AND operation on each pair of corresponding bits. It returns 1 only if both bits are 1; otherwise, it returns 0.

Bitwise OR (|)
The bitwise OR operator performs a logical OR operation on each pair of corresponding bits. It returns 1 if either of the bits is 1; otherwise, it returns 0.

Bitwise XOR (^)
The bitwise XOR operator performs an exclusive OR operation on each pair of corresponding bits. It returns 1 if the bits are different; otherwise, it returns 0.

Bitwise NOT (~)
The bitwise NOT operator flips all the bits in a data type, turning 0s into 1s and 1s into 0s.

Bitwise Left Shift (<<)
The bitwise left shift operator shifts the bits of a number to the left by a specified number of positions. It effectively multiplies the number by 2 raised to the power of the shift count.

Bitwise Right Shift (>>)
