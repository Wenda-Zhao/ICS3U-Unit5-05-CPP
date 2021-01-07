// Copyright (c) 2020 St. Mother Teresa HS All rights reserved.
//
// Created by: Wenda Zhao
// Created on: Jan 2021
// This program for address

#include <iostream>

    std::string addressee;
    std::string question;
    std::string apt_number;
    std::string street_number;
    std::string street_name;
    std::string city;
    std::string province;
    std::string postal_code;
    std::string full_address;
    std::string address;

std::string CalculateAddress() {
    // This function is make address

    // process & output
    if (apt_number != "") {
        address = addressee + "\n" + apt_number + "\n" + street_number + " "
        + street_name + "\n" + city + "\n" + province + "\n" + postal_code;
    } else {
        address = addressee + "\n" + street_number + " " + street_name + "\n"
        + city + "\n" + province + "\n" + postal_code;
    }

    return address;
}


int main() {
    // This function is get input

    // input
    std::cout << "Enter your name:";
    std::cin >> addressee;
    std::cout << "Do you have Apt. Number?(y/n):";
    std::cin >> question;
    if (question == "y") {
        std::cout << "Enter your Apt. Number:";
        std::cin >> apt_number;
    } else {
        apt_number = "";
    }
    std::cout << "Enter your Street number:";
    std::cin >> street_number;
    std::cout << "Enter your Street name:";
    std::cin >> street_name;
    std::cout << "Enter your City:";
    std::cin >> city;
    std::cout << "Enter your Province:";
    std::cin >> province;
    std::cout << "Enter your Postal Code:";
    std::cin >> postal_code;

    // call function
    full_address = CalculateAddress();

    // output
    std::cout << full_address;
}
