#include <iostream>
#include <string>

class Gluon {
private:
    // Properties of the gluon
    std::string colorCharge;

public:
    // Constructor
    Gluon(const std::string& color) : colorCharge(color) {}

    // Destructor (if needed)
    ~Gluon() {
        // Cleanup code, if any
    }

    // Member function to get the color charge
    std::string getColorCharge() const {
        return colorCharge;
    }

    // Member function to simulate gluon interaction with quarks
    void interactWithQuark(const std::string& quarkColor) {
        std::cout << "Gluon with color charge " << colorCharge
                  << " interacts with quark with color charge " << quarkColor << std::endl;
        // Additional interaction logic can be added here
    }
};

