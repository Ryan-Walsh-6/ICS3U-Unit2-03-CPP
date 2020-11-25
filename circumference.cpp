// Copyright (c) 2020 Ryan Walsh All rights reserved
//
// Created by Ryan Walsh
// Created on November 22 2020
// This program calculates the circumference of a circle

#include <iostream>

int main() {
    // this function calculates the circumference of a circle
    const double TAU = 6.28;
    int radius;
    double circumference;


    // input
    std::cout << "Enter the radius of a circle (cm): ";
    std::cin >> radius;

    // process
    circumference = TAU*radius;


    // output
    std::cout << std::endl;
    std::cout << "Circumference is " << circumference << "cm" << std::endl;
}
