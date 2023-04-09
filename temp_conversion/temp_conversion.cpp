#include <iostream>
using namespace std;

// function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

// function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return celsius * 9 / 5 + 32;
}

int main() {
    int choice;
    double temperature;

    cout << "Type 1 to convert Fahrenheit to Celsius," << endl;
    cout << "2 to convert Celsius to Fahrenheit: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        double celsius = fahrenheitToCelsius(temperature);
        cout << "In Celsius that's " << celsius << endl;
    } else if (choice == 2) {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        double fahrenheit = celsiusToFahrenheit(temperature);
        cout << "In Fahrenheit that's " << fahrenheit << endl;
    } else {
        cout << "Invalid choice" << endl;
    }

    return 0;
}




