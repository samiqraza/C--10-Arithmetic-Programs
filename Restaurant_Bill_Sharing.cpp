#include <iostream>
using namespace std;

int main()
{
    float totalBill, eachFriend;
    int friends;

    cout << "Enter total bill and number of friends: ";
    cin >> totalBill >> friends;

    eachFriend = totalBill / friends;

    cout << "Each Friend Will Pay = Rs. " << eachFriend;

    return 0;
}
