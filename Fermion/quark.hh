#include <iostream>
#include <string>

class Quark {
private:
    // Properties of the quark
    std::string flavor;
    double charge;  // Electric charge in terms of elementary charge (e.g., +2/3 or -1/3)
    double mass;    // Mass of the quark in MeV/c^2

public:
    // Constructor
    Quark(const std::string& quarkFlavor, double quarkCharge, double quarkMass)
        : flavor(quarkFlavor), charge(quarkCharge), mass(quarkMass) {}

    // Destructor (if needed)
    ~Quark() {
        // Cleanup code, if any
    }

    // Member function to get the flavor of the quark
    std::string getFlavor() const {
        return flavor;
    }

    // Member function to get the electric charge of the quark
    double getCharge() const {
        return charge;
    }

    // Member function to get the mass of the quark
    double getMass() const {
        return mass;
    }

    // Member function to simulate quark interaction with gluons
    void interactWithGluon(const std::string& gluonColorCharge) {
        std::cout << "Quark with flavor " << flavor
                  << " interacts with gluon with color charge " << gluonColorCharge << std::endl;
        // Additional interaction logic can be added here
    }
};
