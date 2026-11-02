#include <iostream>
using namespace std;

int main()
{
    int years, months, weeks, days;

    cout << "Enter your age in years: ";
    cin >> years;

    months = years * 12;
    weeks = years * 52;
    days = years * 365;

    cout << "Age in Months = " << months << endl;
    cout << "Age in Weeks = " << weeks << endl;
    cout << "Age in Days = " << days;

    return 0;
}
