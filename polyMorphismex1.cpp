#include <iostream>
using namespace std;
class shape
{
protected:
    int wd, hg;

public:
    shape(int w = 0, int h = 0)
    {
        wd = w;
        hg = h;
    }
    int ar()
    {
        cout << "The Parent class area: " << endl;
        return 0;
    }
};

class rectangle : public shape
{
public:
    rectangle(int w = 0, int h = 0) : shape(w, h) {}

    int ar()
    {
        cout << "The Rectangle class area: " << endl;
        return (wd * hg);
    }
};

class triangle : public shape
{
public:
    triangle(int w = 0, int h = 0) : shape(w, h) {}

    int ar()
    {
        cout << "The Triangle class area: " << endl;
        return (wd * hg / 2);
    }
};

int main()
{
    shape *sh;
    rectangle rc(10, 7);
    triangle tr(10, 5);

    // store the address of Rectangle
    sh = &rc;

    // call rectangle area.
    sh->ar();
    cout << endl;
    cout << rc.ar() << endl;

    // store the address of Triangle
    sh = &tr;

    // call triangle area.
    sh->ar();
    cout << endl;
    cout << tr.ar() << endl;

    return 0;
}
