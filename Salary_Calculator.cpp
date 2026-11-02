#include <iostream>
using namespace std;

int main()
{
    float basicSalary, houseRent, medicalAllowance, grossSalary;

    cout << "Enter basic salary, house rent and medical allowance: ";
    cin >> basicSalary >> houseRent >> medicalAllowance;

    grossSalary = basicSalary + houseRent + medicalAllowance;

    cout << "Gross Salary = Rs. " << grossSalary;

    return 0;
}
