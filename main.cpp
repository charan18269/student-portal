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

int main() {
    printWelcomeMessage();
    greetUser();

    int num1 = 5;
    int num2 = 10;
    int result = addNumbers(num1, num2);

    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << result << std::endl;
    std::cout << "Program finished successfully." << std::endl;

    displayStudentDetails("Charan", 20);

    return 0;
}