#include<iostream>
int mod(int a, int m)
{
    return ((a%m)+m)%m;
}
int main(){
    int a;
    int m;
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter m:";
    std::cin>> m;
    std::cout << mod(a,m);
}