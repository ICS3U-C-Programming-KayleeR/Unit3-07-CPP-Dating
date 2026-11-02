// Copyright (c) 2026 Kaylee R All rights reserved.
// .
// Created by: Kaylee R
// Date: 27,10,2026
// This program This program gets the users age and
// checks if they are eligible to date
// the grandparents grandchild.

#include <iostream>
#include <string>
#include <cstdlib>


// declare constants
const int MIN_AGE = 25;
const int MAX_AGE = 40;

int main() {
    // declare variables
    int age_int;
    std::string age_str;

    // ask the user for their age
    std::cout <<"Enter your age: ";
    std::cin >> age_str;

    // try to cast the variable to an integer
    try {
        age_int = std::stoi(age_str);

        // check if age input is valid
        if (age_int > 120) {
            std::cout <<"No human can live that long";
        } else if (age_int < 0) {
            std::cout <<"Your age can not be a negative number";
        } else if (age_int > MIN_AGE && age_int < MAX_AGE) {
            std::cout <<"You are eligable for my grandchild";
        } else {
            std::cout <<"You are not eligable for my grandchild";
        }
    }catch (std::invalid_argument) {
        std::cout << age_str << " is not a valid input";
}
}
