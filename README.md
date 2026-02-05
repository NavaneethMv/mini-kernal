# MiniKernel: OOP in C & Linux Driver Architecture

A bare-metal simulation of the Linux Kernel's Object-Oriented design patterns. This project demonstrates how C uses **function pointers**, **vtables**, and **generic pointers (`void*`)** to achieve polymorphism without language-level support for classes.

## Overview

The Linux Kernel is written in C, yet it is highly modular and object-oriented. This project reverse-engineers that architecture to build a "Mini Kernel" that manages hardware drivers.

## Project Structure

```text
.
├── Makefile           
├── device.h           # THE CONTRACT: Interface definitions (Kernel Space)
├── kernel_types.h     # Type definitions mimicking <linux/types.h>
├── main.c             # THE CORE: Boot sequence and device iteration
├── keyboard.c         # DRIVER: Specific implementation of a keyboard