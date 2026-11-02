#include <iostream>
using namespace std;

int main()
{
    float purchasePrice, sellingPrice;
    float totalPurchase, totalSales, profitLoss;
    int quantity;

    cout << "Enter purchase price, selling price and quantity: ";
    cin >> purchasePrice >> sellingPrice >> quantity;

    totalPurchase = purchasePrice * quantity;
    totalSales = sellingPrice * quantity;
    profitLoss = totalSales - totalPurchase;

    cout << "Total Purchase Cost = Rs. " << totalPurchase << endl;
    cout << "Total Sales Revenue = Rs. " << totalSales << endl;
    cout << "Profit or Loss Amount = Rs. " << profitLoss;

    return 0;
}
