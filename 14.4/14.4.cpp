#include <iostream>
#include <string>

int main()
{
    std::string s;
    std::cout << "Enter string: ";
    std::getline(std::cin, s);
    std::cout << "String: " << s << "\nString size: " << s.length() << "\nFirsc char: " << s[0] << "\nLastChar: " << s[s.length() - 1];
}