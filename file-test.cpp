#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string sub_name;
    std::cout << "Enter Subject name: " << std::endl;
    std::cin >> sub_name;
    std::fstream Subjects;
    Subjects.open("Subjects", std::ios::out);
    if(Subjects.is_open()) {
        Subjects << sub_name << std::endl;
        Subjects.close();
    }
    Subjects.open("Subjects", std::ios::in); //read mode
    if(Subjects.is_open()) {
        std::string line;
        while(getline(Subjects, line)) {
            std::cout << line << std::endl;
        }
        Subjects.close();
    }
}