#include <iostream>
#include <cstring>

class MyString
{
private:
    char *data;

public:
    MyString(const char *str)
    {
        int len = strlen(str);
        data = new char[len + 1];
        strcpy(data, str);
    }

    // deep copy constructor
    MyString(const MyString &other)
    {
        int len = strlen(other.data);
        data = new char[len + 1];
        strcpy(data, other.data);
    }

    ~MyString()
    {
        delete[] data;
    }

    // function to print the string
    void print()
    {
        std::cout << data << std::endl;
    }
};

int main()
{
    MyString s1("Hello");
    MyString s2(s1); // using the deep copy constructor
    s1.print();
    s2.print();
    return 0;
}
