//
// Created by Yang on 1/3/22.
//

#include "Person.h"
Person::Person(): fullName(""), email(""), phone(""), city(""), relatives() {}

void Person::setName() {
    std::cout <<"Enter Full Name: ";
    getline(std::cin, fullName);
}

std::string Person::getFullName() {
    return fullName;
}

void Person::accessName(std::string s) {
    fullName = s;
}

void Person::setEmail() {
    std::cout<< "Enter Email: ";
    getline(std::cin, email);
}

std::string Person ::getEmail() {
    return email;
}

void Person::accessEmail(std::string s) {
    email = s;
}

void Person::setPhone() {
    std::cout<<"Enter Phone No.: ";
    bool is_bad;
    do{
        is_bad = false;
        getline(std::cin,phone);
        for(char elem:phone){
            if(!(elem >= '0' && elem <= '9')){
                std::cout << "Invalid Input!" << std::endl;
                std::cout << "Enter again: ";
                is_bad = true;
                break;
            }
        }
    }while(is_bad);
}

std::string Person::getPhone() {
    return phone;
}

void Person::accessPhone(std::string s) {
    phone = s;
}

void Person::setCity() {
    std::cout<<"Enter City: ";
    getline(std::cin, city);
}

std::string Person::getCity() {
    return city;
}
void Person::accessCity(std::string s) {
    city = s;
}

void Person::setRelatives() {
    std::string tmp;
    while(true){
        std::cout<<"Any relatives(0 to skip): ";
        getline(std::cin, tmp);
        if(tmp == "0"){
            break;
        }else{
            relatives.push_back(tmp);
        }
    }
}

std::vector<std::string> Person::getRelatives() {
        return relatives;
}

void Person::accessRelative(std::string s) {
    relatives.push_back(s);
}
void Person::vectorClean() {
    relatives.clear();
}