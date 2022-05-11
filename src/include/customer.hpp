#pragma once
#include <string>
#include <ostream>
#include <sstream>


class Customer{
    private:
    std::string name;
    double discountPercentage;
    
    public:
    Customer();
    Customer(std::string name):name(name){};
    double getDiscount() const { return discountPercentage; }
    void setDiscount(double discountPercentage_) { discountPercentage = discountPercentage_; }

    std::string toString();
    void setName(const std::string& name_) { name = name_; }
    friend std::ostream& operator<<(std::ostream& os, const Customer& rhs);
}; 