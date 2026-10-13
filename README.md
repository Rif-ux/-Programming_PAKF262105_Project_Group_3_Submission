# Assignment 2

## Overview
This repository contains a C++ program and algorithm designed to find all prime numbers between two given integer values (inclusive) using nested loops and modular arithmetic.

## Description
The program takes two inputs representing a range (`start_num` and `end_num`) and outputs every prime number found within that range on a new line.

## Algorithm & Logic
1. **Range Iteration**: An outer loop iterates through each number `i` from `start_num` to `end_num`.
2. **Prime Check**: For each number `i > 1`, an inner loop checks if `i` is divisible by any number `j` from `2` up to `i - 1`.
3. **Flag Verification**: A flag variable (`prime`) tracks divisibility. If `i % j == 0`, `prime` is set to `0`.
4. **Display Output**: If `prime` remains `1` after checking all possible divisors, the number `i` is printed.
