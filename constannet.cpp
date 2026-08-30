#include <iostream>
#include <string>

// Style constants
const std::string RESET     = "\033[0m";
const std::string BOLD      = "\033[1m";
const std::string ITALIC    = "\033[3m";
const std::string UNDERLINE = "\033[4m";

// Color constants
const std::string RED       = "\033[31m";
const std::string GREEN     = "\033[32m";
const std::string YELLOW    = "\033[33m";
const std::string BLUE      = "\033[34m";

int main() {
    // Example 1: Simple color
    std::cout << RED << "Error: Invalid Input" << RESET << "\n";

    // Example 2: Combining styles (Bold + Yellow)
    std::cout << BOLD << YELLOW << "Warning: Check your data" << RESET << "\n";

    // Example 3: Underline + Green
    std::cout << UNDERLINE << GREEN << "Success!" << RESET << "\n";
std::cout << "[\033[32m+\033[0m] Database connected successfully.\n";
std::cout << "[\033[33m!\033[0m] Warning: Low memory detected.\n";
std::cout << "[\033[31mX\033[0m] Error: File not found.\n";

    return 0;
}