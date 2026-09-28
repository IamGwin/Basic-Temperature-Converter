# Temperature Converter

A command-line program written in C that converts temperatures between Celsius and Kelvin.

This is one of my first C projects, built while learning the language.

## Features

- Menu with two conversion options:
  1. Celsius to Kelvin
  2. Kelvin to Celsius
- Prompts for a temperature and prints the converted result to two decimal places
- Exits when the input isn't a valid number

## Requirements

- [GCC](https://gcc.gnu.org/) (on Windows, install it through [MSYS2](https://www.msys2.org/))

## How to compile and run

**Windows (PowerShell):**

```powershell
gcc -Wall -Wextra Converter.c -o Converter
.\Converter
```

**Linux / macOS:**

```bash
gcc -Wall -Wextra Converter.c -o Converter
./Converter
```

## Formulas used

- Kelvin = Celsius + 273.15
- Celsius = Kelvin - 273.15

## What I practiced

- Reading input with `scanf` and printing with `printf`
- `int` and `float` variables
- Decision making with `if / else if / else`
- Checking the return value of `scanf` to handle invalid input
- Compiling and running C programs from the terminal with GCC

## Possible improvements

- Add Fahrenheit conversions
- Ask again when the input is invalid instead of exiting
- Allow the code to accept non numeric values