#include <iostream>
#include <initializer_list>

template <typename T>
void print(std::initializer_list<T> list)
{
    for (const T &value : list)
    {
        std::cout << value << std::endl;
    }
}

int main()
{
    print({10, 20, 30});
    std::cout << std::endl;
    print({"Everything Everywhere all at once"});
    return 0;
}
