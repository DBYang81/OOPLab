#include "headers/Counter.h"
#include "headers/LimitedCounter.h"
#include "headers/OverflowCounter.h"
#include <iostream>
#include "headers/Observer.h"

using namespace std;
void UseCounter(Counter& ctr, int num);

int main(int argc, char** argv) {
    LimitedCounter lc(0, 3);
    LimitedCounter lc2(0, 4);
    OverflowCounter oc(0, 2);
    OverflowCounter oc2(0,2);

    Observer ob,ob1,ob2;

    lc.SetObserver(&ob);
    oc.SetObserver(&ob1);
    lc2.SetObserver(&ob2);
    oc2.SetObserver(&ob2);

    cout <<"Output: 2 times: \"The limit has been reached. Counter value is: 3\"\n";
    UseCounter(lc, 4);
    cout <<"Output: 1 times: \"The limit has been reached. Counter value is: 4\"\n";
    UseCounter(lc2,4);
    cout <<"Output: 3 times: \"The limit has been reached. Overflowed value is 0\"\n";
    UseCounter(oc2, 10);
    cout <<"Output: 1 times: \"The limit has been reached. Counter value is: 0\"\n";
    UseCounter(lc, -3);
    cout <<"Output: 1 times: \"The limit has been reached. Counter value is: 2\"\n";
    UseCounter(oc, -3);

    return 0;
}

void UseCounter(Counter& ctr, int num) {
    if (num >= 0) {
        for (int i = 0; i < num; i++) {
            ctr.inc();
        }
    } else {
        for (int i = 0; i > num; i--) {
            ctr.dec();
        }
    }
}
