#include <iostream>
#include <string>

class WBoson {
private:
    // Properties of the W boson
    std::string name;
    double mass; // in GeV
    int charge;  // +1 or -1

public:
    // Constructor
    WBoson(std::string n, double m, int c) : name(n), mass(m), charge(c) {}

    // Getter functions
    std::string getName() const {
        return name;
    }

    double getMass() const {
        return mass;
    }

    int getCharge() const {
        return charge;
    }

    // Function to simulate the decay of the W boson
    void decay() {
        std::cout << name << " boson is decaying into other particles." << std::endl;
        // Add code for the decay process if needed
    }

    // Function to display information about the W boson
    void displayInfo() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Mass: " << mass << " GeV" << std::endl;
        std::cout << "Charge: " << charge << std::endl;
    }
};

