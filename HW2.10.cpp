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

 20 gallons
 10 miles per gallon
 $5 per gallon 

 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double gallons, miles_per_gallon, price_per_gallon;
	cout << "The number of gallons of gas in the tank: ";
	cin >> gallons;
	cout << "Fuel efficiency in miles per gallon: ";
	cin >> miles_per_gallon;
	cout << "The price of gas per gallon: ";
	cin >> price_per_gallon;
	//print the cost per 100 miles//
	int cost_per_100miles;
	cost_per_100miles = (100 / miles_per_gallon) * price_per_gallon;
	cout << "The cost per 100 miles is" << " " << cost_per_100miles;
	//how far the car can go with the gas in the tank//
	int distance = gallons * miles_per_gallon;
	cout << "\nThe car can go" << " " << distance << " " << "miles with the gas in the tank";

	return 0;
}
