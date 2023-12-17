#pragma once
#define MEMORY_SIZE 32
#include <mutex>

class Memory {
private:
    int dataMemory[MEMORY_SIZE] = {0};
    std::mutex memoryLock;
public:
    Memory();

    ~Memory();

    Memory(const Memory& memory);

    void writeTo(int address, int data);
    
    int readFrom(int address);

    void print();

};