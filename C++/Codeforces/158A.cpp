#include <iostream>
int main(){
    int n;
    std::cin >> n;
    int k;
    std::cin >> k;
    int i;
    int output{0};
    int score[100];
    for(i=0; i < n; i++)
    {
        std::cin >> score[i];
    }
    for(i=0; i < n; i++)
    {
        if(score[i]>score[k])
        {
            output++;
        }
    }
    std::cout << output;
}