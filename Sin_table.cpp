// Copyright (c) 2022 Daniel Momoh All rights reserved.
// Created by: Daniel Momoh
// Created on: Nov. 17, 2022
// This program asks the user to input an integer
// and calculates the sin of the integer
#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    do {
        // Variables declaration
        int counter = -1;
        float sum = 0;
        std::string user_input_as_a_string;
        int user_input;
        // get user input
        std::cout << "Enter a positive integer from 0 - 360 : ";
        std::cin >> user_input_as_a_string;
        // check to see if user_input_as_a_string is an integer
        try {
            user_input = std::stoi(user_input_as_a_string);
        }
        // if not an integer ask user to input a positive integer
        catch(const std::exception& e)
        { std::cout << "This is a string." << std::endl;
            continue;
        }
        // checks to see if the number is negative or not/n
        // if negative it loops back to get user input/n
        if (user_input < 0) {
            std::cout << "This is a negative number." << std::endl;
            continue;
        // checks to see if the number is above 360/n
        // if above 360 it loops back to get user input/n
        } else if (user_input > 360) {
            std::cout << "This exceeds 360." << std::endl;
            continue;
        // calculates the sin of the user input and/n
        // loops till it get to number inputted
        } while (user_input > counter) {
            counter = counter + 1;
            sum = sin(counter);
            std::cout << "The sin of " << counter;
            std::cout << " is equal to " << sum << std::endl;
            std::cout << std::fixed << std::setprecision(4);
        }
    break;
    } while (true);
    std::cout << "Thanks for playing" << std::endl;
}
