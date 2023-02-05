#include <iostream>
#include <cstdarg>

void print(int count, ...)
{
    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; i++)
    {
        int value = va_arg(args, int);
        std::cout << value << std::endl;
    }

    va_end(args);
}

int main()
{
    print(3, 10, 20, 30);
    return 0;
}
