#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

std::string generateRandomPassword(int length) {
    std::string password;
    const std::string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-=_+";
    int charCount = characters.length();

    srand(time(0)); // Seed the random number generator

    for (int i = 0; i < length; ++i) {
        int randomIndex = rand() % charCount;
        password += characters[randomIndex];
    }

    return password;
}

int main() {
    int passwordLength;

    std::cout << "Enter the desired length for the password: ";
    std::cin >> passwordLength;

    std::string password = generateRandomPassword(passwordLength);

    std::cout << "Generated password: " << password << std::endl;

    return 0;
}