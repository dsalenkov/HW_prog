#include <iostream>
#include <string>

int main(){
    std::string door;
    std::cin >> door;
    short a;
    std::cin >> a;
    if(door == "front" && a == 1 || door == "back" && a == 2)
        std::cout << "L";
    else if(door == "front" && a == 2 || door == "back" && a == 1)
        std::cout << "R";
    else
        std::cout << "Error";
    return 0;
}
