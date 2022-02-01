/* Dongbin Yang Lab12 */

#include "UniqueRng.h"
#include <vector>
#include <algorithm>

using namespace std;
void test_generator(UniqueRng ur, int count);


int main(void) {
    UniqueRng randGen(5, 13);

    test_generator(randGen, 6);
    test_generator(randGen, 9);
    test_generator(randGen, 13);

//    UniqueRng randGen2(1, 35);
//    test_generator(randGen2, 7);
//    test_generator(randGen2, 7);
//    test_generator(randGen2, 7);
//    test_generator(randGen2, 70);

    return 0;
}

void test_generator(UniqueRng ur, int count){
    cout << "Generating numbers:"<< endl;
    vector<unsigned int> numbers;
    vector<unsigned int> ::iterator it;
    int range = ur.range();
    try{
        for(int i = 0; i < count; i++){
            unsigned int ret = ur();
            it = find(numbers.begin(),numbers.end(),ret);
            if(it == numbers.end()){
                numbers.push_back(ret);
                range--;
            }else{
                if(range == 0) {
                    throw runtime_error("Unable to produce unique random number");
                }
                i--;
            }
        }
    }catch(runtime_error &e) {
        cout<<"Exception:" << e.what() << endl;
        cout<<"Tried to generate "<< count <<" random numbers. Got only " << numbers.size() <<endl;
    }
    copy(numbers.begin(), numbers.end(), ostream_iterator<int>(cout, "\n"));
    cout <<"End of generator" <<endl;
}
