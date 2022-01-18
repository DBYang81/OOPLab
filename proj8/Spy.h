//
// Created by DBY on 27.11.2021.
//

#ifndef PROJ8_SPY_H
#define PROJ8_SPY_H
#include "Person.h"

using namespace std;

class Spy: public Person {
public:
    Spy(string _name, string _alias, int _res);
    void identity() const override;
    void interrogate() override;
    void set_identity(const char* alias);

private:
    string name;
    string alis;
    int res;
};

#endif //PROJ8_SPY_H
