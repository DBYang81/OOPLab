//
// Created by Yang on 1/3/22.
//
#pragma once
#ifndef FINAL_PROJECTIII_PERSON_H
#define FINAL_PROJECTIII_PERSON_H
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include <sstream>



class Person{
public:
    Person();
    ~Person(){};
    void setName();
    void setEmail();
    void setPhone();
    void setCity();
    void setRelatives();

    std::string getFullName();
    std::string getEmail();
    std::string getPhone();
    std::string getCity();
    std::vector<std::string> getRelatives();

    void accessName(std::string s);
    void accessEmail(std::string s);
    void accessPhone(std::string s);
    void accessCity(std::string s);
    void accessRelative(std::string s);
    void vectorClean();

private:
    std::string fullName;
    std::string email;
    std::string phone;
    std::string city;
    std::vector<std::string> relatives;
};

#endif //FINAL_PROJECTIII_PERSON_H
