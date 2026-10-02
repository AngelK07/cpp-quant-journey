#include<iostream>
int main()
{
    int row[5][5];
    int output{0};
    int i{0};
    int j{0};
    for(i=0; i < 5 ; i++)
    {
        for(j=0; j < 5; j++)
        {
            std::cin >> row[i][j];
        }
    }
    for(i=0; i < 5; i++){
        for(j=0; j < 5; j++)
        {
            if(row[i][j] == 1)
            {
                output = (abs(2-i)+abs(2-j));
            }
        }
    }
    std::cout << output;
}