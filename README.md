# byte

A lightweight command-line utility for quick memory unit conversion, written in C.

## Overview
`byte` is designed to be a fast, no-nonsense tool for system administrators and developers who need to convert Megabytes to Bytes instantly without interactive prompts.

## Features
* **Non-interactive**: Works directly with command-line arguments.
* **Unix-friendly**: Easy to pipe into other tools or use in shell scripts.
* **Minimalist**: Small binary size and zero dependencies.

## Installation
Ensure you have a C compiler (`gcc` or `clang`) installed on your system.

1. Clone the repository:
   ```sh
   git clone https://github.com/bogdandodz/byte.git
   cd byte
```

2. Compile the source:
  ```sh
  cc main.c -o byte
```
  
## Usage
  ```sh
  ./byte <value_in_mb>
```
## Example
```sh
./byte 100
# Output: 100.00 MB = 104857600 Bytes
```
