#include<iostream>
int main(){
    int i;
    int petya;
    int vasya;
    int tonya;
    int count;
    int total{};
    std::cin >> count;
    for(i=0; i<count; i++)
    {
        std::cin >> petya;
        std::cin >> vasya;
        std::cin >> tonya;
        if((petya && vasya)==1 || (petya && tonya)==1 || (vasya && tonya)==1)
        {
        total=total+1;
        }
    }
    std::cout << total;
}