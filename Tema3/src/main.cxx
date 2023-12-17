#include <iostream>
#include "dataMemory.h"
#include <thread>
#include <memory>
#include <mutex>

int main() {

    std::shared_ptr <Memory> driver1 = std::make_shared<Memory>();
    std::shared_ptr <Memory> driver2 = driver1;
    std::weak_ptr <Memory> memAccess = driver1;

    
    std::thread storeThread1([driver1]() {driver1->writeTo(1, 12);});
    std::thread sumThread1([driver2]() {driver2->computeSum(0, 5);});
    std::thread storeThread2([driver1]() {driver1->writeTo(2, 10);});
   
    std::thread storeThread3([driver1]() {driver1->writeTo(0, 154);});
    std::thread sumThread2([driver2]() {driver2->computeSum(1, 2);});
    
    storeThread1.join();
    storeThread2.join();
    sumThread1.join();
    sumThread2.join();

    if(auto temp = memAccess.lock()) {
        std::cout<<"Memory still open"<< std::endl;
        temp->print();
        }
    else {
        std::cout<<"Memory closed" << std::endl;
    }

    return 0;
}

