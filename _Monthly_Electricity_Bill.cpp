#include <iostream>
using namespace std;

int main()
{
    float units, pricePerUnit, totalCharges;

    cout << "Enter electricity units and price per unit: ";
    cin >> units >> pricePerUnit;

    totalCharges = units * pricePerUnit;

    cout << "Total Electricity Charges = Rs. " << totalCharges;

    return 0;
}
