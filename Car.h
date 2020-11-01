#pragma once
#include <string>

using namespace std;
class Car {
public:
    int numberOfGears;
    bool automaticTransmission;
    int numberOfDoors;

    Car(){}
    Car(int numberOfGears, bool automaticTransmission, int numberOfDoors) {
        this->numberOfGears=numberOfGears;
        this->automaticTransmission=automaticTransmission;
        this->numberOfDoors=numberOfDoors;
    }
};
