#include<iostream>
int main(){
    std::cout << "Input the value of X:";
    int x{};
    std::cin >> x;
    std::cout << "Input the value of Y:";
    int y{};
    std::cin >> y;
    int sum{};
    sum = x+y;
    std::cout << "The sum of the Two value is: " << sum;
    return 0;
}