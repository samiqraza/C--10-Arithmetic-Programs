#include <iostream>
using namespace std;

int main()
{
    float length, width, height, volume, capacity;

    cout << "Enter length, width and height of tank: ";
    cin >> length >> width >> height;

    volume = length * width * height;
    capacity = volume * 1000;

    cout << "Tank Volume = " << volume << " Cubic Meters" << endl;
    cout << "Tank Capacity = " << capacity << " Litres";

    return 0;
}
