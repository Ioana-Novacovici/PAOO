#pragma once

class Memory {
public:
    Memory();

    void writeTo(int address, int data) const;
    
    int readFrom(int address) const ;

};