#pragma once
#include <iostream>
#include <string>

class Car{
    private:
    std::string type;
    double dayPrice;
    
    public:
    Car();
    Car(std::string type, double dayPrice):
        type(type),
        dayPrice(dayPrice){};
    void setDayPrice(double dayPrice);
    double getDayPrice() const{return dayPrice;}
    std::string toString() const;
    friend std::ostream &operator<<(std::ostream &os, const Car &rhs);

};