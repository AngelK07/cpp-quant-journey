#include<iostream>
#include<string>

int main(){
    int i;
    int count;                                         // we gotta take in count
    std::cin >> count;
    for(i=0; i < count; i++){                          // we do the loop since there are multiple chracters
    std::string word;                                  // takingin word as it progresses
        std::cin >> word;
    char first,last;
    std::size_t len = word.size();
    if(len>10)
    {
        first= word[0];
        last= word[len-1];
        std::cout << first << len-2 << last << '\n';
    }
    else
    {
        std::cout << word << '\n';
    }
    }
}