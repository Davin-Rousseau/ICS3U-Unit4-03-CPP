// Copyright (c) 2019 Davin Rousseau All rights reserved
//
// Created by: Davin Rousseau
// Created on October 2019
// this program uses a while loop
// To calculate the factorial of a given number

#include <iostream>
#include <string>
#include <cmath>

int main() {
    // this function calculates the factorial of a number
    std::string number;
    int numberInput;
    int loopCounter = 0;
    int answer = 0;

    // input
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    // process and output
    try {
        numberInput = std::stoi(number);
        if (numberInput > 0) {
            for (loopCounter = 0; loopCounter < numberInput; loopCounter++) {
                answer = pow(loopCounter, 2);
                std::cout << loopCounter << "^2 = " << answer << std::endl;
            }
    } else {
        std::cout << "Invalid input.";
    }
    return 0;
}   catch (std::invalid_argument) {
        std::cout << "Invalid input.";
    }
}
