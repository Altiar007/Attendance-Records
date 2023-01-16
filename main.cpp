#include <iostream>
#include <string>
#include <fstream>

std::string sub_name;

// Input Stream
void input() {
    std::cout << "[+] Enter the name of the Subject" << std::endl;
    std::getline(std::cin, sub_name);
}

// Output Stream
void output() {
    std::cout << "[^] Subject Name Entered: " << sub_name<< std::endl;
}

// Write subject name to file
void write_subject_name(std::string s_name) {
    std::fstream Subjects;
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
    }
}

int main() {
    input();
    output();
    write_subject_name(sub_name);
    return 0;
}
