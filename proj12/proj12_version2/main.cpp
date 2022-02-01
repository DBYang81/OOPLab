
#include <iostream>
#include "UniqueRng.h"

using namespace std;
void test_generator(UniqueRng ur, int count);

int main() {

    UniqueRng randGen(5, 13);

    test_generator(randGen, 6);
    test_generator(randGen, 9);
    test_generator(randGen, 13);

    UniqueRng randGen2(1, 35);
    test_generator(randGen2, 7);
    test_generator(randGen2, 7);
    test_generator(randGen2, 7);
    test_generator(randGen2, 70);

    return 0;
}

void test_generator(UniqueRng ur, int count) {
    vector<unsigned int> n;
    cout << "Generating numbers:" << endl;
    try{
        generate_n(back_inserter(n), count, ur);
    } catch (std::runtime_error &error) {
        cout << "Exception: " << error.what() << endl
             << "Tried to generate " << count << " random numbers. Got only "
             << n.size() << endl;
    }
    for(auto &elem:n){
        cout << elem << endl;
    }
    cout << "End of generator" << endl;
}