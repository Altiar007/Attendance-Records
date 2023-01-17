#include <iostream>
#include <string>

std::string test;

void input(){
    std::cout << "Enter Line" << std::endl;
    getline(std::cin, test);
}

void output() {
    std::cout << test << std::endl;
}

int main() {
    input();
    output();
}