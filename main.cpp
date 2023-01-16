#include <iostream>
#include <string>
#include <fstream>

std::string sub_name;
std::fstream Subjects;

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

// Write subject name to file
void write_subject_name(std::string s_name) {
    Subjects.open("Subjects", std::ios::app); //app for appending
    if(Subjects.is_open()) {
        Subjects << s_name << std::endl;
        Subjects.close();
    }
    std::cout << "[^] Subject Added and Written to File" << std::endl;
}

// Read Subject Name from the File
void read_subject_name() {
    Subjects.open("Subjects", std::ios::in); //read mode
    if(Subjects.is_open()) {
        std::string line;
        while(std::getline(Subjects, line)) {
            std::cout << line << std::endl;
        }
        Subjects.close();
    }
}

int main() {
    char f_input, s_input;
    std::cout << "Welcome to Attendance Records Program" << std::endl;
    std::cout << "This Piece of Software Lets you Monitor your attendance" << std::endl;
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
