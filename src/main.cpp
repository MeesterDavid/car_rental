#include "include/car_rental.hpp"

using std::cout, std::endl;

int main()
{
    cout << "First car rental" << endl;
    CarRental ah1 = CarRental();
    cout << ah1;

    cout << "First car rental" << endl;
    Customer k = Customer("Mijnheer de Vries");
    k.setDiscount(10.0);
    ah1.setRenter(k);
    cout << ah1;

    cout << "First car rental" << endl;
    Car a1 = Car("Peugeot 207", 50);
    ah1.setRentedCar(a1);
    ah1.setRentalDays(4);
    cout << ah1;

    cout << "Second car rental" << endl;
    CarRental ah2 = CarRental();
    Car a2 = Car("Ferrari", 3500);
    ah2.setRentedCar(a2);
    ah2.setRenter(k);
    ah2.setRentalDays(1);
    cout << ah2;

    cout << ah2.toString();

    return 0;
}