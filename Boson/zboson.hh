#include <iostream>

class ZBoson {
private:
    double mass;   // Mass of the Z boson in GeV/c^2
    int charge;    // Electric charge of the Z boson (0 for neutral)
    double spin;   // Spin of the Z boson

public:
    // Constructor
    ZBoson(double m, int c, double s) : mass(m), charge(c), spin(s) {}

    // Getter methods
    double getMass() const {
        return mass;
    }

    int getCharge() const {
        return charge;
    }

    double getSpin() const {
        return spin;
    }

    // Methods to simulate interactions
    void decay() {
        // Simulate the decay of the Z boson
        std::cout << "Z boson is decaying.\n";
        // Add your decay simulation logic here
    }

    void interactWithLepton() {
        // Simulate interaction with a lepton
        std::cout << "Z boson is interacting with a lepton.\n";
        // Add your interaction logic here
    }

    // Other methods and behaviors can be added as needed
};


