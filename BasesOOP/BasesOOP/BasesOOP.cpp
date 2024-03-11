#include <iostream>
#include <string>

class Square {
public:
    static int square(int num) {
        return num * num;
    }
};

class Greeter {
private:
    std::string name;
public:
    Greeter(std::string name) {
        this->name = name;
    }
    void greet() {
        std::cout << this->name << "! Welcome to the C++ community :)" << std::endl;
    }
};

class Coordinates {
private:
    float latitude;
    float longitude;
public:
    void set_latitude(float lat) {
        latitude = lat;
    }
    void set_longitude(float lon) {
        longitude = lon;
    }
    float get_latitude() const {
        return latitude;
    }
    float get_longitude() const {
        return longitude;
    }
};

class Coordinate {
public:
    Coordinate() {
        std::cout << "Constructor called!" << std::endl;
    }
    ~Coordinate() {
        std::cout << "Destructor called!" << std::endl;
    }
};

int main() {
    int choice;
    std::cout << "Choose an exercise to run:" << std::endl;
    std::cout << "1. Print and find the square of numbers from 1 to 10" << std::endl;
    std::cout << "2. Greet new users with a welcoming message" << std::endl;
    std::cout << "3. Demonstrate information hiding through getters and setters" << std::endl;
    std::cout << "4. Demonstrate the use of constructors and destructors" << std::endl;
    std::cin >> choice;

    switch (choice) {
    case 1: {
        for (int i = 1; i <= 10; ++i) {
            std::cout << i << "*" << i << ": " << Square::square(i) << std::endl;
        }
        break;
    }
    case 2: {
        std::string userName;
        std::cout << "Enter your name: ";
        std::cin >> userName;
        Greeter greeter(userName);
        greeter.greet();
        break;
    }
    case 3: {
        Coordinates coords;
        coords.set_latitude(40.7128);
        coords.set_longitude(-74.0060);
        std::cout << "Latitude: " << coords.get_latitude() << std::endl;
        std::cout << "Longitude: " << coords.get_longitude() << std::endl;
        break;
    }
    case 4: {
        Coordinate coordinate;
        break;
    }
    default: {
        std::cout << "Invalid choice!" << std::endl;
        break;
    }
    }
    return 0;
}