#include <iostream>
#include <random>

int mean(const int *arr, int n);
int main(){
    int size = 0;
    int result;
    std::cout << "How many numbers?" << std::endl;
    std:: cin >> size;
    int *a;
    a = new int [size];
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(0,99);

    for(int i = 0; i < size; i++){
        a[i] = dist(gen);
        std::cout << a[i];
        std::cout << ' ';
    }
    result = mean(a, size);
    std::cout << std::endl;
    std:: cout << "The mean of numbers is "<< result << std::endl;
    delete []a;
    return 0;
}

int mean(const int *arr, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum / n;
}