#include <iostream>
using namespace std;

// Base class
class shape
{
public:
    // pure virtual function
    virtual int getAr() = 0;
    void setWidth(int wd)
    {
        width = wd;
    }
    void setHeight(int hg)
    {
        height = hg;
    }

protected:
    int width;
    int height;
};

// Derived class
class rectangle : public shape
{
public:
    int getAr()
    {
        return (width * height);
    }
};
class triangle : public shape
{
public:
    int getAr()
    {
        return (width * height) / 2;
    }
};

int main()
{
    rectangle rect;
    triangle tri;

    rect.setWidth(6);
    rect.setHeight(5);

    // Print
    cout << "The Total Rectangle area: " << rect.getAr() << endl;

    tri.setWidth(9);
    tri.setHeight(8);

    cout << "The Total Triangle area: " << tri.getAr() << endl;

    return 0;
}