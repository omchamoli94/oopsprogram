#include <iostream>
#include <string>
using namespace std;

double calculateBill(int units)
{
    double totalCharge = 0.0;

    if (units <= 100)
    {
        totalCharge = units * 0.60; 
    }
    else if (units <= 300)
    {
        totalCharge = 100 * 0.60 + (units - 100) * 0.80; 
    }
    else
    {
        totalCharge = 100 * 0.60 + 200 * 0.80 + (units - 300) * 0.90; 
    }

    if (totalCharge < 50)
    {
        totalCharge = 50;
    }


    if (totalCharge > 300)
    {
        totalCharge += totalCharge * 0.15;
    }

    return totalCharge;
}

int main()
{
    string name;
    int units;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter the number of units consumed: ";
    cin >> units;

    double billAmount = calculateBill(units);

    cout << "NAME- " << name << "! Your electricity bill is Rs ";
    cout << (billAmount * 100 + 0.5) / 100.0 << endl;

    return 0;
}
