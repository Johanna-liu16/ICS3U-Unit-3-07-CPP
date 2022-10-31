// Copyright (c) 2022 Johanna Liu All rights reserved
//
// Created by: Johanna Liu
// Created on: Sep 2022
// This program is a random number guessing game

#include <iostream>
#include <string>

int main() {
    // this function generates a random number
    std::string stringUserAge;
    int userAge;

    // input
    std::cout << "This program checks if "
    "you're suitable for dating." << std::endl;
    std::cout << "Enter your age: ";
    std::cin >> stringUserAge;

    // process and output
    try {
        userAge = std::stoi(stringUserAge);
        if (userAge >= 25 && userAge <= 40) {
            std::cout << "Congratulations! You're an acceptable age.";
        } else if (userAge < 0) {
            std::cout << "Invalid Integer";
        } else {
            std::cout << "Sorry, you're not an acceptable age.";
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid Integer.";
    }

    std::cout << std::endl;

    std::cout << "\nDone." << std::endl;
}
