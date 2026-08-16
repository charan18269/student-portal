#include <iostream>
#include <string>
using namespace std;

void printWelcomeMessage() {
    std::cout << "      Welcome to Git !       " << std::endl;
}


void greetUser() {
    std::cout << "Hello, Developer!" << std::endl;
}

int addNumbers(int a, int b) {
    return a + b;
}

void displayStudentDetails(const string& name, int age) {
    cout << "\nStudent Details" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

bool isEligibleForPortal(int age) {
    return age >= 18;
}

bool isValidStudentAge(int age) {
    return age >= 18 && age <= 60;
}

int main() {
    printWelcomeMessage();
    greetUser();

    int num1 = 5;
    int num2 = 10;
    int result = addNumbers(num1, num2);

    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << result << std::endl;
    std::cout << "Program finished successfully." << std::endl;

    displayStudentDetails("Charan", 20);
    
if (isEligibleForPortal(20)) {
    cout << "Student is eligible for the portal." << endl;
} else {
    cout << "Student is not eligible for the portal." << endl;
}

if (isValidStudentAge(20)) {
    cout << "Student age is valid." << endl;
} else {
    cout << "Student age is invalid." << endl;
}

    return 0;
}