#include <iostream>
#include <string>
#include <vector>

class LamborghiniDiablo {
private:
    std::string color;
    int cubicCapacity;
    int numberOfSeats;
    int yearOfManufacture;
    std::string engineNumber;
    std::string frameNumber;
    std::vector<std::string> ownerNames;  // Dynamic array for storing owner names

public:
    // Constructor to initialize all attributes
    LamborghiniDiablo(std::string clr, int cc, int seats, int year, std::string engineNum, std::string frameNum, std::vector<std::string> owners)
        : color(clr), cubicCapacity(cc), numberOfSeats(seats), yearOfManufacture(year), engineNumber(engineNum), frameNumber(frameNum), ownerNames(owners) {}

    // Copy constructor
    LamborghiniDiablo(const LamborghiniDiablo &car)
        : color(car.color), cubicCapacity(car.cubicCapacity), numberOfSeats(car.numberOfSeats) {
        // Only copying the common attributes (color, cubicCapacity, numberOfSeats)
    }

    // Method to set the remaining attributes
    void setAttributes(int year, std::string engineNum, std::string frameNum, std::vector<std::string> owners) {
        yearOfManufacture = year;
        engineNumber = engineNum;
        frameNumber = frameNum;
        ownerNames = owners;
    }

    // Method to display car details
    void display() const {
        std::cout << "Color: " << color << "\n"
                  << "Cubic Capacity: " << cubicCapacity << "\n"
                  << "Number of Seats: " << numberOfSeats << "\n"
                  << "Year of Manufacture: " << yearOfManufacture << "\n"
                  << "Engine Number: " << engineNumber << "\n"
                  << "Frame Number: " << frameNumber << "\n"
                  << "Owners: ";
     
};

int main() {
    // Create an instance named car1
    std::vector<std::string> owners1 = {"John Doe"};
    LamborghiniDiablo car1("Red", 5700, 2, 1999, "ENG12345", "FRM67890", owners1);

    // Use the copy constructor to create car2, then set the remaining attributes
    LamborghiniDiablo car2 = car1;
    std::vector<std::string> owners2 = {"Jane Smith"};
    car2.setAttributes(2001, "ENG54321", "FRM09876", owners2);

    // Display the details of car1 and car2
    std::cout << "Car 1 Details:\n";
    car1.display();

    std::cout << "\nCar 2 Details:\n";
    car2.display();

    return 0;
}