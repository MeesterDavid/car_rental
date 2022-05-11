#include "include/car_rental.hpp"

CarRental::CarRental(){
    renter = Customer();
    rentedCar = Car();
    rentalDays = 0;
};

double CarRental::totalPrice() const{
    return rentedCar.getDayPrice()*rentalDays;
}

std::string CarRental::toString(){
    std::ostringstream ss;
    ss << *this;
    return ss.str();
}

// int j = 25;
// int& p = j;
// int* k = &j; 

std::ostream &operator<<(std::ostream &os, const CarRental& rhs) {
    os << rhs.rentedCar << rhs.renter;
    os << "rental days: " << rhs.rentalDays << " for a price of: " << rhs.totalPrice();
    os << "\n\n";
    return os;
}

