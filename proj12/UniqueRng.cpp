/* Dongbin Yang Lab12 */

#include "UniqueRng.h"

UniqueRng::UniqueRng(unsigned int min, unsigned int max):min(min), max(max) {
    srand(time(NULL));
}

int UniqueRng::operator()() {
    unsigned int num;
    num = rand() % (max - min + 1) + min;
    return num;
}

int UniqueRng::range() {
    return max - min + 1;
}