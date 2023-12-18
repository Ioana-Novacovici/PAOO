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
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::lock_guard<std::mutex> lock(memoryLock);
    if (address >= 0 && address < MEMORY_SIZE) {
       dataMemory[address] = data;
       std::cout << "Data: " << data << " written to address: " << address << std::endl;
    } else {
      std::cerr << "Invalid memory address." << std::endl;
    }
}

void Memory::computeSum(int startAddress, int endAddress){
    int sum = 0;
    std::this_thread::sleep_for(std::chrono::milliseconds(200));
    for(int i = startAddress; i <= endAddress; i++){
        std::lock_guard<std::mutex> lock(memoryLock);
        sum += this->readFrom(i);
    }
    std::cout << "Sum is " << sum << std::endl;
}

void Memory::executeProgram(int number){
    int nrOfDigits = 0;
    while(number){
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        std::cout << "Computing number of digits" << std::endl;
        int c = number % 10;
        nrOfDigits++;
        number/=10;
    }
    writeTo(15, nrOfDigits);
}
    
int Memory::readFrom(int address) {
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
    std::cout << std::endl;
}

