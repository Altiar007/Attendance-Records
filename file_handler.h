#ifndef FILE_HANDLER_H
#define FILE_HANDLER_H

#include <iostream>
#include <fstream>

std::fstream Subjects;

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

#endif