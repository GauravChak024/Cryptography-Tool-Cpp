# Advanced C++ Encryption and Hashing Utility

## Overview

This project demonstrates the implementation of encryption and hashing algorithms using C++. It features a user-friendly interface, robust error handling, and a modular design for better maintainability and reusability.

## Features

- **Encryption and Decryption:**
  - Implements the Caesar Shift algorithm with a shift of 5.
  - Supports both custom input message and file-based encryption and decryption.
- **Hashing:**
  - Generates reliable hashes for user inputs and file contents.
- **Modular Design:**
  - Structured with separate headers and implementation files.
- **User-Friendly Interface:**
  - Intuitive console-based menu system.
  - Comprehensive error handling for a smooth user experience.

## Directory Structure

```
EncryptionHashingProject/
├── src/
│   ├── main.cpp
│   ├── Encryption.cpp
│   ├── Hashing.cpp
│   ├── Utils.cpp
├── include/
│   ├── Encryption.h
│   ├── Hashing.h
│   ├── Utils.h
├── build/
├── bin/
├── Makefile
```

## How to Run

To test the application, simply run the executable file:

```sh
./bin/EncryptionHashingProject.exe
```

## Building from Source

If you want to create a fresh build, you can delete the existing build and executable files by removing the `bin` and `build` folders.

1. **Remove the `bin` and `build` directories (if they exist):**
   ```sh
   rm -rf bin build
   ```

2. **Compile the project using `make`:**
   ```sh
   make
   ```

3. **Run the executable file:**
   ```sh
   ./bin/EncryptionHashingProject.exe
   ```