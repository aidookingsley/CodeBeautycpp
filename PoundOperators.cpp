#include <iostream>
using namespace std;

#define MKSTR(x) #x
#define concat(a, b) a##b
int main()
{
    cout << "MKSTR(Hello World) = " << MKSTR(Hello World) << endl;
    int xy = 100;

    cout << "concat(x,y) = " << concat(x, y) << endl;

    return 0;
}
