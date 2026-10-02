#include<iostream>
int main(){
    long long m{};
    long long n{};
    long long a{};
    long long output{};
    std::cin >> m >> n >> a;
    output=((m+a-1)/a * ((n+a-1)/a));
    std::cout << output;
}