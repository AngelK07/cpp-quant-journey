    #include <iostream>
    #include <string>
    int main()
    {
        int count;
        int i;
        std::string value;
        int total{0};
        std::cin >> count;
        for(i = 0; i < count ; i++)
        {
            std::cin >> value;
            if(value.find("++") != std::string::npos){
                total++;
            }
            if(value.find("--") != std::string::npos){
                total--;
            }
        }
        std::cout << total;
    }