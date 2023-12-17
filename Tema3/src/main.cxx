#include <iostream>
#include "dataMemory.h"
#include <thread>
#include <memory>

std::shared_ptr <Memory> memory;

void store(int address, int data) {
   memory->writeTo(address, data);
}

void load(int address) {
    memory->readFrom(address);
}


int main() {

    memory = std::make_shared<Memory>();

    std::thread readThread(load, 13); 
    std::thread writeThread(store, 13, 157); 

    readThread.join();
    writeThread.join();
    
    return 0;
}

