#include <iostream>
#include <string>

// A lot of things are implicit such as type conversion as seen below in the code. Explicit on the other hand, disables the implicit functionality,
// and gets put infront of a constructor declaring that that constructor must be explicitly called.

class Entity
{
private:
    std::string m_Name;
    int m_Age;

public:
    Entity(const std::string &name)
        : m_Name(name), m_Age(-1) {}

    // Now explicit
    explicit Entity(int age)
        : m_Name("Unknown"), m_Age(age) {}
};

void PrintEntity(const Entity &entity)
{
    // Printing stuff
}

int main()
{
    PrintEntity(22);
    PrintEntity(Entity("AchroDev")); // Same error here for the conversion of a const char* to a const char[]

    Entity b = 26;          // The implicit detection no longer works due to the constructor with the int type now being explict
    Entity b2 = Entity(26); // You will have to explicitly tell the compiler that this is a Entity constructor

    std::cin.get();
}
