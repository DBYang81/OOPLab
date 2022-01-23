#include "CounterUser.h"
#include "OverflowCounter.h"
#include "LimitedCounter.h"

using namespace std;

int main(int argc, char** argv) {
    CounterUser cu (5);
    cu.IncrementBy(12);
    CounterUser cu2(9);
    cu2.IncrementBy(9);
    cout << "Just passing time" << endl;
    cu2.IncrementBy(1);
    return 0;
}

