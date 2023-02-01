#include <iostream>
using namespace std;
class MyClass
{
private:
    int hiddenData;
    void hiddenFunction();

public:
    MyClass() { hiddenData = 0; }

    void setHiddenData(int data)
    {
        hiddenData = data;
    }

    int getHiddenData()
    {
        return hiddenData;
    }

    void callHiddenFunction()
    {
        hiddenFunction();
    }
};

void MyClass::hiddenFunction()
{
    // This function can only be called within the class
    std::cout << "This is a hidden function" << std::endl;
}

int main()
{
    MyClass obj;
    obj.setHiddenData(5);
    std::cout << "Hidden data: " << obj.getHiddenData() << std::endl;
    obj.callHiddenFunction();
    return 0;
}
