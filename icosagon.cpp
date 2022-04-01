// Copyright (c) 2022 Coffi All rights reserved.
// Created by: Marc Coffi
// Date: March, 2022
// This program calculates
// the area and perimeter of a Icosagon

#include <iostream>
#include <cmath>

int main() {
    // Declaring variables
    int userInput;

    // Greeting message
    std::cout << "Welcome, This program calculate ";
    std::cout << "the area and perimeter of a Icosagon.\n";

    // input
    std::cout << "Enter length (cm) : ";
    std::cin >> userInput;

    // Calculate area and perimeter and display results
    float Area = 5* pow(userInput, 2)*(1+sqrt(5)+sqrt(5+2*sqrt(5)));
    float Perimeter = 20*userInput;
    std::cout << "The Area is " << Area << "cm^2.\n";
    std::cout << "The perimeter is " << Perimeter << "cm.\n";
}
