#include "include/car.hpp"
#include <sstream>

Car::Car(){
    type = "";
}

std::string Car::toString() const{
    std::ostringstream s;
    s << *this;
    return s.str();
}

std::ostream &operator<<(std::ostream &os, const Car &rhs) {
    if(rhs.type == ""){
        os << "no known car";
    }else{
        os << "car type: " << rhs.type << " with day price: " << rhs.dayPrice;
    }
    os << "\n";
    return os;
}


