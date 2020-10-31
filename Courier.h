#pragma once
#include <string>
#include "BusTicket.h"
#include "Bike.h"
#include "Date.h"
using namespace std;

class Courier {
public:
    int Salary;
    Date dateOfBirth;
    bool canWorkOnLine;
    BusTicket busTicket;
    Bike bike;

    Courier(){}
    Courier(int Salary, Date dateOfBirth, bool canWorkOnLine, BusTicket busTicket, Bike bike){
        this->Salary=Salary;
        this->dateOfBirth=dateOfBirth;
        this->canWorkOnLine=canWorkOnLine;
        this->busTicket=busTicket;
        this->bike=bike;
    }
};


