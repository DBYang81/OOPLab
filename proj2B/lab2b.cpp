#include <iostream>
#include <vector>

std::string find_longest(std::vector<std::string> &input_str);

int main() {
    std::vector<std::string> input_str;
    std::string tmp;

    do{
        std::cout << "Enter your strings(stop for quit):" << std::endl;
        std::getline(std::cin, tmp);
        if(tmp == "stop"){
            break;
        }
        input_str.push_back(tmp);
    }while(tmp != "stop");

    for(const auto &elem: input_str) {
        std::cout << "Your entered string: " << elem << std::endl;
    }
    std::cout << "# The number of strings is: " << input_str.size() << std::endl;

    std::cout << "# the longest string is: " << find_longest(input_str) << std::endl;
    std::cout << "# its length is: " << find_longest(input_str).length() << std::endl;
    std::cout << "# size of the vector: " << input_str.size() << std::endl;
    std::cout << "# capacity of the vector: " << input_str.capacity() << std::endl;

    return 0;
}

std::string find_longest(std::vector<std::string> &input_str){
    int max = 0;
    std::string str;

    for(auto &elem : input_str) {
        if (elem.size() > max) {
            max = elem.length();
            str = elem;
        }
    }
    return str;
}