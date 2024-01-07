#include <iostream>
#include <string>

class Lepton {
private:
    std::string name;
    double charge;  // Elementary charge in units of electron charge (e)

public:
    // Constructor
    Lepton(const std::string& particleName, double particleCharge)
        : name(particleName), charge(particleCharge) {}

    // Destructor (if needed)
    ~Lepton() {
        // Cleanup code, if any
    }

    // Member function to get the lepton's name
    std::string getName() const {
        return name;
    }

    // Member function to get the lepton's charge
    double getCharge() const {
        return charge;
    }

    // Member function to simulate lepton interaction
    void interact() {
        std::cout << "Lepton " << name << " interacts through weak force." << std::endl;
        // Additional interaction logic can be added here
    }
};

// Derived class for electrons
class Electron : public Lepton {
public:
    // Constructor
    Electron() : Lepton("Electron", -1.0) {}  // Electron has a negative charge

    // Additional member functions or overrides specific to electrons can be added here
};

// Derived class for muons
class Muon : public Lepton {
public:
    // Constructor
    Muon() : Lepton("Muon", -1.0) {}  // Muon also has a negative charge

    // Additional member functions or overrides specific to muons can be added here
};

// Derived class for taus
class Tau : public Lepton {
public:
    // Constructor
    Tau() : Lepton("Tau", -1.0) {}  // Tau also has a negative charge

    // Additional member functions or overrides specific to taus can be added here
};