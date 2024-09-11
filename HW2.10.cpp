/* 
Author: Rahat Hassan
Course: CSCI-135
Instructor: Tong Yi
Assignment: HW 2.10

Write a program that asks the user to input
 • The number of gallons of gas in the tank
 • The fuel efficiency in miles per gallon
 • The price of gas per gallon
 Then print the cost per 100 miles and how far the car can go with the gas in the tank


 */
#include <iostream>
#include <iomanip> // For setting decimal precision

using namespace std;

int main() {
    double gallons, miles_per_gallon, price_per_gallon;
    
    cout << "The number of gallons of gas in the tank: ";
    cin >> gallons;
    
    cout << "Fuel efficiency in miles per gallon: ";
    cin >> miles_per_gallon;
    
    cout << "The price of gas per gallon: ";
    cin >> price_per_gallon;
    
    // Calculate cost per 100 miles
    double cost_per_100miles = (100.0 / miles_per_gallon) * price_per_gallon;
    
    // Calculate the distance that can be traveled with the current gallons of gas
    double distance = gallons * miles_per_gallon;
    
    // Set decimal precision for output
    cout << fixed << setprecision(2);
    
    cout << "The cost per 100 miles is $" << cost_per_100miles << " and the car can go " << distance << " miles with the gas in the tank" << endl;
    
    return 0;
}
