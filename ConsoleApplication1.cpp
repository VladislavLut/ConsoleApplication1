#include <iostream>
#include <stdexcept>

using namespace std;


class FuelCalculator {
private:
    const int FUEL_CAPACITY = 300; 

public:
  
    int calculateFuel(int distanceAB, int distanceBC, int cargoWeight) {
        if (distanceAB < 0 || distanceBC < 0 || cargoWeight > 2000) {
            throw invalid_argument("Invalid input. Distances must be non-negative and cargo weight must be less than or equal to 2000 kg.");
        }

        int fuelConsumption = 0;

        if (cargoWeight <= 500) {
            fuelConsumption = distanceAB + distanceBC;
        }
        else if (cargoWeight <= 1000) {
            fuelConsumption = 4 * (distanceAB + distanceBC);
        }
        else if (cargoWeight <= 1500) {
            fuelConsumption = 7 * (distanceAB + distanceBC);
        }
        else if (cargoWeight <= 2000) {
            fuelConsumption = 9 * (distanceAB + distanceBC);
        }
        else {
            throw invalid_argument("Invalid input. Cargo weight must be less than or equal to 2000 kg.");
        }

        int fuelRequired = fuelConsumption - FUEL_CAPACITY;

        if (fuelRequired <= 0) {
            return 0;
        }
        else {
            return fuelRequired;
        }
    }
};

int main() {
    int distanceAB, distanceBC, cargoWeight;

    cout << "Enter the distance between point A and point B in kilometers: ";
    cin >> distanceAB;

    cout << "Enter the distance between point B and point C in kilometers: ";
    cin >> distanceBC;

    cout << "Enter the weight of the cargo in kilograms: ";
    cin >> cargoWeight;

    FuelCalculator fuelCalculator;

    try {
        int fuelRequired = fuelCalculator.calculateFuel(distanceAB, distanceBC, cargoWeight);
        cout << "Minimum fuel required for refueling at point B: " << fuelRequired << " liters.\n";
    }
    catch (const std::invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
