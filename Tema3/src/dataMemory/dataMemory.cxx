#include <iostream>
#include "dataMemory.h"

Memory::Memory() {
    std::cout << "constructor called" << std::endl;
}

Memory::~Memory() {
    std::cout << "destructor called" << std::endl;
}

Memory::Memory(const Memory& memory) {
    std::cout << "copy constructor called" << std::endl;
}


void Memory::writeTo(int address, int data) {
    // Lock the memory before writing
     std::lock_guard<std::mutex> lock(memoryLock);
    if (address >= 0 && address < MEMORY_SIZE) {
       dataMemory[address] = data;
       std::cout << "Data: " << data << " written to address: " << address << std::endl;
    } else {
      std::cerr << "Invalid memory address." << std::endl;
    }
}
    
int Memory::readFrom(int address) {
    // Lock the memory before reading
    // std::lock_guard<std::mutex> lock(memoryLock);

    if (address >= 0 && address < MEMORY_SIZE) {
        std::cout << "Data read from address: " << address << " is: " << dataMemory[address] << std::endl;
        return dataMemory[address];
    } else {
        std::cerr << "Invalid memory address." << std::endl;
        return -1; 
    }
    return 0;
}

void Memory::print(){
    for(int i = 0; i < MEMORY_SIZE; i++){
        std::cout << dataMemory[i] << " ";
    }
}

