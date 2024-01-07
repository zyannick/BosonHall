#include <iostream>

class Photon {
private:
    double energy;  // Energy of the photon in electron volts (eV)
    double frequency;  // Frequency of the photon in hertz (Hz)
    double wavelength;  // Wavelength of the photon in meters (m)

public:
    // Constructors
    Photon(double energy) : energy(energy) {
        calculateFrequencyAndWavelength();
    }

    // Getter methods
    double getEnergy() const {
        return energy;
    }

    double getFrequency() const {
        return frequency;
    }

    double getWavelength() const {
        return wavelength;
    }

    // Display information about the photon
    void displayInfo() const {
        std::cout << "Photon Information:\n"
                  << "Energy: " << getEnergy() << " eV\n"
                  << "Frequency: " << getFrequency() << " Hz\n"
                  << "Wavelength: " << getWavelength() << " m\n";
    }
    

private:
    // Calculate frequency and wavelength based on energy
    void calculateFrequencyAndWavelength() {
        // Use the relationship E = h * f (energy = Planck's constant * frequency)
        // Also, c = f * λ (speed of light = frequency * wavelength)
        // Combining these two equations, we get E = h * c / λ
        // Solving for frequency f, we get f = E / h, where h is Planck's constant
        const double plancksConstant = 6.62607015e-34;  // Planck's constant in J*s
        const double speedOfLight = 299792458.0;  // Speed of light in m/s

        frequency = energy / plancksConstant;
        wavelength = speedOfLight / frequency;
    }
};
