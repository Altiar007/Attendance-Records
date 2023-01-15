#include <iostream>
#include <string>

//Creating a class for lecture details
class lecture{
    std::string subject_name;
    public:
    void getdata(void);
    void display(void);
};

//function to get data of the class
void lecture::getdata(void) {
    s_name = subject_name;
}

//function to display data of the class
void lecture::display(void) {
    std::cout << "Subject Name: " << subject_name<< std::endl;
}

int main() {
    int n{};
    std::string sub_name;
    std::cout << "Enter the Number of Subjects You want to monitor attendance of: " << std::endl;
    std::cin >> n;
    for(int i = 1; i<n+1; i++){
        std::cout << "Enter the name of the " <<i <<"th Subject"<<std::endl;
        std:: cin >> sub_name;
        lecture sub_name;
        sub_name.getdata();
        sub_name.display();
    }
    return 0;
}
