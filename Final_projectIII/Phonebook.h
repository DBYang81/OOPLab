//
// Created by Yang on 1/3/22.
//

#ifndef FINAL_PROJECTIII_PHONEBOOK_H
#define FINAL_PROJECTIII_PHONEBOOK_H
#include "Person.h"

class Phonebook {
    friend std::ostream& operator<< (std::ostream& out, Person& p);
    friend std::istream& operator>> (std::istream& in, Person& p);
public:
    Phonebook();
    ~Phonebook(){};
    void menu();
    void initialize();
    void addUser();
    void saveToFile();
    void extractData();
    void read();
    void deletion();
    void searchByCity();
private:
    int index;
    std::vector<Person> contact;
};


#endif //FINAL_PROJECTIII_PHONEBOOK_H
