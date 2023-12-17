#pragma once
#define MEMORY_SIZE 16
#include <mutex>

class Memory {
private:
    int dataMemory[MEMORY_SIZE] = {0};
    std::mutex memoryLock;
public:
    Memory();

    ~Memory();

    void writeTo(int address, int data);
    
    int readFrom(int address);

    void print();

    void computeSum(int startAddress, int endAddress);
};