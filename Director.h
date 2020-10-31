#pragma once
#include <string>
#include "BusTicket.h"
#include "Car.h"
#include "Bike.h"
#include "Date.h"
using namespace std;

class Director {
public:
    int Salary;
    Date dateOfBirth;
    bool canWorkOnLine;
    Car car;
    BusTicket busTicket;
    Bike bike;

    Director(){}
    Director(int Salary, Date dateOfBirth, bool canWorkOnLine, Car car, BusTicket busTicket, Bike bike){
        this->Salary=Salary;
        this->dateOfBirth=dateOfBirth;
        this->canWorkOnLine=canWorkOnLine;
        this->car=car;
        this->busTicket=busTicket;
        this->bike=bike;
    }
};


