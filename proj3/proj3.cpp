#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    vector<double> vec;
    double num;

    cout << "Enter your numbers(Neg.for quit): " << endl;
    do{
        cin >> num;
        while(!cin){
            cout << "Wrong type!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cin >> num;
        }
        if(num < 0){
            break;
        }
        vec.push_back(num);
    }while(num >= 0);
    sort(vec.begin(), vec.end());

    for(vector<double>::iterator i = vec.begin(); i != vec.end(); ++i){
        cout << fixed << setprecision(3) << *i << endl;
    }
    return 0;
}
