#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;
void backwards(vector<string> &vec);

int main() {
    vector<string> vec_str;
    string str_tmp;

    cout << "Enter a string(stop for quit): " << endl;
    do{
        cin >> str_tmp;
        if(str_tmp == "stop"){
            break;
        }
        vec_str.push_back(str_tmp);

    }while(str_tmp != "stop");

    cout << "Original content of the vector: " << endl;
    for(const auto& elem:vec_str){
        cout << elem << endl;
    }
    backwards(vec_str);
    cout << "After backwards function call: " << endl;
    for(const auto& elem:vec_str){
        cout << elem << endl;
    }
    return 0;
}

void backwards(vector<string> &vec){
    for(auto &elem:vec)
        reverse(elem.begin(), elem.end());
    sort(vec.begin(),vec.end(), greater<string>());
}