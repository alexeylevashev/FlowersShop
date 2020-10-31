#pragma once
#include <string>
#include "BusTicket.h"
#include "Date.h"
using namespace std;

class Florist {
public:
    int Salary;
    Date dateOfBirth;
    bool canWorkOnLine;
    BusTicket busTicket;

    Florist(){}
    Florist(int Salary, Date dateOfBirth, bool canWorkOnLine, BusTicket busTicket){
        this->Salary=Salary;
        this->dateOfBirth=dateOfBirth;
        this->canWorkOnLine=canWorkOnLine;
        this->busTicket=busTicket;
    }
};