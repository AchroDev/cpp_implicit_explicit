#include <iostream>
#include <string>

class Entity
{
private:
    std::string m_Name;
    int m_Age;

public:
    Entity(const std::string &name)
        : m_Name(name), m_Age(-1) {}

    Entity(int age)
        : m_Name("Unknown"), m_Age(age) {}
};

void PrintEntity(const Entity &entity)
{
    // Printing stuff
}

int main()
{
    PrintEntity(22);
    PrintEntity("AchroDev"); // Same error here for the conversion of a const char* to a const char[]

    Entity a = "AchroDev"; // VScode says this is an error, but should be detecting it as a std::string instead of a const char[9]
    Entity b = 26;         // Thanks to implicit conversion, it is using the Entity constructor with an int value in the parameters

    std::cin.get();
}
