#include "include/customer.hpp"

Customer::Customer(){
    name = "";
}

std::string Customer::toString(){
    std::ostringstream ss;
    ss << this;
    return ss.str();
}

std::ostream &operator<<(std::ostream &os, const Customer &rhs) {
    if (rhs.name == ""){
        os << "no renter known";
    }else{
        os << "name of renter: " << rhs.name << " (discount: " << rhs.discountPercentage << "%)";
    }
    os << "\n";
    return os;
}
