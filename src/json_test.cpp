#include <iostream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

int main()
{

    // jdEmployees
    json jdEmployees =
    {
        {"firstName","Sean"},
        {"lastName","Brown"},
        {"StudentID",21453},
        {"Department","Computer Sc."}
    };

    // Access the values
    std::string fName = jdEmployees["firstName"];
    std::string lName = jdEmployees["lastName"];
    int sID = jdEmployees["StudentID"];
    std::string dept = jdEmployees["Department"];
   
    // Print the values
    std::cout << "First Name: " << fName << std::endl;
    std::cout << "Last Name: " << lName << std::endl;
    std::cout << "Student ID: " << sID << std::endl;
    std::cout << "Department: " << dept << std::endl;

    int check = fName.compare("Sean");
    std::cout << "check = " << check << std::endl;
             
    return 0;
}