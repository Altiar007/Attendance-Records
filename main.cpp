#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include "file_handler.h"

std::string sub_name;

// Input Stream
void input() {
    std::cout << "[+] Enter the name of the Subject" << std::endl;
    // std::getline(std::cin, sub_name);
    std::cin >> sub_name;
}

// Output Stream
void output() {
    std::cout << "[^] Subject Name Entered: " << sub_name<< std::endl;
}

int main() {
    char f_input, s_input;
    Sleep(500);
    std::cout << "Welcome to Attendance Records Program" << std::endl;
    Sleep(500);
    std::cout << "This Piece of Software Lets you Monitor your attendance" << std::endl;
    Sleep(500);
    std::cout << "Press M to enter Menu" << std::endl;
    std::cout << "Press E to Exit The Program" << std::endl;
    std::cin >> f_input;

    switch (f_input) {
        case 'M':
            std::cout << "Press A to add a Subject" << std::endl;
            std::cout << "Press D to Display added Subjects" << std::endl;
            std::cout << "Press E to Exit Menu" << std::endl;
            // std::cout << "Press A to add a Subject" << std::endl;
            std::cin >> s_input;

            switch (s_input) {
                case 'A':
                input();
                write_subject_name(sub_name);
            
            case 'D':
                output();
            
            case 'E':
                break;
            }
        case 'E':
        break;
    }
    return 0;
}
