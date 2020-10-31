#pragma once
#include <string>

using namespace std;



class BusTicket {
public:
    int price;
    bool forAllPublicTransport;
    int numberOfDays;

    BusTicket(){}
    BusTicket(int price, bool forAllPublicTransport, int numberOfDays) {
        this->price=price;
        this->forAllPublicTransport=forAllPublicTransport;
        this->numberOfDays=numberOfDays;
    }
};