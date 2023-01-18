#include <iostream>
#include <string>
#include <windows.h>
#include "file_handler.h"

std::string sub_name;

//Welcome Message
void welcome() {
    Sleep(500);
    std::cout << "Welcome to Attendance Records Program" << std::endl;
    Sleep(500);
    std::cout << "This Software Lets you Monitor your Attendance" << std::endl;
    Sleep(500);
}

// Display Options
void display_options(){
    std::cout << "Press M to enter Menu" << std::endl;
    std::cout << "Press H for Help Menu" << std::endl;
    std::cout << "Press E to Exit The Program" << std::endl;
}

// Display Menu
void display_menu() {
    std::cout << "Press A to add a Subject" << std::endl;
    std::cout << "Press D to Display added Subjects" << std::endl;
    std::cout << "Press E to Exit Menu" << std::endl;
}

// Input Stream
void input() {
    std::cout << "[+] Enter the name of the Subject" << std::endl;
    // getline(std::cin, sub_name);
    std::cin >> sub_name;
    write_subject_name(sub_name);
}

// Output Stream
void output() {
    std::cout << "[^] Subject Name Entered: " << sub_name<< std::endl;
}

int main() {
    char f_input = 'A', s_input = 'A';// first input, second input
    welcome();
    while(f_input != 'E') {
        display_options();
        std::cin >> f_input;
        switch (f_input) {
        case 'M': // Menu
            while (s_input != 'E') {
                display_menu();
                std::cin >> s_input;
                switch (s_input) {
                case 'A':
                    input();
                    s_input = 'Z';
                    break;
                
                case 'D':
                    output();
                    s_input = 'Z';
                    break;
                
                case 'E':
                    s_input = 'E';
                    break;

                default:
                    s_input = 'Z';
                    break;
                }
            }
            
            break;
        
        case 'H': // Help Text
            f_input = 'Z';
            break;
        
        case 'E': // Exit
            f_input = 'E';
            break;
        
        default:
            f_input = 'Z';
            break;
        }
    }
    return 0;
}
