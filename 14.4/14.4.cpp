#include <iostream>
#include <string>

int main()
{
    std::string s;
    std::cout << "Enter string: ";
    std::getline(std::cin, s);
    std::cout << "String: " << s << "\nString size: " << s.length() << "\nFirst char: " << s.front() << "\nLastChar: " << s.back();
}