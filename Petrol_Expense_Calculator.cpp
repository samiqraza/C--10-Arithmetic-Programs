#include <iostream>
using namespace std;

int main()
{
    float distance, average, petrolPrice;
    float petrolConsumed, totalCost;

    cout << "Enter distance, average km per litre and petrol price: ";
    cin >> distance >> average >> petrolPrice;

    petrolConsumed = distance / average;
    totalCost = petrolConsumed * petrolPrice;

    cout << "Petrol Consumed = " << petrolConsumed << " Litres" << endl;
    cout << "Total Petrol Cost = Rs. " << totalCost;

    return 0;
}
