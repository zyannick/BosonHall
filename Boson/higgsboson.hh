#include <iostream>
#include <string>

class HiggsBoson {
private:
    std::string name;
    double mass;  // in GeV/c^2
    int charge;   // electric charge

public:
    // Constructor
    HiggsBoson(const std::string& particleName, double particleMass, int particleCharge) 
        : name(particleName), mass(particleMass), charge(particleCharge) {}

    // Member functions
    void displayInfo() const {
        std::cout << "Particle: " << name << "\n";
        std::cout << "Mass: " << mass << " GeV/c^2\n";
        std::cout << "Electric Charge: " << charge << "e\n";
    }

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
};


