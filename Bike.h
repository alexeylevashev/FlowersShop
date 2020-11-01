#pragma once
#include <string>

using namespace std;
class Bike {
public:
    int numberOfGears;
    bool folding;
    int weight;

    Bike(){}
    Bike(int numberOfGears, bool folding, int weight) {
        this->numberOfGears=numberOfGears;
        this->folding=folding;
        this->weight=weight;
    }
};
