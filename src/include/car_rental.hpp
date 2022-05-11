#pragma once
#include "customer.hpp"
#include "car.hpp"
#include <ostream>
#include <sstream>

/**
 * @brief Car rental represents a contract. It contains a car, the amount of days it is 
 * rented and a customer.
 * 
 */
class CarRental{
    private:
    int rentalDays;
    Customer renter;
    Car rentedCar;
    public:
    CarRental();

    CarRental(Car car, Customer renter, int days):
        rentalDays(days),
        renter(renter),
        rentedCar(car){};

    void setRentalDays(int rentalDays_) { rentalDays = rentalDays_; }

    Car getRentedCar() const { return rentedCar; }
    void setRentedCar(const Car &rentedCar_) { rentedCar = rentedCar_; }

    Customer getRenter() const { return renter; }
    void setRenter(const Customer &renter_) { renter = renter_; }

    /**
     * @brief returns the total price
     * 
     * @return price per day times amount of days 
     */
    double totalPrice() const;

    /**
     * @brief To string just because we've been so used to it, and we want to make you feel at home.
     * @deprecated always use <<
     * 
     * @return std::string 
     */
    std::string toString();

    friend std::ostream &operator<<(std::ostream &os, const CarRental &rhs);



};