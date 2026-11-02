#include <iostream>
using namespace std;

int main()
{
    int notebookQuantity, penQuantity;
    float notebookPrice, penPrice, totalBill;

    cout << "Enter notebook price, notebook quantity, pen price and pen quantity: ";
    cin >> notebookPrice >> notebookQuantity >> penPrice >> penQuantity;

    totalBill = (notebookPrice * notebookQuantity) + (penPrice * penQuantity);

    cout << "Total Shopping Bill = Rs. " << totalBill;

    return 0;
}
