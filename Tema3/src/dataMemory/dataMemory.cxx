#include <iostream>
#include <thread>
#include "dataMemory.h"

Memory::Memory() {
    std::cout << "constructor called" << std::endl;
}

Memory::~Memory() {
    std::cout << "destructor called" << std::endl;
}

void Memory::writeTo(int address, int data) {
    std::lock_guard<std::mutex> lock(memoryLock);
    if (address >= 0 && address < MEMORY_SIZE) {
       std::this_thread::sleep_for(std::chrono::milliseconds(100));
       dataMemory[address] = data;
       std::cout << "Data: " << data << " written to address: " << address << std::endl;
    } else {
      std::cerr << "Invalid memory address." << std::endl;
    }
}

void Memory::computeSum(int startAddress, int endAddress){
    std::lock_guard<std::mutex> lock(memoryLock);
    int sum = 0;
    for(int i = startAddress; i <= endAddress; i++){
        sum += this->readFrom(i);
    }
    std::cout << "Sum is " << sum << std::endl;
}
    
int Memory::readFrom(int address) {
    if (address >= 0 && address < MEMORY_SIZE) {
        std::cout << "Data read from address: " << address << " is: " << dataMemory[address] << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
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
    std::cout << std::endl;
}

